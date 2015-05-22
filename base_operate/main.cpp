#include <iostream>
#include <string>
#include "graph.h"
using namespace std;
typedef long long llint;
int main(int argc,char *argv[]){
	Graph *pgraph=new Graph(10);
	pgraph->display();
	pgraph->addline(pair<int,int>(1,2));
	cout<<"after addline:"<<endl;
	pgraph->display();
	system("pause");
	return 0;
}
