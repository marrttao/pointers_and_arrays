#include <iostream>
#include <random>
using namespace std;

int main() {



	int* size_m = new int;
	int* A = new int[*size_m] {};
	int* size_n = new int;
	int* B = new int[*size_n] {};

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 100);

	cout << "M: ";
	cin >> *size_m;
	cout << "N: ";
	cin >> *size_n;



	delete size_m;
	delete[] A;
	delete size_n;
	delete[] B;

	return 0;
}