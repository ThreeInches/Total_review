#include <iostream>
#include <vector>

using namespace std;

int Deal(vector<int>& tmp)
{
	if (tmp.empty())
	{
		return 0;
	}
	int count = 0;
	vector<int> tmp2;
	for (int i = 0; i < tmp.size() - 1; i += 2)
	{
		if ((tmp[i] + tmp[i + 1]) >= 10)
		{
			count++;
			tmp2.push_back((tmp[i] + tmp[i + 1]) % 10);
		}
	}
	return count + Deal(tmp2);
}

int main()
{
	int N;
	cin >> N;
	vector<int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int Q;
	cin >> Q;
	vector<vector<int>> q(Q, vector<int>(2));
	for (int i = 0; i < q.size(); i++)
	{
		for (int j = 0; j < q[i].size(); j++)
		{
			cin >> q[i][j];
		}
	}
	vector<int> tmp;
	vector<int> res;
	for (int i = 0; i < q.size(); i++)
	{
		for (int j = q[i][0]; j <= q[i][1]; j++)
		{
			tmp.push_back(arr[j]);
		}
		res.push_back(Deal(tmp));
		tmp.clear();
	}

	for (auto&e : res)
	{
		cout << e << endl;
	}

	return 0;
}