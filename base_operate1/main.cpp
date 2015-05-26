#include <iostream>
#include <utility>
#include "graph.h"
using namespace std;
int main(){
	Graph g(10);
	pair<int,int> a(0,1);
	pair<int,int> b(2,1);
	g.addline(a);
	g.addline(b);
	g.addline(pair<int,int>(1,4));
	g.addline(pair<int,int>(2,4));
	g.addline(pair<int,int>(2,5));
	g.addline(pair<int,int>(1,6));
	g.addline(pair<int,int>(3,6));
	g.display();
	g.deleteline(pair<int,int>(3,6));
	g.deleteline(pair<int,int>(1,6));

	cout<<"删除边操作后："<<endl;
	g.display();
	system("pause");
	return 0;
}
