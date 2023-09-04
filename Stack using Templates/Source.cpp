#include"mystack.h"
int main(){
	int size;
	cout << "ENTER STACK MAXSIZE" << endl;
	cin >> size;
	mystack<int> obj(size);//stack size
	//push values
	obj.push(10);  
	obj.push(20);
	obj.push(30);
	obj.push(40);
	obj.push(50);
	obj.push(60);
	obj.push(70);
	obj.push(80);
	obj.push(90);
	obj.push(100);
	//display values
	obj.display();

	//pop values
	cout << "POP VALUE IS " << obj.pop() << endl;
	cout << "POP VALUE IS " << obj.pop() << endl;
	cout << "POP VALUE IS " << obj.pop() << endl;
	//display values
	obj.display();
	//stack top value 
	cout << "TOP IS " << obj.top() << endl;
	//Reverse stack
	cout << "REVERSE IS " << endl;
    obj.reverseStack();
	obj.display();
	cout << "AFTER SORT"<<endl;
	obj.sortstack();
	obj.display();
	return 0;
}