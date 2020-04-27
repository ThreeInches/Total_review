//#include <iostream>
//#include <vector>
//
//using namespace std;
//
////RAII是一种利用对象生命周期来控制程序资源（内存，文件句柄，网络连接，互斥量）的技术
//
////在对象构造时获取资源，接着控制对资源的访问使之在对象的生命周期内始终保持有效，最后对象析构的的时候释放资源
////这样做有助于将对象所需的资源在其生命周期内始终保持有效
//
////使用RAII技术设计SmartPtr类
//template<class T>
//class SmartPtr
//{
//public:
//	SmartPtr(T* ptr = nullptr)
//		:m_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		if (m_ptr)
//		{
//			delete m_ptr;
//		}
//	}
//private:
//	T* m_ptr;
//};
//
//void dealMergeSort(int* a, int start, int end, int* tmp)
//{
//	if (start >= end)
//	{
//		return;
//	}
//	int mid = (start + end) / 2;
//	dealMergeSort(a, start, mid, tmp);
//	dealMergeSort(a, mid + 1, end, tmp);
//
//	int p = start;
//	int q = mid + 1;
//	int index = start;
//
//	while (p <= mid && q <= end)
//	{
//		if (a[p] < a[q])
//		{
//			tmp[index] = a[p];
//			p++;
//		}
//		else
//		{
//			tmp[index] = a[q];
//			q++;
//		}
//		index++;
//	}
//	for (; p <= mid; p++)
//	{
//		tmp[index] = a[p];
//		index++;
//	}
//	for (; q <= end; q++)
//	{
//		tmp[index] = a[q];
//		index++;
//	}
//	for (int i = start; i < end; i++)
//	{
//		a[i] = tmp[i];
//	}
//}
//
//void MergeSort(int* a, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int)*n);
//	SmartPtr<int> sp(tmp);
//	dealMergeSort(a, 0, n - 1, tmp);
//
//	vector<int> v(100000000, 10);
//}
//
//int main()
//{
//	try
//	{
//		int a[5] = { 4, 5, 2, 3, 1 };
//		MergeSort(a, 5);
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "Unknow erro" << endl;
//	}
//	system("pause");
//	return 0;
//}
