#include <iostream>
#include <string>
#include <map>

using namespace std;

//map的概念
//1、map是关联式容器，它按特定的次序（按照key来比较）存储由键key和值value组合而成的元素
//2、在map中，键值key通常用于排序和唯一标识元素，值value中存储与键key关联的内容。
//3、map按照键key来比较排序
//4、map中通过键值访问单个元素比unordered_map容器慢，但map允许根据顺序对元素进行直接迭代
//5、map支持下标访问，即map[key] = value
//6、map的底层通常是平衡二叉搜索树（红黑树）

int main()
{
	map<string, string> m;

	//向map中插入元素
	//将键值对插入map，用pair直接构造键值对
	m.insert(pair<string, string>("peach", "桃子"));

	//用male_pair函数构造键值对
	m.insert(make_pair("peach", "桃子"));

	//用operator[]向map中插入元素

	//operator[]的原理：
	//用<key, T()>构造一个键值对，然后调用insert()函数将该键值对插入到map中
	//如果key已经存在，插入失败，insert函数返回该key所在位置的迭代器
	//如果key不存在，插入成功，insert函数返回新插入元素所在位置的迭代器
	//operator[]最后将insert返回值键值对中的value返回
	m["apple"] = "苹果";

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

	//key唯一，若是重复插入，则插入失败
	auto res = m.insert(make_pair("peach", "桃子~"));

	if (res.second)
	{
		cout << "<peach, 桃子>不在map中，已经插入" << endl;
	}
	else
	{
		cout << "键值为peach的元素已存在：" << res.first->first << "--->" << res.first->second << "插入失败" << endl;
	}

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
