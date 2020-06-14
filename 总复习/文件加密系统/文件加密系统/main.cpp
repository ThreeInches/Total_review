#include <iostream>
#include "RSA.h"

void test()
{
	RSA res;
	res.getKeys();
	Key key = res.getKey();

	cout << "EKey" << key.m_EKey << endl;
	cout << "DKey" << key.m_DKey << endl;
	cout << "NKey" << key.m_NKey << endl;

	DataType original = 2;
	DataType decout = res.encryption(original, key.m_EKey, key.m_NKey);
	cout << original << endl;
	cout << decout << endl;
	cout << res.decryption(decout, key.m_DKey, key.m_NKey) << endl;
}

void testRSA()
{
	RSA r;

	r.encryptionFile("test.txt", "test.encryption.txt");
	r.decryptionFile("test.encryption.txt", "test.decryption.txt");
}

int main()
{
	test();
	testRSA();
	system("pause");
	return 0;
}
