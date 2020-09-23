#include <iostream>
#include <vector>

using namespace std;

bool isLoop(vector<vector<int>>& graph)
{
	if (graph.empty() || graph.size() < 3)
	{
		return false;
	}
	int count = 0;
	for (int i = 0; i < graph.size(); i++)
	{
		for (int j = 0; j < graph[i].size(); j++)
		{
			if (graph[i][j] == graph[j][i])
			{
				count++;
			}
		}
	}
	if (count > 3)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int N;
	cin >> N;
	vector<vector<int>> graph(N, vector<int>(N));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> graph[i][j];
		}
	}

	if (isLoop(graph))
	{
		cout << "Loop" << endl;
	}
	else
	{
		cout << "No Loop" << endl;
	}
	return 0;
}