//#include <iostream>
//#include <set>
//#include <string>
//
//using namespace std;
//
////set介绍：
////1、set是按照一定的次序存储元素的容器
////2、在set中，元素value也标识它（value就是key，类型为T），并且每个value必须是惟一的
////3、set允许插入和删除，不允许修改
////4、set按照内部比较对象（类型比较）所指示的特定严格弱排序准则进行排序
////5、set在底层用二叉搜索树（红黑树）实现
//
////注：
////1、set中只放value，但是底层存放的是<value, value>的键值对
////2、set插入元素只需呀插入value即可
////3、set中的元素唯一
////4、set遍历后有序，默认按照小于排序
////5、set中查找元素的复杂度为log2n
////6、set中的元素不允许修改
////7、set的底层使用二叉搜索树（红黑树）实现
//
//int main()
//{
//	//用数组array中的元素构造set
//	int array[] = { 1, 3, 2, 4, 5, 6, 7, 8, 9, 0, 8, 7, 0, 9, 2, 1, 3, 6, 4, 5 };
//	set<int> s(array, array + sizeof(array) / sizeof(array[0]));
//	cout << s.size() << endl;
//
//	for (auto& e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	for (auto it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	cout << s.count(3) << endl;
//	system("pause");
//	return 0;
//}
