#include "functions.h"
#include <stdlib.h>
#include <time.h>

int sum(int a, int b) {
	return a + b;
}

void fillarr(int arr[], int l, int min, int max){
	srand(time(NULL));
	for (int i = 0; i < l; i++)
		arr[i] = rand() % (max - min) + min;
}

