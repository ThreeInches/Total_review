#include <iostream>
#include <vector>

using namespace std;

class Board
{
public:
	bool checkWon(vector<vector<int>> board)
	{
		int row = board.size();
		int sum;
		for (int i = 0; i < row; i++)
		{
			sum = 0;
			for (int j = 0; j < row; j++)
			{
				sum += board[i][j];
			}
			if (sum == row)
			{
				return true;
			}
		}

		for (int i = 0; i < row; i++)
		{
			sum = 0;
			for (int j = 0; j < row; j++)
			{
				sum += board[j][i];
			}
			if (sum == row)
			{
				return true;
			}
		}

		sum = 0;
		for (int i = 0; i < row; i++)
		{
			sum += board[i][i];
		}

		if (sum == row)
		{
			return true;
		}
		sum = 0;
		for (int i = 0; i < row; i++)
		{
			sum += board[i][row - i - 1];
		}
		if (sum == row)
		{
			return true;
		}

		return false;
	}
};

int main()
{
	Board a;
	vector<vector<int>> b{ { 1, 0, 1 }, { 1, -1, -1 }, { 1, -1, 0 } };
	cout << a.checkwon(b) << endl;

	system("pause");
	return 0;
}
