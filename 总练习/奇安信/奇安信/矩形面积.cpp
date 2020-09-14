//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution
//{
//public:
//	/**
//	 * 获得剩余区域内的最大干净矩形面积
//	 * @param x1 int整型
//	 * @param y1 int整型
//	 * @param x2 int整型
//	 * @param y2 int整型
//	 * @param x3 int整型
//	 * @param y3 int整型
//	 * @param x4 int整型
//	 * @param y4 int整型
//	 * @return int整型
//	 */
//	int getMaxArea(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
//	{
//		vector<int> res;
//		vector<int> x;
//		vector<int> y;
//		y.push_back(y1);
//		y.push_back(y2);
//		y.push_back(y3);
//		y.push_back(y4);
//
//		x.push_back(x1);
//		x.push_back(x2);
//		x.push_back(x3);
//		x.push_back(x4);
//
//		sort(x.begin(), x.end());
//		sort(y.begin(), y.end());
//
//		int m1 = y[0] - 0;
//		int m2 = y[1] - y[0];
//		int m3 = y[2] - y[1];
//		int m4 = y[3] - y[2];
//		int m5 = 10 - y[3];
//
//		int n1 = x[0] - 0;
//		int n2 = x[1] - x[0];
//		int n3 = x[2] - x[1];
//		int n4 = x[3] - x[2];
//		int n5 = 10 - x[3];
//
//		int area1, area2, area3, area4, area5, area6, area7, area8;
//		area1 = (m1 + m2 + m3) * (n3 + n4 + n5);
//		area2 = (m3 + m4 + m5) * (n1 + n2 + n3);
//		area3 = (m1 + m2 + m3 + m4 + m5) * n1;
//		area4 = (m1 + m2 + m3 + m4 + m5) * n3;
//		area5 = (m1 + m2 + m3 + m4 + m5) * n5;
//		area6 = m1 * (n1 + n2 + n3 + n4 + n5);
//		area7 = m3 * (n1 + n2 + n3 + n4 + n5);
//		area8 = m5 * (n1 + n2 + n3 + n4 + n5);
//		res.push_back(area1);
//		res.push_back(area2);
//		res.push_back(area3);
//		res.push_back(area4);
//		res.push_back(area5);
//		res.push_back(area6);
//		res.push_back(area7);
//		res.push_back(area8);
//
//		sort(res.begin(), res.end());
//		return res[res.size() - 1];
//	}
//};
//
//int main()
//{
//
//	return 0;
//}