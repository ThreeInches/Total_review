#include "rsa.h"

void testRsa()
{
	//1、产生大数随机数并进行大数素性检测平p, q
	//2、计算n = p * q
	//3、计算欧拉函数orla(n) = (p - 1) * (q - 1)
	//4、随机选取e保证1 <= e <= orla(n) && e 与 orla(n)互质
	//5、计算e的orla(n)的模反元素d，使得d * e = 1(mod orla(n))
	//6、产生一对公钥和私钥(e, n) (d, n)
	RSA rsa;
	DataType p = rsa.getPrime();
	std::cout << "p:" << p << std::endl;
	DataType q = rsa.getPrime();
	std::cout << "q:" << q << std::endl;
	DataType n = rsa.getNkey(p, q);
	std::cout << "n:" << n << std::endl;
	DataType orla = rsa.getOrla(p, q);
	std::cout << "orla:" << orla<< std::endl;
	DataType e = rsa.getEkey(orla);
	std::cout << "e:" << e << std::endl;
	DataType d = rsa.getDkey(e, orla);
	std::cout << "d:" << d << std::endl;
	std::cout << "(e, n) <==> (" << e << ',' << n << ')' << std::endl;
	std::cout << "(d, n) <==> (" << d << ',' << n << ')' << std::endl;

}

int main()
{
	testRsa();

	return 0;
}