#include <iostream>
#include <set>

using namespace std;

//multiset介绍
//1、multiset是按照特定顺序存储元素的容器，其中元素是可以重复的
//2、在multiset在，元素的value也会识别它组成的键值对，multiset元素的值不能在容器中进行修改，但可以插入和删除
//3、在内部，multiset按照特定的严格弱排序准则进行排序
//4、multiset容器通过key访问单个元素比unordered_multiset容器慢，但当使用迭代器遍历的时候，会得到一个有序序列
//5、multiset的底层是二叉搜索树（红黑树）

//注：
//1、multiset的底层存储的是<value, value>的键值对
//2、multiset的插入接口中只需要插入即可
//3、multiset与set的区别是multiset中的元素可以重复
//4、使用迭代器遍历，可以得到有序的multiset
//5、multiset中的元素不可修改
//6、multiset的查找的时间复杂度是Olog2N
//7、multiset的作用，可以对元素进行排序

int main()
{
	int array[] = { 0, 2, 1, 4, 3, 6, 5, 7, 8, 9, 0, 7, 6, 8, 9, 5, 4, 2, 1, 3 };

	multiset<int> ms(array, array + sizeof(array) / sizeof(array[0]));
	for (auto& e : ms)
	{
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
