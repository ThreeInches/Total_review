#include <iostream>

using namespace std;

class Date
{
public:
	void Display()
	{
		cout << _year << " " << _month << " " << _day << endl;
	}
	void SetDate(int yeay, int month, int day)
	{
		_year = yeay;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1, d2;
	d1.SetDate(2020, 1, 24);
	d2.SetDate(2020, 3, 26);
	d1.Display();
	d2.Display();

	system("pause");
	return 0;
}
