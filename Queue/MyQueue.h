#include"Queue.h"
class MyQueue:public Queue{
public:
	MyQueue();
	MyQueue(int);
	void EnQueue(int);
	int DeQueue();
	bool QueueEmpty();
	bool QueueFull();
	void display();
};

MyQueue::MyQueue(int size):Queue(size){

}
void MyQueue::EnQueue(int value){
	if (QueueFull()){
		cout << "Queue is Full" << endl;
	}
	else {
		Queue::Queuearr[Queue::currentSize] = value;
		currentSize++;
	}
}

int MyQueue::DeQueue(){
	if (QueueEmpty()){
		cout << "Queue is Empty" << endl;
	}
	else{
		int firstindex = Queue::Queuearr[0];
		Queue::currentSize--;
		for (int i = 0; i < Queue::currentSize; i++){
			Queue::Queuearr[i] = Queue::Queuearr[i + 1];
		}
		return firstindex;
	}
}
bool MyQueue::QueueEmpty(){
	return Queue::currentSize == 0;
}

bool MyQueue::QueueFull(){
	return Queue::currentSize == maxSize;
}
void MyQueue::display(){
	for (int i = 0; i < Queue::currentSize; i++){
		cout << Queue::Queuearr[i] << endl;
	}
}