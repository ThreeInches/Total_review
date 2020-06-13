#pragma once
#define BOOST_NO_CXX11_VARIADIC_TEMPLATES
#include <iostream>
#include <algorithm>
#include <fstream>
#include <time.h>
#include <boost\multiprecision\cpp_int.hpp>//大数
#include <boost\multiprecision\random.hpp>//大数随机数
#include <boost\multiprecision\miller_rabin.hpp>//大数素性检测

using namespace std;

//typedef long DataType;
typedef boost::multiprecision::cpp_int DataType;
#define NUM 256

struct Key
{
	DataType m_EKey;
	DataType m_Dkey;
	DataType m_NKey;
};

//1、随机产生两个素数p，q
//2、计算n 其中n = p * q
//3、求n的欧拉函数，计算f(n) = f(p) * f(q) = (p - 1)*(q - 1)
//4、随机取e  1 < e < f(n) 且e 与 f(n)互质
//5、计算e对于f(n)的模反元素d (d * e) % f(n) = 1
//6、产生公钥(e, n) 私钥(d, n)

class rsa
{
public:

	rsa();
	//文件加密
	void ecrept(const char* filename, const char* fileout);
	//文件解密
	void dcrept(const char* filename, const char* fileout);

	//1、随机产生两个素数p，q
	DataType getPrime();
	//判断一个数是否是素数
	bool isPrime(DataType data);
	//大数素性检测
	bool isPrimeBigNum(DataType data);
	//2、计算n 其中n = p * q
	DataType getNkey(DataType prime1, DataType prime2);
	//3、求n的欧拉函数，计算f(n) = f(p) * f(q) = (p - 1)*(q - 1)
	DataType getOrla(DataType prime1, DataType prime2);
	//4、求EKey随机取e  1 < e < f(n) 且e 与 f(n)互质
	DataType getEKey(DataType orla);
	//5、求DKey计算e对于f(n)的模反元素d (d * e) % f(n) = 1
	DataType getDKey(DataType EKey, DataType orla);
	//加密过程：模幂运算 即a^b%c
	DataType encryption(DataType data, DataType EKey, DataType NKey);
	//解密过程：模幂运算 即a^b%c
	DataType decryption(DataType data, DataType DKey, DataType NKey);
	//求两个数的最大公约数
	DataType getCommonDivisor(DataType data1, DataType data2);
	//产生所有的key
	void getKeys();
	Key getKey();
private:
	Key m_Key;
};