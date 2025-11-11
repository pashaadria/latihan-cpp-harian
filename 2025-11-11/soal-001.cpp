#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int kunci = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] < kunci){
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j+1] = kunci;

    }
}

int main(){
    int n;
    
    cout << "masukkan jumlah elemen array: ";
    cin >> n;
    int arr[n];


    for(int i = 0; i < n; i++){
        cout << "masukkan data ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    insertionSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

return 0;
}