#include <iostream>

using namespace std;

//取地址运算符重载
//const取地址运算符重载

//注：这两个运算符重载一般默认给出， 若无特殊情况，则无需重载。
class Date
{
public:
	Date* operator&()
	{
		return this;
	}

	const Date* operator&()const{
		return this;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{

	system("pause");
	return 0;
}