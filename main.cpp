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
    uniform_int_distribution<> dis(1, 25);

    cout << "Array A: ";
    for (int i = 0; i < *size_m; i++) {
        A[i] = dis(gen);
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < *size_n; i++) {
        B[i] = dis(gen);
        cout << B[i] << " ";
    }
    cout << endl;

    int* temp = new int[*size_m + *size_n] {};
    int temp_size = 0;

    for (int i = 0; i < *size_m; i++) {
        bool found = false;
        for (int j = 0; j < temp_size; j++) {
            if (temp[j] == A[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp[temp_size++] = A[i];
        }
    }

    for (int i = 0; i < *size_n; i++) {
        bool found = false;
        for (int j = 0; j < temp_size; j++) {
            if (temp[j] == B[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp[temp_size++] = B[i];
        }
    }

    int* C = new int[temp_size] {};
    for (int i = 0; i < temp_size; i++) {
        C[i] = temp[i];
    }

    cout << "Array C (unique elements): ";
    for (int i = 0; i < temp_size; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete size_m;
    delete size_n;
    delete[] A;
    delete[] B;
    delete[] temp;
    delete[] C;

    return 0;
}
