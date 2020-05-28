#include <iostream>
#include <string>
#include <map>

using namespace std;

//multimap的概念
//1、multimap是关联式容器，它按特定的次序（按照key来比较）存储由键key和值value组合而成的元素,多个键值对之间的key可以重复
//2、在multimap中，键值key通常用于排序和唯一标识元素，值value中存储与键key关联的内容。
//3、multimap按照指定的严格弱排序对key进行排序
//4、multimap中通过键值访问单个元素比unordered_multimap容器慢，使用迭代器直接遍历multimap的元素可以得到关于key有序的序列
//5、multimap的底层通常是平衡二叉搜索树（红黑树）
//6、multimap和map的唯一区别是multimap中的key可以重复，而map的key是唯一的

int main()
{
	multimap<string, string> m;

	//向map中插入元素
	//将键值对插入map，用pair直接构造键值对
	m.insert(pair<string, string>("peach", "桃子"));

	//用male_pair函数构造键值对
	m.insert(make_pair("peach", "桃子"));

	//若是key不存在，则抛出异常
	//m.at("banana") = "香蕉";

	//返回m的大小
	cout << m.size() << endl;

	//遍历map中的元素
	for (auto& e : m)
	{
		cout << e.first << "--->" << e.second << endl;
	}
	cout << endl;

	//删除key为"apple"的元素
	m.erase("apple");

	if (m.count("apple") == 1)
	{
		cout << "apple还在" << endl;
	}
	else
	{
		cout << "apple被删除" << endl;
	}
	system("pause");
	return 0;
}
