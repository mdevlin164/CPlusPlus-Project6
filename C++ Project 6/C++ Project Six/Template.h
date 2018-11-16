#pragma once
#include <iostream>
using namespace std;

#ifndef TEMPLATE_H
#define TEMPLATE_H

template<typename T> 
int find_max(T* array, int length) {
	if (array == 0 || length <= 0) {
		cout << "Invalid array" << endl;
		exit(1);
	}
	T max = array[0];
	int max_i = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] >= max) {
			max = array[i];
			max_i = i;
		}
	}
	return max_i;
}

#endif