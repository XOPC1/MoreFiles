//Персональный шаблон проекта С++
#include <iostream>
#include <algorithm>
#include "functions.h"
#include "stuctures.h"
#include "Source.h"
#include "data.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	//Работа с functions.h
	/*int n, m;
	cout << "Введите 2 числа: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;
	
	int arr[10];
	fillarr(arr, 10, 1, 101);
	cout << "Изначальный массив:\n";
	sA(arr, 10);*/

	//Работа с structures.h
	/*person Jesus = {"Jesus ",{1,1,33},"God",1000000};
	showObj(Jesus);*/

	//Работа с data.h
	cout << "Введите 2 числа: ";
	cin >> _x >> _y;
	showxy();
	cout << _x << " + " << _y << " = " << sum(_x, _y) << endl;

	cout << "Введите радиус окружности: ";
	double r;
	cin >> r;
	cout << "Площадь окружнасти = " << _pi * r * r << endl;

	cout << "Изначальный массив:\n";
	fillarr(_a, 10, 10, 21);
	sA(_a, 10);


	return 0;
}