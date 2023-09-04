#pragma once
#include<iostream>
using namespace std;

class stack{
protected:
	int *stackarr;
	int maxSize;
	int currentSize;
public:
	stack(int); //constructor
	virtual void push(int) = 0; //push function
	virtual int pop() = 0;//pop function
	virtual bool stackFull() = 0;//check stack full function
	virtual bool stackEmpty() = 0;//check stack empty function
	virtual void display() = 0;//stack display function
	virtual int top() = 0;//stack top value function
	~stack();//destructor
};
stack::stack(int size){
	stackarr = new int[size];
	currentSize = 0;
	maxSize = size;
}
stack::~stack(){
	delete stackarr;
	stackarr = nullptr;
	currentSize = 0;
	maxSize = 0;
}