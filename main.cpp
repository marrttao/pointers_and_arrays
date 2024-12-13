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
	uniform_int_distribution<> dis(1, 10);

	cout << "Array A: " << endl;

	for (int i = 0; i < *size_m; i++) {
		A[i] = dis(gen);
		cout << A[i] << " ";
	}

	cout << endl << "Array B: " << endl;

	for (int i = 0; i < *size_n; i++) {
		B[i] = dis(gen);
		cout << B[i] << " ";
	}

	cout << endl;

	int* size_c = new int;
	*size_c = *size_m ;
	int* C = new int[*size_c] {};
	
	int* index = new int;
	*index = 0;
	for (int i = 0; i < *size_m; i++) {
		bool is_repeated = false;
		for (int j = 0; j < *size_n; j++) {
			if (A[i] == B[j]) {
				is_repeated = true;
				break;
			}
		}
		if (!is_repeated) {
			C[*index] = A[i];
			(*index)++;
		}
	}

	*size_c = *index;
	cout << "Array C: " << endl;
	for (int i = 0; i < *size_c; i++) {
		cout << C[i] << " ";
	}
	



	delete size_m;
	delete size_n;
	delete[] A;
	delete[] B;

	return 0;
}