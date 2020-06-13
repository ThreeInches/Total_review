#define _SCL_SECURE_NO_WARNINGS
#define BOOST_NO_CXX11_VARIADIC_TEMPLATES
#include <iostream>
#include <boost\multiprecision\random.hpp>
#include <boost\multiprecision\cpp_int.hpp>
#include <limits>

typedef boost::multiprecision::cpp_int DataType;

using namespace std;

void testRandom()
{
	boost::random::mt19937 gen(time(nullptr));
	boost::random::uniform_int_distribution<DataType> dist(0, DataType(1) << 1023);
	for (int i = 0; i < 50; i++)
	{
		cout << dist(gen) << " ";
	}
	
}

int main()
{
	testRandom();

	system("pause");
	return 0;
}
