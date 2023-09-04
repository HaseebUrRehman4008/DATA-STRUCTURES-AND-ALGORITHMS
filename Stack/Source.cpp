#include"mystack.h"

int main(){
	int size;
	cout << "ENTER STACK SIZE" << endl;
	cin >> size;
	mystack obj(size);//stack size
	//push values
	obj.push(1);  
	obj.push(2);
	obj.push(3);
	obj.push(4);
	obj.push(5);
	//display values
	obj.display();

	//pop values
	for (int i = 0; i < 3; i++){
	cout<<"POP VALUE IS "<<obj.pop()<<endl;
	}
	//display values
	obj.display();
	//stack top value 
	cout << "TOP IS " << obj.top();

	return 0;
}