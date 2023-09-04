#pragma once
#include<iostream>
using namespace std;
template<class DTYPE>
class stack{
protected:
	DTYPE *stackarr;
	int maxSize;
	int currentSize;
public:
	stack(int); //constructor
	virtual void push(DTYPE) = 0; //push function
	virtual DTYPE pop() = 0;//pop function
	virtual DTYPE top() = 0;//stack top value function
	virtual bool stackFull() = 0;//check stack full function
	virtual bool stackEmpty() = 0;//check stack empty function
	virtual void display() = 0;//stack display function
	virtual void reverseStack() = 0;
	virtual void sortstack() = 0;
	~stack<DTYPE>();//destructor
};
template<class DTYPE>
stack<DTYPE>::stack(int size){
	stackarr = new DTYPE[size];
	currentSize = 0;
	maxSize = size;
}

template<class DTYPE>
stack<DTYPE>::~stack(){
	delete[] stackarr;
	currentSize=0;
	maxSize=0;
}
