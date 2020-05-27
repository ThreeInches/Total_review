#include <iostream>
#include <unordered_set>
#include <array>
#include <string>
using namespace std;

//unordered_set文档简介
//1、无序集是一种容器，它以不特定的顺序存储惟一的元素，并允许根据元素的值快速检索单个元素。
//2、在unordered_set中，元素的值同时是唯一标识它的键。键是不可变的，只可增删，不可修改
//3、在内部，unordered_set中的元素没有按照任何特定的顺序排序，而是根据它们的散列值组织成桶，从而允许通过它们的值直接快速访问单个元素(平均时间复杂度为常数)。
//4、unordered_set容器比set容器更快地通过它们的键访问单个元素，尽管它们在元素子集的范围迭代中通常效率较低。
//5、容器中的迭代器至少是前向迭代器。

int main()
{
	unordered_set<string> myset1 = { "yellow", "green", "blue" };
	array<string, 2> myarray = { "black", "white" };
	string mystring = "red";

	myset1.insert(mystring);                        // copy insertion
	myset1.insert(mystring + "dish");                 // move insertion
	myset1.insert(myarray.begin(), myarray.end());  // range insertion
	myset1.insert({ "black", "white" });           // initializer list insertion


	unordered_set<std::string> myset2 =
	{ "USA", "Canada", "France", "UK", "Japan", "Germany", "Italy" };

	myset2.erase(myset2.begin());                    // erasing by iterator
	myset2.erase("France");                         // erasing by key
	myset2.erase(myset2.find("Japan"), myset2.end()); // erasing by range
	
	//capacity
	cout << myset1.size() << endl;
	cout << myset2.size() << endl;
	cout << myset1.empty() << endl;
	cout << myset2.empty() << endl;

	myset1.clear();
	myset2.clear();

	cout << myset1.size() << endl;
	cout << myset2.size() << endl;
	cout << myset1.empty() << endl;
	cout << myset2.empty() << endl;

	system("pause");
	return 0;
}
