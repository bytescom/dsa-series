#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n) { 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    bubbleSort(arr, n);

    printArray(arr, n);

    return 0;
}



#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // index of unsorted part
        int smallestIdx = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    selectionSort(arr, n);

    printArray(arr, n);

    return 0;
}



#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}


#include <iostream>
using namespace std;


void insert(int arr[], int n) {
    if (n <= 1)
        return;

    insert(arr, n - 1); 

    int last = arr[n - 1];
    int j = n - 2;

    
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}


void recursiveInsertionSort(int arr[], int n) {
    insert(arr, n);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 4, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    recursiveInsertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
