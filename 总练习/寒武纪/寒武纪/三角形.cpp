//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
////计算两点间的距离
//double Line(int x1, int y1, int x2, int y2)
//{
//	double x = pow(x1 - x2, 2);
//	double y = pow(y1 - y2, 2);
//	int res = sqrt(x + y);
//	return res;
//}
////计算点到直线的距离
//double dLine(int x1, int y1, int x2, int y2, int x3, int y3)
//{
//	double k = (y2 - y1) / (x2 - x1);
//	double b = y1 - k * x1;
//	double a = (k * x3 - y3 + b);//分子
//	double c = sqrt((k * k) + 1);//分母
//	double res = a / c;
//	return res;
//}
//
//int main()
//{
//	int Ax, Ay;
//	int Bx, By;
//	int Cx, Cy;
//	vector<vector<int>> mat(3, vector<int>(2));
//	for (int i = 0; i < mat.size(); i++)
//	{
//		for (int j = 0; j < mat[i].size(); j++)
//		{
//			cin >> mat[i][j];
//		}
//	}
//	double s;
//	double h;//三角形的高
//	double d;//三角形的底边
//
//	Ax = mat[0][0];
//	Ay = mat[0][1];
//	Bx = mat[1][0];
//	By = mat[1][1];
//	Cx = mat[2][0];
//	Cy = mat[2][1];
//
//	if ((Ax == Bx && Ax == Cx) || (Ay == By && Ay == Cy))
//	{
//		cout << 0.00 << endl;
//	}
//	else
//	{
//		d = Line(Ax, Ay, Bx, By);
//		h = dLine(Ax, Ay, Bx, By, Cx, Cy);
//		s = (d * h) / 2;
//		printf("%.2f", -s);
//	}
//
//	return 0;
//}