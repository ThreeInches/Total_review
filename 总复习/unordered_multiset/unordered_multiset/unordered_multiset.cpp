#include <iostream>
#include <unordered_set>
#include <array>

using namespace std;

//unordered_multiset
//1、无序集是一种容器，它以不特定的顺序存储惟一的元素，并允许根据元素的值快速检索单个元素。
//2、在unordered_set中，元素的值同时是唯一标识它的键。键是不可变的，因此，unordered_set中的元素不能在容器中修改一次——但是它们可以插入和删除。
//3、在内部，unordered_set中的元素没有按照任何特定的顺序排序，而是根据它们的散列值组织成桶，从而允许通过它们的值直接快速访问单个元素(平均时间复杂度为常数)。
//4、unordered_set容器比set容器更快地通过它们的键访问单个元素，尽管它们在元素子集的范围迭代中通常效率较低。
//5、容器中的迭代器至少是前向迭代器。

int main()
{
	unordered_set<string> myset = { "yellow", "green", "blue" };
	array<string, 2> myarray = { "black", "white" };
	string mystring = "red";

	myset.insert(mystring);                        // copy insertion
	myset.insert(mystring + "dish");                 // move insertion
	myset.insert(myarray.begin(), myarray.end());  // range insertion
	myset.insert({ "purple", "orange" });           // initializer list insertion
	
	unordered_set<string> myset =
	{ "USA", "Canada", "France", "UK", "Japan", "Germany", "Italy" };

	myset.erase(myset.begin());                    // erasing by iterator
	myset.erase("France");                         // erasing by key
	myset.erase(myset.find("Japan"), myset.end()); // erasing by range
	
	unordered_set<std::string>
		first = { "iron", "copper", "oil" },
		second = { "wood", "corn", "milk" };

	first.swap(second);

	cout << first.empty() << endl;
	cout << first.size() << endl;
	cout << first.max_size() << endl;

	system("pause");
	return 0;
}
