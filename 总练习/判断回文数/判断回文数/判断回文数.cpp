#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	/**
	 * 判断是否是回文
	 * @param str char字符型一维数组 输入字符串
	 * @param strLen int str数组长度
	 * @return bool布尔型
	 */
	bool CheckPalindrome(char* str, int strLen) {
		int left = 0;
		int right = strLen - 1;
		while (left < right)
		{
			if (*(str + left) != *(str + right))
			{
				return false;
			}
			left++;
			right--;
		}

		return true;
	}
};


int main()
{
	char str[] = "abcdef";
	char str1[] = "abcba";
	int len = 6;
	int len1 = 5;
	Solution a;
	cout << a.CheckPalindrome(str, len) << endl;
	cout << a.CheckPalindrome(str1, len1) << endl;
	return 0;
}