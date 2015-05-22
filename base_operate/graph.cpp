#include "graph.h"
#include <utility>
#include <iostream>
using namespace std;
Graph::Graph(int point_number){
	this->n=point_number;
	this->line=0;
	memset(dat,0,MAX*MAX);
}
bool Graph::isEmpty(){
	return n?false:true;
}
bool Graph::addline(pair<int,int>lines){
	this->dat[lines.first][lines.second]=1;
	return true;
}
bool Graph::deleteline(pair<int,int>lines){
	this->dat[lines.first][lines.second]=0;
	return true;
}
void Graph::display(){
	for (int i=0;i<this->n;i++)
	{
		for (int j=0;j<this->n;j++){
			cout<<" "<<dat[i][j];
		}
		cout<<endl;
	}
}
