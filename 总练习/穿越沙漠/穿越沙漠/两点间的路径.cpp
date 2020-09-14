//#include "MyGraph.h"
//
//using namespace std;
//
//MyGraph::MyGraph(int VertexNum)
//{
//	this->vertexNum = VertexNum;
//	//开辟访问标记数组
//	this->visitedFlag = new bool[vertexNum];
//	//开辟邻接矩阵
//	this->matrix = new bool*[vertexNum];
//	for (int i = 0; i < vertexNum; i++)
//	{
//		this->visitedFlag[i] = false;
//		this->matrix[i] = new bool[vertexNum];
//		//将所有数组元素全部初始化为0
//		for (int j = 0; j < vertexNum; j++)
//			this->matrix[i][j] = 0;
//	}
//}
//
///**
// * 无参数构造函数，通过createTestData函数来构造一个邻接矩阵测试数据
// * 方便其他算法的测试
// */
//MyGraph::MyGraph()
//{
//	this->vertexNum = 27;
//	//开辟访问标记数组
//	this->visitedFlag = new bool[vertexNum];
//	//开辟邻接矩阵
//	this->matrix = new bool*[vertexNum];
//	for (int i = 0; i < vertexNum; i++)
//	{
//		this->matrix[i] = new bool[vertexNum];
//		this->visitedFlag[i] = false;
//		//将所有数组元素全部初始化为0
//		for (int j = 0; j < vertexNum; j++)
//			this->matrix[i][j] = 0;
//	}
//	//初始化邻接矩阵
//	bool initMatrix[27][27] = {
//			{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
//			{1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
//			{0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0},
//			{0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
//			{0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
//			{0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1},
//			{0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0},
//			{0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0},
//			{1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0}
//	};
//	//赋值
//	for (int i = 0; i < vertexNum; i++)
//		for (int j = 0; j < vertexNum; j++)
//			this->matrix[i][j] = initMatrix[i][j];
//	printMatrix();
//}
//
//
//MyGraph::~MyGraph()
//{
//	for (int i = 0; i < vertexNum; i++)
//		delete[] matrix[i];
//	delete matrix;
//	delete[]visitedFlag;
//}
//
///**
// * 输出邻接矩阵
// */
//void MyGraph::printMatrix()
//{
//	for (int i = 0; i < vertexNum; i++)
//	{
//		for (int j = 0; j < vertexNum; j++)
//			cout << matrix[i][j] << "  ";
//		cout << endl;
//	}
//}
//
///**
// * 更新row行column列的邻接矩阵值
// */
//void MyGraph::updateMatrix(int row, int column)
//{
//	//由于是无向图，故更新后的矩阵值是一个对称矩阵
//	matrix[row][column] = true;
//	matrix[column][row] = true;
//}
//
///**
// * 获取row行column列的邻接矩阵的值
// */
//bool MyGraph::getMatrixValue(int row, int column)
//{
//	return this->matrix[row][column];
//}
//
///**
// * 计算两个节点之间的所有路径
// */
//void MyGraph::getPathofTwoNode(int startNode, int endNode)
//{
//	//利用深度优先遍历的方式来计算两个节点之间的所有路径
//	visitedFlag[startNode] = true;
//	pathStack.push_back(startNode);
//	findPath(startNode, endNode);
//}
//
//void MyGraph::findPath(int startNode, int endNode)
//{
//	if (startNode == endNode)
//	{
//		//找到一条路径，输出路径
//		cout << "找到一条路径";
//		for (int node : pathStack)
//			cout << node << "  ";
//		cout << endl;
//		visitedFlag[*(pathStack.end() - 1)] = false;
//		pathStack.pop_back();
//		return;
//	}
//	else
//	{
//		//找到startNode所有没有入栈的邻接点
//		int unStackedNum = 0;
//		for (int i = 0; i < vertexNum; i++)
//		{
//			if (matrix[startNode][i] && !visitedFlag[i])
//			{
//				unStackedNum++;
//				visitedFlag[i] = true;
//				pathStack.push_back(i);
//				findPath(i, endNode);
//			}
//		}
//		visitedFlag[*(pathStack.end() - 1)] = false;
//		pathStack.pop_back();
//	}
//}
//
//int main()
//{
//
//	MyGraph graph = MyGraph();
//	graph.getPathofTwoNode(1, 15);
//	return 0;
//}