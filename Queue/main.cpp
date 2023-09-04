#include"MyQueue.h"

int main(){
	MyQueue obj(5);
	obj.EnQueue(10);
	obj.EnQueue(20);
	obj.EnQueue(30);
	obj.EnQueue(40);
	obj.EnQueue(50);
	cout << "QUEUE DISPLAY" << endl;
	obj.display();
	obj.DeQueue();
	obj.DeQueue();
	obj.DeQueue();
	cout << "AFTER DE QUEUE" << endl;
	obj.display();
}