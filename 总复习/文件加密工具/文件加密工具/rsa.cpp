#include <iostream>
#include <algorithm>
#include <time.h>
#include "rsa.h"

using namespace std;

//1、随机产生两个素数p，q
DataType rsa::getPrime()
{
	srand(time(nullptr));
	DataType prime;
	while (1)
	{
		prime = rand() % 100 + 2;
		if (isPrime(prime))
		{
			break;
		}
	}

	return prime;
}

//判断一个数是否是素数
bool rsa::isPrime(DataType data)
{
	if (data < 0)
	{
		return false;
	}

	for (int i = 2; i <= sqrt(data); i++)
	{
		if (data % i == 0)
		{
			return false;
		}
	}

	return true;
}

//2、计算n 其中n = p * q
DataType rsa::getNkey(DataType prime1, DataType prime2)
{
	return prime1 * prime2;
}

//3、求n的欧拉函数，计算f(n) = f(p) * f(q) = (p - 1)*(q - 1)
DataType rsa::getOrla(DataType prime1, DataType prime2)
{
	return (prime1 - 1) * (prime2 - 1);
}

//4、求EKey随机取e  1 < e < f(n) 且e 与 f(n)互质
DataType rsa::getEKey(DataType orla)
{
	srand(time(nullptr));
	DataType EKey;
	while (1)
	{
		EKey = rand() % orla;
		if (EKey > 1 && getCommonDivisor(EKey, orla) == 1)
		{
			return EKey;
		}
	}
}

//5、求DKey计算e对于f(n)的模反元素d (d * e) % f(n) = 1
DataType rsa::getDKey(DataType EKey, DataType orla)
{
	DataType DKey;
	DKey = orla / EKey;
	while (1)
	{
		if ((DKey * EKey) % orla == 1)
		{
			return DKey;
		}
		DKey++;
	}
}

//加密过程：模幂运算 即a^b%c
DataType rsa::encryption(DataType data, DataType EKey, DataType NKey)
{
	//i: 0,……, 最后一位
	DataType Ai = data;
	DataType msgE = 1;
	//data^Key%NKey
	while (EKey)
	{
		if (EKey & 1)
		{
			msgE = (msgE * Ai) % NKey;
		}
		EKey >> 1;
		Ai = (Ai * Ai) % NKey;
	}

	return msgE;
}

//解密过程：模幂运算 即a^b%c
DataType rsa::decryption(DataType data, DataType DKey, DataType NKey)
{
	return (DataType)pow(data, DKey) % NKey;
}

//求两个数的最大公约数（辗转相除法）
DataType rsa::getCommonDivisor(DataType data1, DataType data2)
{
	DataType res = data1 % data2;
	while (res)
	{
		data1 = data2;
		data2 = res;
		res = data1 % data2;
	}

	return data2;
}

void rsa::getKeys()
{
	DataType prime1 = getPrime();
	DataType prime2 = getPrime();
	while (prime1 == prime2)
	{
		prime2 = getPrime();
	}

	DataType orla = getOrla(prime1, prime2);
	m_Key.m_NKey = getNkey(prime1, prime2);
	m_Key.m_EKey = getEKey(orla);
	m_Key.m_Dkey = getDKey(m_Key.m_EKey, orla);
}

Key rsa::getKey()
{
	return m_Key;
}