#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << sizeof(&arr) / sizeof(arr[0]) << endl;
	cout << arr << endl;
	cout << arr + 1 << endl;
	cout << *(arr + 1) << endl;
	cout << &arr << endl;
	cout << *(&arr) << endl;
	cout << *(&arr + 1) << endl;
	return 0;
}
