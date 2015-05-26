//这里进行的是有向图的邻接表表示  
#include "graph.h"
#include <iostream>
#include<utility>
using namespace std;
void Graph::addline(pair<int,int>lines){
	//这里应该先判断是否已经存在一个边  如果存在不应该创建结点 防止重复
	node *temp=dat[lines.first];
	while (temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=create_node(lines.second);
}
void Graph::deleteline(pair<int,int>lines){
	node *temp=NULL;
	node *temp0=dat[lines.first];
	if (lines.first==lines.second)
	{
		return ;
	}
	while (temp0!=NULL)
	{
		
		
		if (temp0->number==lines.second)
		{
			temp->next=temp0->next;
			delete temp0;
			return ;
		}
		temp=temp0;//temp保留的是上一个结点的值  
		temp0=temp0->next;
	}
	
}
void Graph::display(){
	node *temp=NULL;
	for(int i=0;i<n;i++){
		cout<<i;
		temp=dat[i];
		while (temp!=NULL)
		{
			cout<<"-->"<<temp->number;
			temp=temp->next;
		}
		cout<<endl;
	}
}
node* Graph::create_node(int dat){
	node *temp=new(nothrow) node;
	if (temp==NULL)
	{
		throw "bad_alloc";
	}
	temp->number=dat;
	temp->next=NULL;
	return temp;
}
