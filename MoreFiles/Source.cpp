//������������ ������ ������� �++
#include <iostream>
#include <algorithm>
#include "functions.h"
#include "stuctures.h"
#include "Source.h"
#include "data.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	//������ � functions.h
	/*int n, m;
	cout << "������� 2 �����: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;
	
	int arr[10];
	fillarr(arr, 10, 1, 101);
	cout << "����������� ������:\n";
	sA(arr, 10);*/

	//������ � structures.h
	/*person Jesus = {"Jesus ",{1,1,33},"God",1000000};
	showObj(Jesus);*/

	//������ � data.h
	cout << "������� 2 �����: ";
	cin >> _x >> _y;
	showxy();
	cout << _x << " + " << _y << " = " << sum(_x, _y) << endl;

	cout << "������� ������ ����������: ";
	double r;
	cin >> r;
	cout << "������� ���������� = " << _pi * r * r << endl;

	cout << "����������� ������:\n";
	fillarr(_a, 10, 10, 21);
	sA(_a, 10);


	return 0;
}