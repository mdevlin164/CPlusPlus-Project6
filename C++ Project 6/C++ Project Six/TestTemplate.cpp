#include "Template.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int int_array_length = 10;
	int* int_array = new int[int_array_length];
	for (int i = 0; i < int_array_length; i++) 
		int_array[i] = rand() % 1000;
	
	for (int i = 0; i < int_array_length; i++)
		cout << "Int array: " << int_array[i] << endl;
	cout << "Max value in int array is at index " << find_max(int_array, int_array_length) << endl;

	int double_array_length = 10;
	double* double_array = new double[double_array_length];
	for (int i = 0; i < double_array_length; i++)
		double_array[i] = sqrt(rand() % 1000);
	
	for (int i = 0; i < double_array_length; i++)
		cout << "Double array: " << double_array[i] << endl;
	cout << "Max value on double array is at index " << find_max(double_array, double_array_length) << endl;

	return 0;
}