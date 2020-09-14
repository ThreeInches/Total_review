//#include <iostream>
//#include <vector>
//
//class MyGraph
//{
//protected:
//	int vertexNum;//顶点数量
//	bool** matrix;//邻接矩阵
//	bool* visitedFlag;//顶点是否访问过的标记
//	std::vector<int> pathStack;//记录路径的栈
//public:
//	MyGraph(int VertexNum);
//	MyGraph();
//	void printMatrix();//输出邻接矩阵
//	void updateMatrix(int row, int column);//更新row行column列的邻接矩阵值
//	bool getMatrixValue(int row, int column);//获取邻接矩阵中对应行列号的值
//	void getPathofTwoNode(int startNode, int endNode);//计算两个节点之间的所有路径
//	void findPath(int startNode, int endNode);
//	~MyGraph();
//};