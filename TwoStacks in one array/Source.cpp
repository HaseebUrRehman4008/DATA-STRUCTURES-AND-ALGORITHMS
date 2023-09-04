#include"Header.h"

int main() {
	TwoStacks ts(10);
	ts.push1(1);
	ts.push1(2);
	ts.push1(3);
	ts.push1(4);
	ts.push1(5);
	ts.push1(6);
	ts.push1(7);
	ts.push2(8);
	ts.push1(9);
	ts.push2(10);
	
	ts.display();
	cout << ts.pop1() << " ";
	cout << ts.pop2() << " ";
	cout << ts.pop2() << " ";
	return 0;
}