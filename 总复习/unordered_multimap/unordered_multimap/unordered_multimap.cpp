#include <iostream>
#include <unordered_map>

using namespace std;

//unordered_multimap的文档介绍
//1、无序容器是存储由键值和映射值组合而成的元素的关联容器，非常类似于unordered_map容器，但是允许不同的元素具有等价的键。
//2、在unordered_数百万ap中，键值通常用于惟一地标识元素，而映射的值是一个对象，其中包含与该键相关联的内容。键和映射值的类型可能不同。
//3、在内部, unordered_multimap中的元素没有在任何特定的顺序排序对关键或映射值, 但组织成桶取决于他们的散列值, 以便快速访问单个元素直接的键值(平均一个恒定的平均时间复杂度)。
//4、具有等价键的元素被分组在同一个bucket中，并且迭代器(参见equal_range)可以遍历所有元素。
//5、容器中的迭代器至少是前向迭代器。
//6、注意这个容器不是在它自己的头文件中定义的，而是共享头文件 <unordered_map>。

int main()
{
	unordered_multimap<std::string, int>
		first,
		second = { { "AAPL", 200 }, { "GOOG", 100 } };

	pair<std::string, int> mypair("MSFT", 500);

	first.insert(mypair);                            // copy insertion
	first.insert(make_pair("GOOG", 50)); // move insertion
	first.insert(second.begin(), second.end());  // range insertion
	first.insert({ { "ORCL", 100 }, { "GOOG", 100 } });    // initializer list insertion

	unordered_multimap<string, string> myumm = {
		{ "strawberry", "red" },
		{ "banana", "yellow" },
		{ "orange", "orange" },
		{ "lemon", "yellow" },
		{ "apple", "red" },
		{ "apple", "green" },
		{ "pear", "green" },
	};


	// erase examples:
	myumm.erase(myumm.begin());     // erasing by iterator
	myumm.erase("apple");             // erasing by key (erases 2 elements)
	myumm.erase(myumm.find("orange"), myumm.end()); // erasing by range

	unordered_multimap<string, string>
		a = { { "orange", "FL" }, { "apple", "NY" }, { "apple", "WA" } },
		b = { { "strawberry", "LA" }, { "strawberry", "NC" }, { "pear", "OR" } };

	a.swap(b);

	cout << myumm.empty() << endl;
	cout << myumm.size() << endl;
	cout << myumm.max_size() << endl;

	system("pause");
	return 0;
}
