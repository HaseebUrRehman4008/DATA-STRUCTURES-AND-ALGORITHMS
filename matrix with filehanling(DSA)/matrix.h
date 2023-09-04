#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class matrix
{
private:
	int **m1;
	int **m2;
	int row1, col1;
	int row2, col2;
public:
	void setrow1(int);
	void setcol1(int);
	void setrow2(int);
	void setcol2(int);
	matrix();
	matrix(int,int,int,int);
	matrix(matrix&obj);
	void inputmatrix1();
	void inputmatrix2();
	void addmatrix();
	void submartix();
	void mulmatrix();
	void addconstantvalue();
	void display();
	~matrix();
};
matrix::matrix(){
	m1 = NULL;
	m2 = NULL;
}
matrix::matrix(int r,int c,int r2,int c2){

	row1 = r;
	col1 = c;
	row2 = r2;
	col2 = c2;
	
}
matrix::matrix(matrix&obj){

	row1 = obj.row1;
	col1 = obj.col1;
	row2 = obj.row2;
	col2 = obj.col2;
}
void matrix::inputmatrix1(){
	m1 = new int*[row1];
	for (int i = 0; i < row1; i++) {
		m1[i] = new int[col1];
	}
	int temp;
	ofstream fout;
	ifstream fin;
	fout.open("file1.txt");
	cout << "MATRIX 1" << endl;
	for (int i = 0; i < row1; i++)
	{
		cout << "Row (" << i + 1 << ") :\n";
		for (int j = 0; j < col1; j++)
		{
			cin >> temp;
			fout << temp;
			fout << endl;
		}
	}
	fout.close();
	fin.open("file1.txt"); 
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			//cin >>m1[i][j];
			
			fin>> m1[i][j];
		}
	}

	fin.close();
}
void matrix::inputmatrix2(){
	m2 = new int*[row2];
	for (int i = 0; i < row2; i++) {
		m2[i] = new int[col2];
	}
	int temp;
	ofstream fout;
	ifstream fin;
	fout.open("file2.txt");
	cout << "MATRIX 2" << endl;
	for (int i = 0; i < row2; i++)
	{
		cout << "Row (" << i + 1 << ") :\n";
		for (int j = 0; j < col2; j++)
		{
			cin >> temp;
			fout << temp;
			fout << endl;
		}
	}
	fout.close();
	fin.open("file2.txt");
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			//cin >>m1[i][j];

			fin >> m2[i][j];
		}
	}

	fin.close();
}
void matrix::setrow1(int r){
	row1 = r;
}
void  matrix::setcol1(int c){
	col1 = c;
}
void matrix::setrow2(int r2){
	row2 = r2;
}
void  matrix::setcol2(int c2){
	col2 = c2;
}

matrix::~matrix(){
	/*delete[]m1;
	delete[]m2;*/
}
void matrix::submartix(){
	int **sub = new int*[row1];

	for (int i = 0; i < row1; i++) {
		sub[i] = new int[col1];
	}

	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			sub[i][j] = m1[i][j] - m2[i][j];
		}
		cout << endl;
	}

	cout << "subtraction of  matrices is :" << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout << sub[i][j] << " ";
		}
		cout << endl;
	}
}
void matrix::addmatrix(){
	int **sum = new int*[row1];

	for (int i = 0; i < row1; i++) {
		sum[i] = new int[col1];
	}

	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			sum[i][j] = m1[i][j] + m2[i][j];
		}
		cout << endl;
	}

	cout << "addition of  matrices is :" << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
}
void matrix::mulmatrix(){
	int **mul = new int*[row1];

	for (int i = 0; i < row1; i++) {
		mul[i] = new int[col1];
	}

	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			mul[i][j] = m1[i][j] * m2[i][j];
		}
		cout << endl;
	}

	cout << "Multiplication of  matrices is :" << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout << mul[i][j] << " ";
		}
		cout << endl;
	}
}

void matrix::display(){
	cout << "MATRIX 1"<<endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout << m1[i][j] << " ";
		}
		cout << endl;
	}

	cout << "MATRIX 2"<<endl;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			cout << m2[i][j] << " ";
		}
		cout << endl;
	}
}
void matrix::addconstantvalue(){
	int x;
	cout << "Enter Constant Value" << endl;
	cin >> x;
	cout << "Witch matrix you want to add constant value Matrix 1 OR Matrix 2" << endl;
	int y;
	cin >> y;
	switch (y)
	{
	case 1:
		for (int i = 0; i < row1; i++){
			for (int j = 0; j < col1; j++){
				m1[i][j] = x;
			}
		}
		display();
		break;
	case 2:
		for (int i = 0; i < row2; i++){
			for (int j = 0; j < col2; j++){
				m2[i][j] = x;
			}
		}
		display();
		break;
	}
}