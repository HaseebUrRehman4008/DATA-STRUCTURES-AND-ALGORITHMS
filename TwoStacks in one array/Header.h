#pragma once
#include<iostream>
using namespace std;

class TwoStacks {
	int *arr;
	int size;
	int top1, top2;
	int currentSize;
public:
	TwoStacks();

	TwoStacks(int);

	void push1(int x);

	void push2(int x);

	int pop1();

	int pop2();

	void display();

};

void TwoStacks::display(){

	for (int i = 0; i < currentSize; i++){
		cout << arr[i];
	}
	cout << endl;
}
TwoStacks::TwoStacks(){
	size = 0;
	arr = NULL;
	top1 = 0;
	top2 = 0;
	currentSize = 0;
}
TwoStacks::TwoStacks(int n) {
	size = n;
	arr = new int[size];
	top1 = -1;
	top2 = size;
}

void TwoStacks::push1(int x) {
	if (top1 < top2 - 1) {
		top1++;
		currentSize++;
		arr[top1] = x;
	}
	else{
		cout << "STACK 1 is FULL" << endl;
	}
}

void TwoStacks::push2(int x) {
	if (top1 < top2 - 1) {
		top2--;
		currentSize++;
		arr[top2] = x;
	}
	else{
		cout << "STACK 2 is FULL" << endl;
	}
}

int TwoStacks::pop1() {
	if (top1 >= 0) {
		int x = arr[top1];
		top1--;
		return x;
	}
	return -1;
}

int TwoStacks::pop2() {
	if (top2 < size) {
		int x = arr[top2];
		top2++;
		return x;
	}
	return -1;
}
