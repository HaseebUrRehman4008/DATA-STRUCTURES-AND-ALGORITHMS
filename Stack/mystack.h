#include"stack.h"

class mystack:public stack{
public:
	mystack(int); //constructor
	 void push(int);//push function
	 int pop();//pop function
	 int top();
	 bool stackFull();//check stack full function
	 bool stackEmpty();//check stack empty function
	 void display();//stack display function
	 ~mystack();//destructor
};
mystack::mystack(int size):stack(size){

}
int mystack::top(){
	if (stackEmpty())
	{
		cout << "Stack is Empty" << endl;
	}
	else{
	return stack::stackarr[stack::currentSize-1];
	}
}
void mystack::push(int value){
	if (stackFull()){
		cout << "stack is full \n" << value << " cannot be add in stack " << endl;
	}
	else{
		stack::stackarr[stack::currentSize] = value;
		stack::currentSize++;
	}
}
int mystack::pop(){
	if (stackEmpty()){
		cout << "Stack is empty"<<endl;
		return 0;
	}
	else{
		stack::currentSize--; 
		return stack::stackarr[stack::currentSize];
	}
}
bool mystack::stackFull(){
	return stack::currentSize == stack::maxSize;
}
bool mystack::stackEmpty(){
	return stack::currentSize == 0;
}
void mystack::display(){
	for (int i = 0; i < currentSize; i++){
		cout << "index is " << i << " value is " << stackarr[i]<< endl;
	}
}
mystack::~mystack(){

}