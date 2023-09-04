#pragma once
#include<iostream>
using namespace std;

template <class DTYPE>
class Queue{
protected:
	DTYPE *Queuearr;
	int currentSize;
	int maxSize;
public:
	Queue();
	Queue(int);
	virtual void EnQueue(DTYPE) = 0;
	virtual DTYPE DeQueue() = 0;
	virtual bool QueueEmpty() = 0;
	virtual bool QueueFull() = 0;
	virtual void display() = 0;
	~Queue();

};

template<class DTYPE>
Queue<DTYPE>::Queue(int size){
	Queuearr = new DTYPE[size];
	currentSize = 0;
	maxSize = size;
}

template<class DTYPE>
Queue<DTYPE>::~Queue(){
	delete[] Queuearr;
	currentSize = 0;
	maxSize = 0;
}
