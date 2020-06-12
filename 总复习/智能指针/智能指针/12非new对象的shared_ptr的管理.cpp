#include <iostream>
#include <memory>

using namespace std;

template<class T>
class FreeFunc
{
public:
	void operator () (T* ptr)
	{
		cout << "Free:" << ptr << endl;
		free(ptr);
	}
};

template<class T>
class DeleteArrayFunc
{
public:
	void operator () (T* ptr)
	{
		cout << "delete[]" << ptr << endl;
		delete[] ptr;
	}
};

int main()
{
	FreeFunc<int> freeFunc;
	shared_ptr<int> sp1((int*)malloc(sizeof(int)), freeFunc);

	DeleteArrayFunc<int> deleteArrayFunc;
	shared_ptr<int> sp2((int*)malloc(sizeof(int)), deleteArrayFunc);
	system("pause");
	return 0;
}
