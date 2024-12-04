#include <iostream>
#include <random>
using namespace std;

int main() {



	int* size_m = new int;
	int* size_n = new int;
	cout << "M: ";
	cin >> *size_m;
	cout << "N: ";
	cin >> *size_n;

	int* A = new int[*size_m] {};
	int* B = new int[*size_n] {};

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 100);

	delete size_m;
	delete size_n;
	delete[] A;
	delete[] B;

	return 0;
}