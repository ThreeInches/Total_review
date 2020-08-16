#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dealRes(vector<int>& A, vector<int>& B, vector<int>& T, vector<int>& res, int P, int X, int t)
{
	if (P == 0)
	{
		return;
	}

	for (int i = 0; i < P; i++)
	{
		if (B[i] == X && A[i] == 0)
		{
			res.push_back(T[i]);
		}
		else if (B[i] == X)
		{
			t += T[i];
			dealRes(A, B, T, res, P--, X, t);
		}
	}
}

int main()
{
	int N, P;
	vector<int> A, B, T;
	cin >> N >> P;
	A.resize(P);
	B.resize(P);
	T.resize(P);
	for (int i = 0; i < P; i++)
	{
		cin >> A[i] >> B[i] >> T[i];
	}
	int X;
	cin >> X;
	vector<int> res;
	for (int i = 0; i < P; i++)
	{
		if (B[i] == X && A[i] == 0)
		{
			res.push_back(T[i]);
		}
		else if (B[i] == X && A[i] != 0)
		{
			P--;
			for (int j = 0; j < P; j++)
			{
				if (A[i] == B[j] && A[j] == 0)
				{
					res.push_back(T[i]);
				}
				else if (A[i] == B[j] && A[j] != 0)
				{
					P--;

				}
			}
		}
	}
	sort(res.begin(), res.end());
	cout << res[0] << endl;
	return 0;
}