//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void TestString2()
//{
//	string s("Hello,World!");
//
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(10, 'a');
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(15);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//	s.resize(5);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//resize不会缩小原来已经扩充的capacity
//}
//
//void TestString3()
//{
//	string s;
//
//	s.reserve(100);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(50);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//reserve不会缩小已经扩充的capacity
//}
//
//void TestString4()
//{
//	string s;
//	size_t size = s.capacity();
//	
//	cout << "making s grow:" << endl;
//
//	for (int i = 0; i < 100; i++)
//	{
//		s.push_back('c');
//		if (size != s.capacity())
//		{
//			size = s.capacity();
//			cout << "capacity changed: " << size << endl;
//		}
//	}
//}
//
////注：
////1、size()和length()方法底层实现原理完全相同，引入size()的原因是为了与其他容器的接口保持一致；
////2、clear只会清空string中的有效字符，不会改变底层空间大小
////3、resize(size_t n)与resize(size_t n, char c)都是将字符串中的有效字符个数改变到n个,resize(size_t n)是将多出来的空间补0，resize(size_t n, char c)是将多出来的字符补c
////4、resize不会缩小原来已经扩充的capacity
////5、reserve(size_t res_arg = 0):为string预留空间，不改变有效元素个数，当reserve的参数小于string的底层空间大小时，reserve不会改变容量大小
////6、任何操作不会导致空间缩小
//int main()
//{
//	TestString2();
//	TestString3();
//	TestString4();
//
//	system("pause");
//	return 0;
//}
