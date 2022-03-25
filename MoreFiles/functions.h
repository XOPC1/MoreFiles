#pragma once
#include <iostream>

int sum(int a, int b);

void fillarr(int arr[], int l, int min, int max);

template<typename T>void sA(T arr[], int l) {
	std::cout << "[";
	for (int i = 0; i < l; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}