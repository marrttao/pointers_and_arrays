#include <iostream>
#include <random>
using namespace std;

int main() {



	int size_m, size_n;
	cout << "M: ";
	cin >> size_m;
	cout << "N: ";
	cin >> size_n;

	int* A = new int[size_m] {};
	int* B = new int[size_n] {};

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 100);


	delete[] A;
	delete[] B;

	return 0;
}