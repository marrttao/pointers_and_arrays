#include <iostream>
#include <random>
using namespace std;

int main() {
    int* size_m = new int;
    cout << "M: ";
    cin >> *size_m;

    int* A = new int[*size_m] {};

    cout << "Enter elements for array A: ";
    for (int i = 0; i < *size_m; i++) {
        cin >> A[i];
    }
	for (int i = 0; i < *size_m; i++) {
		cout << A[i] << " ";
	}

    cout << endl << "|| odd numbers - 1  ||";
	cout << endl << "|| even numbers - 2 ||";
	cout << endl << "|| Your choice: ";
	int* choice = new int;
	cin >> *choice;




    delete size_m;
    delete[] A;

    return 0;
}
