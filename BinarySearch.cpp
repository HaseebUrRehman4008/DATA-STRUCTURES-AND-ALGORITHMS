#include <iostream>
using namespace std;

void binary(const int*, const int&, const int&);

int main() {
    const int size = 10;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    cout << " ---- BY BINARY SEARCH ---- " << endl;
	int key;
	cout << "Enter key you want to Find in array" << endl;
	cin >> key;
    binary(arr, size, key);

    delete[] arr;
    return 0;
}

void binary(const int* arr, const int& _size, const int& key) {
    int count = 0;
    int high = _size - 1;
    int low = 0;
    while (low <= high) {
        int mid = (high + low) / 2;
        if (arr[mid] == key) {
            cout << "PRESENT FOR STUDENT #" << mid << endl;
            count++;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else if (arr[mid] > key) {
            high = mid - 1;
        }
    }
    if (count == 0) {
        cout << "NOT FOUND" << endl;
    }
}







