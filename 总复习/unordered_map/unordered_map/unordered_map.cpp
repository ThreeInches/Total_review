#include <iostream>
using namespace std;
#include <unordered_map>


//unordered_map文档介绍
//1、unordered_map是存储<key, value>键值对的关联式容器，其允许通过key快速的索引到与其对应的value
//2、unordered_map中，键值通常用于惟一的标识元素，而映射值是一个对象，其内容与此键关联，键和映射的类型可以不同
//3、在内部，unordered_map没有对<key, value>进行排序，unordered_map将相同哈希值的键值对放在对应的桶中
//4、unordered_map容器通过key访问单个元素比map快，但它遍历元素子集的范围和迭代方面效率较低
//5、unordered_map实现了直接访问操作符（operator[]）允许通过key作为参数访问value
//6、unordered_map的迭代器至少是前向迭代器

int main()
{
	unordered_map<string, double>
		myrecipe,
		mypantry = { { "milk", 2.0 }, { "flour", 1.5 } };

	pair<string, double> myshopping("baking powder", 0.3);

	myrecipe.insert(myshopping);                        // copy insertion
	myrecipe.insert(pair<string, double>("eggs", 6.0)); // move insertion
	myrecipe.insert(mypantry.begin(), mypantry.end());  // range insertion
	myrecipe.insert({ { "sugar", 0.8 }, { "salt", 0.1 } });    // initializer list insertion

	unordered_map<std::string, std::string> mymap;

	// populating container:
	mymap["U.S."] = "Washington";
	mymap["U.K."] = "London";
	mymap["France"] = "Paris";
	mymap["Russia"] = "Moscow";
	mymap["China"] = "Beijing";
	mymap["Germany"] = "Berlin";
	mymap["Japan"] = "Tokyo";

	// erase examples:
	mymap.erase(mymap.begin());      // erasing by iterator
	mymap.erase("France");             // erasing by key
	mymap.erase(mymap.find("China"), mymap.end()); // erasing by range

	//capacity examples:
	cout << mymap.size() << endl;
	cout << mymap.empty() << endl;

	mymap.clear();
	cout << mymap.size() << endl;
	cout << mymap.empty() << endl;

	system("pause");
	return 0;
}
