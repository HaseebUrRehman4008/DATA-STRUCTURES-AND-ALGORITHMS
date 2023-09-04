#include"stack.h"
template<class DTYPE>
class mystack :public stack<DTYPE>{
public:
	 mystack(int); //constructor
	 void push(DTYPE);//push function
	 DTYPE pop();//pop function
	 DTYPE top();
	 bool stackFull();//check stack full function
	 bool stackEmpty();//check stack empty function
	 void reverseStack();//Reverse STACK
	 void display();//stack display function
	 void sortstack();
};
template<class DTYPE>
mystack<DTYPE>::mystack(int size) :stack<DTYPE>(size){

}
template<class DTYPE>
DTYPE mystack<DTYPE>::top(){
	if (stackEmpty())
	{
		cout << "Stack is Empty" << endl;
	}
	else{
		return stack<DTYPE>::stackarr[stack<DTYPE>::currentSize - 1];
	}
}
template<class DTYPE>
void mystack<DTYPE>::push(DTYPE value){
	if (stackFull()){
		cout << "stack is full \n" << value << " cannot be add in stack " << endl;
	}
	else{
		stack<DTYPE>::stackarr[stack<DTYPE>::currentSize] = value;
		stack<DTYPE>::currentSize++;
	}
}
template<class DTYPE>
DTYPE mystack<DTYPE>::pop(){
	if (stackEmpty()){
		cout << "Stack is empty"<<endl;
		return 0;
	}
	else{
		stack<DTYPE>::currentSize--;
		return stack<DTYPE>::stackarr[stack<DTYPE>::currentSize];
	}
}
template<class DTYPE>
bool mystack<DTYPE>::stackFull(){
	return stack<DTYPE>::currentSize == stack<DTYPE>::maxSize;
}
template<class DTYPE>
bool mystack<DTYPE>::stackEmpty(){
	return stack<DTYPE>::currentSize == 0;
}
template<class DTYPE>
void mystack<DTYPE>::display(){
	for (int i = 0; i < stack<DTYPE>::currentSize; i++){
		cout << "index is " << i+1 << " value is " << stack<DTYPE>::stackarr[i] << endl;
	}
}
template<class DTYPE>
void mystack<DTYPE>::reverseStack(){
	mystack<DTYPE> temp(100);
	mystack<DTYPE> temp2(100);
	if (stackEmpty()){
		cout << "STACK EMPTY" << endl;
	}
	else{
		while (!stackEmpty()){
			temp.push(pop());
		}
		while (!temp.stackEmpty()){
			temp2.push(temp.pop());
		}
		while (!temp2.stackEmpty()){
			push(temp2.pop());
		}
	}
}
template<class DTYPE>
void mystack<DTYPE>::sortstack(){
	mystack temp(maxSize);
	int value;
	while (!stackEmpty()){
		value = pop();
		if (temp.stackEmpty() || value >= temp.top()){
			temp.push(value);
		}
		else{
			while (value<temp.top()){
				push(temp.pop());
			}
			temp.push(value);
		}
	}
	mystack temp2(maxSize);
	while (!temp.stackEmpty()){
		temp2.push(temp.pop());
	}
	while (!temp2.stackEmpty()){
		push(temp2.pop());
	}
}