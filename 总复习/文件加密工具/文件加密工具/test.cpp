#include "rsa.h"
#include "BigNum.h"


void test()
{
	rsa res;
	res.getKeys();
	Key key = res.getKey();

	cout << key.m_EKey << endl;
	cout << key.m_Dkey << endl;
	cout << key.m_NKey << endl;

	DataType original = 2;
	DataType decout = res.encryption(original, key.m_EKey, key.m_NKey);
	cout << original << endl;
	cout << decout << endl;
	cout << res.decryption(decout, key.m_Dkey, key.m_NKey) << endl;
}

struct A
{
	int a;
	char c;
	double d;
};

void testFile()
{
	//ifstream fin("test.txt");
	////文本形式打开
	//char c;
	//int a;
	//double d;
	//fin >> c;
	//fin >> a;
	//fin >> d;
	//cout << "a:" << a << "c:" << c << "d:" << d << endl;
	//char line[100];
	//fin.getline(line, 10);
	//cout << fin.gcount() << endl;

	/*ifstream fin("test.txt", ifstream::binary);
	char buffer[100] = { 0 };
	fin.read(buffer, 100);
	cout << fin.gcount() << endl;
	cout << buffer << endl;*/

	//字符流
	//A a;
	//a.a = 4;
	//a.c = 'c';
	//a.d = 3.14;

	//ofstream fout("testout.txt");
	//fout << a.a << endl;
	//fout << a.c << endl;
	//fout << a.d << endl;

	//字节流
	//A a;
	//a.a = 4;
	//a.c = 'c';
	//a.d = 3.14;

	//ofstream fout("testoutBinary.txt", ofstream::binary);
	//fout.write((char*)&a, sizeof(A));
	//fout.close();

	//ifstream fin1("testoutBinary.txt", ifstream::binary);
	//A b;
	//fin1.read((char*)&b, sizeof(A));
	//cout << b.a << b.c << b.d << endl;
}

void testRSA()
{
	rsa r;

	r.ecrept("test.txt", "test.ecrpet.txt");
	r.dcrept("test.ecrpet.txt", "test.decrpet.txt");
}

void testBigNumAdd()
{
	BigNum add;
	int a = 199999999;
	int b = 123456789;

	cout << a + b << endl;
	cout << add.add("199999999", "123456789") << endl;
}

void testBigNumSub()
{
	BigNum add;
	int a = 199999999;
	int b = 123456789;

	cout << a - b << endl;
	cout << add.sub("199999999", "123456789") << endl;
}

void testBigNumMul()
{
	BigNum add;
	int a = 33943;
	int b = 43324;

	cout << a * b << endl;
	cout << add.mul("33943", "43324") << endl;
}

int main()
{
	//test();
	//testFile();
	//testRSA();
	testBigNumAdd();
	testBigNumSub();
	testBigNumMul();
	system("pause");
	return 0;
}
