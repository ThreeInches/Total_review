#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
	int lengthOfLongestSubstring(string s)
	{
		int start = 0;
		int end = 0;
		int length = 0;
		int result = 0;

		int size = s.size();

		while (end < size)
		{
			char tmp = s[end];
			for (int i = start; i < end; i++)
			{
				if (tmp == s[i])
				{
					start = i + 1;
					length = end - start;
					break;
				}
			}

			end++;
			length++;
			result = max(result, length);
		}

		return result;
	}
};

int main()
{
	Solution a;
	string b = "abcabcbb";
	string c = "bbbbb";
	string d = "pwwkew";
	
	cout << a.lengthOfLongestSubstring(b) << endl;
	cout << a.lengthOfLongestSubstring(c) << endl;
	cout << a.lengthOfLongestSubstring(d) << endl;

	system("pause");
	return 0;
}
