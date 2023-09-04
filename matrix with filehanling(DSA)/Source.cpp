#include<iostream>
#include<fstream>
#include"matrix.h"
using namespace std;

int main(){
	int r, r2;
	int c, c2;
	int x;

	cout << "Enter rows for matrix 1: ";
	cin >> r;
	cout << "Enter colums for matrix 1: ";
	cin >> c;

	cout << "Enter rows for matrix 2: ";
	cin >> r2;
	cout << "Enter colums for matrix 2: ";
	cin >> c2;

	matrix obj(r, c, r2, c2);

	obj.setrow1(r);
	obj.setcol1(c);
	obj.setrow2(r2);
	obj.setcol2(c2);

	while (1){
		cout << "Options" << endl;
		cout << "1: Input Matrix" << endl;
		cout << "2 : Display Matrix" << endl;
		cout << "3 : Add Matrices" << endl;
		cout << "4 : Subtract Matrices" << endl;
		cout << "5 : Add a Constant value to Matrix" << endl;
		cout << "6 : Multiply Matrices" << endl;
		cout << "7 : Exit" << endl;
		cin >> x;
		switch (x) {
		case 1:
			obj.inputmatrix1();
			obj.inputmatrix2();
			break;
		case 2:
			obj.display();
			break;
		case 3:
			obj.addmatrix();
			break;
		case 4:
			obj.submartix();
			break;
		case 5:
			obj.addconstantvalue();
			break;
		case 6:
			obj.mulmatrix();
			break;
		case 7:
			break;
		}
			if (x == 7){
				break;
		}
	}
}
