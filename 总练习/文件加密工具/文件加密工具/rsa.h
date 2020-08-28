#define BOOST_NO_CXX11_VARIADIC_TEMPLATES

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>//大数库
#include <boost/multiprecision/random.hpp>//产生大数随机数
#include <boost/multiprecision/miller_rabin.hpp>//大数素性检测

//1、产生大数随机数并进行大数素性检测平p, q
//2、计算n = p * q
//3、计算欧拉函数orla(n) = (p - 1) * (q - 1)
//4、随机选取e保证1 <= e <= orla(n) && e 与 orla(n)互质
//5、计算e的orla(n)的模反元素d，使得d * e = 1(mod orla(n))
//6、产生一对公钥和私钥(e, n) (d, n)

typedef boost::multiprecision::int1024_t DataType;

struct Key
{
	DataType m_eKey;
	DataType m_dKey;
	DataType m_nKey;
};

class RSA
{
public:
	bool isPrime(DataType num);
	DataType ecrept(DataType a, DataType b, DataType c);
	DataType getPrime();
	DataType getNkey(DataType p, DataType q);
	DataType getOrla(DataType p, DataType q);
	DataType getEkey(DataType orla);
	DataType getDkey(DataType eKey, DataType orla);
	DataType getGcd(DataType a, DataType b);
	DataType getExgcd(DataType a, DataType b, DataType x, DataType y);
private:
	Key m_key;
};
