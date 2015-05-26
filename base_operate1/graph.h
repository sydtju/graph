#ifndef  _GRAPH_H
#define  _GRAPH_H
#include <iostream>
#include <utility>
using namespace std;
struct node{
	int number;
	node *next;
};
class Graph{
public:
	Graph(int n){
		this->n=n;
		this->dat=new(nothrow) node*[n];
		if (dat==NULL)
		{
			throw "bad_alloc";
		}
		for(int i=0;i<n;i++){
			dat[i]=create_node(i);
		}
	};
	~Graph(){
		delete[] dat; 
	}
	void addline(pair<int,int>lines);
	void deleteline(pair<int,int>lines);
	void display();
private:
	node **dat;
	int n;
	node* create_node(int dat);
};
#endif
