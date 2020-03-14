#include <iostream>
#include <time.h>
#include "rsa.h"

//º”√‹
DataType ecrept(DataType data, DataType ekey, DataType pkey);
//Ω‚√‹
DataType decrept(DataType data, DataType ekey, DataType pkey);
bool isPrime(DataType data)
{
	if (data <= 0)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(data); i++)
	{
		if (data%i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}

DataType getPrime()
{
	srand(time(NULL));
	DataType prime;
	while (true)
	{
		prime = rand() % 100 + 2;
		if (isPrime(prime))
		{
			break;
		}
	}
	return prime;
}

DataType getPkey(DataType prime1, DataType prime2)
{
	return prime1*prime2;
}

DataType getOrla(DataType prime1, DataType prime2)
{
	return (prime1 - 1)*(prime2 - 1);
}

DataType getEkey(DataType orla)
{
	srand(time(NULL));
	DataType ekey;
	while (1)
	{
		ekey = rand() % orla;
		if (ekey > 1 && getGcd(ekey, orla) == 1)
		{
			return ekey;
		}
	}
}

DataType getDkey(DataType ekey, DataType orla)
{
	DataType dkey = orla / ekey;
	while (1)
	{
		if ((dkey*ekey) % orla == 1)
		{
			return dkey;
		}
		dkey++;
	}
}

DataType getGcd(DataType data1, DataType data2)
{
	DataType residual;
	while (residual = data2%data1)
	{

	}
}