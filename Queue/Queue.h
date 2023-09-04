#pragma once
#include<iostream>
using namespace std;


class Queue{
protected:
	int *Queuearr;
	int currentSize;
	int maxSize;
public:
	Queue();
	Queue(int);
	virtual void EnQueue(int) = 0;
	virtual int DeQueue() = 0;
	virtual bool QueueEmpty() = 0;
	virtual bool QueueFull() = 0;
	virtual void display() = 0;
	~Queue();

};

Queue::Queue(int size){
	Queuearr = new int[size];
	currentSize = 0;
	maxSize = size;
}


Queue::~Queue(){
	delete[] Queuearr;
	currentSize = 0;
	maxSize = 0;
}
