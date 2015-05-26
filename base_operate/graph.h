//邻接矩阵表示图  这里的操作是有向图的操作  如果是无向图的话 应该在addline中加入两条边   无向图的矩阵是对称矩阵
#ifndef _GRAPH_H
#define _GRAPH_H
#include <utility>
using namespace std;
const int MAX=100;
class Graph{
public:
	Graph(int point_number);
	 ~Graph();
	bool isEmpty();
	bool addline(pair<int,int>lines);
	bool deleteline(pair<int,int>lines);
	void display();
private:
	int dat[MAX][MAX];
	int n;
	int line;
};
#endif
