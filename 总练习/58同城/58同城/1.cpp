#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
	vector<string> findCommonString(string** values, int valuesRowLen, int* valuesColLen)
	{
		//1、将字符串二维数组存放在vector<vector<string>>中
		//2、遍历这个二维数组，判断这个二维数组的每一行的第j列是否相同
		//3、将相同的二维数组放在vector<string> res中，返回res

		//也可以将二维数组导入一维数组res中  再用map统计string个数等于二维数组行下标的时候则返回这些string即为最后结果
		vector<string> res;
		vector<vector<string>> src(valuesRowLen, vector<string>(*valuesColLen));
		map<string, int> m;
		for (int i = 0; i < valuesRowLen; i++)
		{
			for (int j = 0; j < *valuesColLen; j++)
			{
				src[i][j] = *(*(values + i) + j);
			}
		}

		int index = 0;
		for (int i = 0; i < src.size(); i++)
		{
			for (int j = 0; j < src[i].size(); j++)
			{
				res[index++] = src[i][j];
			}
		}

		for (int i = 0; i < res.size(); i++)
		{
			
		}

		return res;
	}
};

int main()
{

	return 0;
}