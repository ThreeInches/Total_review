#include "BigNum.h"

//加法
string BigNum::add(string num1, string num2)
{
	//位数补齐
	int len1 = num1.size();
	int len2 = num2.size();
	int diffNUm = abs(len1 - len2);
	int longSize = len1 > len2 ? len1 : len2;

	if (len1 < len2)
	{
		num1.insert(0, diffNUm, '0');
	}
	else
	{
		num2.insert(0, diffNUm, '0');
	}

	string res;
	res.resize(longSize);

	//逐位相加
	int step = 0;
	for (int i = longSize - 1; i >= 0; i--)
	{
		res[i] = (num1[i] - '0') + (num2[i] - '0') + step;
		res[i] += '0';
		//更新
		if (res[i] > '9')
		{
			res[i] -= 10;
			step = 1;
		}
		else
		{
			step = 0;
		}
	}

	if (step == 1)
	{
		res.insert(0, 1, '1');
	}

	return res;
}

//减法
string BigNum::sub(string num1, string num2)
{
	//位数补齐
	int len1 = num1.size();
	int len2 = num2.size();
	int diffNUm = abs(len1 - len2);
	int longSize = len1 > len2 ? len1 : len2;

	if (len1 < len2)
	{
		num1.insert(0, diffNUm, '0');
	}
	else
	{
		num2.insert(0, diffNUm, '0');
	}

	string res;
	res.resize(longSize);

	for (int i = longSize - 1; i >= 0; i--)
	{
		//判断是否需要借位
		if (num1[i] < num2[i])
		{
			num1[i] += 10;
			num1[i - 1]--;
		}

		res[i] = (num1[i] - '0') - (num2[i] - '0') + '0';
	}

	//删除前面的0
	while ((res.size() > 1) && (res[0] == '0'))
	{
		res.erase(0, 1);
	}

	return res;
}

//乘法
string BigNum::mul(string num1, string num2)
{
	//用位数低的数乘以位数高的数 可以简化计算过程
	if (num2.size() > num1.size())
	{
		num1.swap(num2);
	}

	string res;
	res = '0';
	for (int i = num2.size() - 1; i >= 0; i--)
	{
		//获取当前乘数的对应位的值
		int curDigit = num2[i] - '0';
		int step = 0;
		//当前位乘积结果
		string tmp = num1;
		for (int j = tmp.size() - 1; j >= 0; j--)
		{
			//逐位相乘
			tmp[j] = (tmp[j] - '0') * curDigit + step;
			//更新进位
			if (tmp[j] > 9)
			{
				step = tmp[j] / 10;
				tmp[j] = tmp[j] % 10;
			}
			else
			{
				step = 0;
			}
			//还原成字符
			tmp[j] += '0';
		}

		//判断最高位是否需要进位
		if (step > 0)
		{
			tmp.insert(0, 1, step + '0');
		}
		//补零操作
		tmp.append(num2.size() - 1 - i, '0');
		//累加一次乘法的结果
		res = add(res, tmp);
	}

	return res;
}
//
////除法
//pair<string, string> BigNum::dev(string num1, string num2)
//{
//
//}
