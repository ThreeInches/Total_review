#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

//创建菜单，输入1开始游戏，输入0结束游戏，否则输入无效；
int Menu()
{
	printf("##################\n");
	printf("####1.开始游戏####\n");
	printf("####0.结束游戏####\n");
	printf("##################\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

//初始化翻开or未翻开，初始化有雷无雷
void Init(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
{
	//初始化未翻开的，用‘*’表示
	for (int i = 0; i < MAX_ROW; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			show_map[i][j] = '*';
		}
	}
	//初始化没有雷，用‘0’表示
	for (int i = 0; i < MAX_ROW; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			mine_map[i][j] = '0';
		}
	}
	//随机设置十个雷
	int mine_count = MINE_COUNT;
	while (mine_count > 0)
	{
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mine_map[row][col] == '1')
		{
			continue;
		}
		mine_map[row][col] = '1';
		mine_count--;
	}
}

//打印地图
void PrintMap(char map[MAX_ROW][MAX_COL])
{
	printf("  |");
	for (int col = 0; col < MAX_COL; col++)
	{
		printf("%d ", col);
	}
	putchar('\n');
	for (int col = 0; col < MAX_COL - 1; col++)
	{
		printf("---");
	}
	putchar('\n');
	for (int row = 0; row < MAX_ROW; row++)
	{
		printf(" %d|", row);
		for (int col = 0; col < MAX_COL; col++)
		{
			printf("%c ", map[row][col]);
		}
		putchar('\n');
	}
}

//没踩雷，就告诉玩家当前位置周围有几颗雷
void UpdateShowMap(int row, int col, char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
{
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0 && mine_map[row - 1][col - 1] == '1')
	{
		count++;
	}
	if (row - 1 >= 0 && mine_map[row - 1][col] == '1')
	{
		count++;
	}
	if (row - 1 >= 0 && col + 1 <= MAX_COL && mine_map[row - 1][col + 1] == '1')
	{
		count++;
	}
	if (col - 1 >= 0 && mine_map[row][col - 1] == '1')
	{
		count++;
	}
	if (col + 1 <= MAX_COL && mine_map[row][col + 1] == '1')
	{
		count++;
	}
	if (row + 1 >= MAX_ROW && col - 1 >= 0 && mine_map[row + 1][col - 1] == '1')
	{
		count++;
	}
	if (row + 1 >= MAX_ROW && mine_map[row + 1][col] == '1')
	{
		count++;
	}
	if (row + 1 <= MAX_ROW && col + 1 <= MAX_COL && mine_map[row + 1][col + 1] == '1')
	{
		count++;
	}
	show_map[row][col] = count + '0';
}

//游戏开始
void Game()
{
	//1、使用两个二维数组表示地图
	//1.2、show_map表示翻开和未翻开，采用字符数组
	//1.3、mine_map表示是地雷和不是地雷的状态，采用字符数组
	char show_map[MAX_ROW][MAX_COL];
	char mine_map[MAX_ROW][MAX_COL];
	//2、对数组初始化
	Init(show_map, mine_map);
	int blank_count = 0;
	while (1)
	{
		system("cls");
		//3、打印地图
		PrintMap(show_map);
		//4、提示玩家输入要翻开的一个位置，并且校验坐标的有效性
		printf("请输入你要翻开的坐标（row， col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row<0 || row>MAX_ROW || col<0 || col>MAX_COL)
		{
			printf("你的输入无效，请重新输入！\n");
			continue;
		}
		//5、先判断是否踩雷，若踩雷提示玩家游戏结束
		if (show_map[row][col] != '*')
		{
			printf("你的输入以被翻开，请重新输入！\n");
			continue;
		}
		if (mine_map[row][col] == '1')
		{
			printf("很遗憾，你输了！\n");
			return;
		}
		blank_count++;
		//6、没踩雷再判定是否游戏胜利（翻开了所有不是地雷的格子）
		if (blank_count == MAX_ROW*MAX_COL - MINE_COUNT)
		{
			printf("扫雷结束，游戏成功！\n");
		}
		//7、没踩雷，就告诉玩家当前位置周围有几颗雷
		UpdateShowMap(row, col, show_map, mine_map);
	}
}

int main2()
{
	srand((unsigned int)time(0));
	while (1)
	{
		int choice = Menu();
		switch (choice)
		{
		case 0:
			printf("结束游戏\n");
			break;
		case 1:
			printf("开始游戏\n");
			Game();
			break;
		default:
			printf("你的输入有误，重新输入！\n");
			break;
		}
	}
	system("pause");
	return 0;
}