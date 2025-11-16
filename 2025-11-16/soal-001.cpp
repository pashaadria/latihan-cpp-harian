#include <iostream>
using namespace std;


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void shellSort(int arr[], int size) {
  
    for (int gap = size / 2; gap > 0; gap /= 2) {
     
        for (int i = gap; i < size; i++) {
            int temp = arr[i];
            int j = i;

           
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            
            arr[j] = temp;
        }
    }
}


int main() {
   
    int size;
    cout << "ukuran data yang ingin dimasukkan: ";
    cin >> size;
    int data[size];
    cout << "masukkan data: ";
    
    for(int i = 0; i < size; i++)
    cin >> data[i];

    cout << "Data sebelum diurutkan: ";
    printArray(data, size);

    shellSort(data, size);

    cout << "Data setelah diurutkan: ";
    printArray(data, size);

    return 0;
}
