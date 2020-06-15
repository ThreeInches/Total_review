#include "BigNum.h"

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

	cout << a / b << "бнбн" << a%b << endl;
	//cout << add.dev("19191919", "128321").first << ""бнбн"" << add.dev("19191919", "128321").second << endl;

	BigNum aa = "19191919";
	BigNum bb = "128321";
	cout << aa / bb << endl;
	cout << aa % bb << endl;

	cout << "aa:" << aa << endl;
	cout << "bb:" << bb << endl;
}

int main()
{
	testBigNumAdd();
	testBigNumSub();
	testBigNumMul();
	testBigNumDev();
	system("pause");
	return 0;
}
