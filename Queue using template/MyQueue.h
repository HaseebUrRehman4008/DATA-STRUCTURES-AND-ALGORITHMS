#include"Queue.h"
template<class DTYPE>
class MyQueue:public Queue<DTYPE>{
public:
	MyQueue();
	MyQueue(int);
	void EnQueue(DTYPE);
	DTYPE DeQueue();
	bool QueueEmpty();
	bool QueueFull();
	void display();
};
template<class DTYPE>
MyQueue<DTYPE>::MyQueue(int size):Queue<DTYPE>(size){

}
template<class DTYPE>
void MyQueue<DTYPE>::EnQueue(DTYPE value){
	if (QueueFull()){
		cout << "Queue is Full" << endl;
	}
	else {
		Queue<DTYPE>::Queuearr[Queue<DTYPE>::currentSize] = value;
		currentSize++;
	}
}
template<class DTYPE>
DTYPE MyQueue<DTYPE>::DeQueue(){
	if (QueueEmpty()){
		cout << "Queue is Empty" << endl;
	}
	else{
		int firstindex = Queue<DTYPE>::Queuearr[0];
		Queue<DTYPE>::currentSize--;
		for (int i = 0; i < Queue<DTYPE>::currentSize; i++){
			Queue<DTYPE>::Queuearr[i] = Queue<DTYPE>::Queuearr[i + 1];
		}
		return firstindex;
	}
}
template<class DTYPE>
bool MyQueue<DTYPE>::QueueEmpty(){
	return Queue<DTYPE>::currentSize == 0;
}
template<class DTYPE>
bool MyQueue<DTYPE>::QueueFull(){
	return Queue<DTYPE>::currentSize == maxSize;
}
template<class DTYPE>
void MyQueue<DTYPE>::display(){
	for (int i = 0; i < Queue<DTYPE>::currentSize; i++){
		cout << Queue<DTYPE>::Queuearr[i] << endl;
	}
}