#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS 
#include <iostream>
#include <string>
#include <windows.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/multiprecision/random.hpp>
#include <boost/multiprecision/miller_rabin.hpp>

using namespace std;

//void testCpp_int()
//{
//	string num = "54654646463435445232342443243242489799899798";
//	boost::multiprecision::cpp_int ci(num);
//	boost::multiprecision::int1024_t c1(num);
//	cout << ci << endl;
//	cout << ci + 1 << endl;
//	cout << ci - 9 << endl;
//	cout << ci * 2 << endl;
//	cout << ci / 3 << endl;
//}
//
//void testRandom()
//{
//	string ci = "8237819731983719837219731923917482748127419";
//	boost::multiprecision::int1024_t num(ci);
//	boost::random::mt19937_64 gen(time(nullptr));
//	boost::random::uniform_int_distribution<boost::multiprecision::int1024_t> dist(0, boost::multiprecision::int1024_t(1) << 1023);
//
//	boost::multiprecision::int1024_t a = dist(gen);
//	cout << a << endl;
//}

bool isPrime(boost::multiprecision::int1024_t num)
{
	boost::random::mt19937_64 gen(time(nullptr));
	if (boost::multiprecision::miller_rabin_test(num, 25, gen))
	{
		if (boost::multiprecision::miller_rabin_test((num - 1) / 2, 25, gen))
		{
			return true;
		}
	}

	return false;
}

boost::multiprecision::int1024_t getPrime()
{
	boost::random::mt19937_64 gen(time(nullptr));
	boost::random::uniform_int_distribution<boost::multiprecision::int1024_t> dist(0, boost::multiprecision::int1024_t(1) << 100);
	boost::multiprecision::int1024_t num = dist(gen);

	while (1)
	{
		if (isPrime(num))
		{
			break;
		}
	}

	return num;
}

int main()
{
	boost::multiprecision::int1024_t num = getPrime();
	cout << num << endl;

	return 0;
}