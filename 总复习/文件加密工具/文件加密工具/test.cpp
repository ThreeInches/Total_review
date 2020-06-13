#include "rsa.h"
#include "BigNum.h"


void test()
{
	rsa res;
	res.getKeys();
	Key key = res.getKey();

	cout << "EKey" << key.m_EKey << endl;
	cout << "DKey" << key.m_Dkey << endl;
	cout << "NKey" << key.m_NKey << endl;

	//DataType original = 2;
	//DataType decout = res.encryption(original, key.m_EKey, key.m_NKey);
	//cout << original << endl;
	//cout << decout << endl;
	//cout << res.decryption(decout, key.m_Dkey, key.m_NKey) << endl;
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
	//cout << add.sub("199999999", "123456789") << endl;

	BigNum aa = "199999999";
	BigNum bb = "123456789";
	cout << aa + bb << endl;

	cout << "aa:" << aa << endl;
	cout << "bb:" << bb << endl;
}

void testBigNumSub()
{
	BigNum add;
	int a = 199999999;
	int b = 123456789;

	cout << a - b << endl;
	//cout << add.sub("199999999", "123456789") << endl;

	BigNum aa = "199999999";
	BigNum bb = "123456789";
	cout << aa - bb << endl;

	cout << "aa:" << aa << endl;
	cout << "bb:" << bb << endl;
}

void testBigNumMul()
{
	BigNum add;
	int a = 33943;
	int b = 43324;

	cout << a * b << endl;
	//cout << add.mul("33943", "43324") << endl;

	BigNum aa = "33943";
	BigNum bb = "43324";
	cout << aa * bb << endl;

	cout << "aa:" << aa << endl;
	cout << "bb:" << bb << endl;
}

void testBigNumDev()
{
	BigNum add;
	int a = 19191919;
	int b = 128321;

	cout << a / b << "……" << a%b << endl;
	//cout << add.dev("19191919", "128321").first << ""……"" << add.dev("19191919", "128321").second << endl;

	BigNum aa = "19191919";
	BigNum bb = "128321";
	cout << aa / bb << endl;
	cout << aa % bb << endl;

	cout << "aa:" << aa << endl;
	cout << "bb:" << bb << endl;
}

void testBoostInt()
{
	boost::multiprecision::cpp_int ci;
	ci = 1024;
	cout << ci << endl;

	string num = "89884656743115795386465259539451236680898848947115328636715040578866337902750481566354238661203768010560056939935696678829394884407208311246423715319737062188883946712432742638151109800623047059726541476042502884419075341171231440736956555270413618581675255342293149119973622969239858152417678164812112068608";
	boost::multiprecision::cpp_int big(num);
	cout << big << endl;
	cout << big + 1 << endl;

	boost::multiprecision::int1024_t n1024(num);
	cout << n1024 << endl;
	cout << n1024 + 1 << endl;

	boost::multiprecision::int1024_t n1025 = boost::multiprecision::int1024_t(1) << 1023;
	cout << n1025 << endl;

	for (boost::multiprecision::int1024_t i = 0; i < n1025; i++)
	{

	}
	cout << "finish()" << endl;
}

void testRandom()
{
	boost::random::mt19937 gen(time(nullptr));
	boost::random::uniform_int_distribution<DataType> dist(0, DataType(1) << 1024);
	for (int i = 0; i < 100; i++)
	{
		DataType num = dist(gen);
		cout << num << " ";
	}
}

int main()
{
	test();
	//testFile();
	//testRSA();
	//testBigNumAdd();
	//testBigNumSub();
	//testBigNumMul();
	//testBigNumDev();
	//testBoostInt();
	//testRandom();
	system("pause");
	return 0;
}
