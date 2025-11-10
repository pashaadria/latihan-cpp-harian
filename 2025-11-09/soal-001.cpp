#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[100];
    cout << "Masukkan data: ";
    for (int i = 0; i < n; i++) cin >> data[i];

    
    for (int i = 0; i < n - 1; i++) {
        int posisi_min = i;             
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[posisi_min]) {
                posisi_min = j;       
            }
        }
        int temp = data[i];
        data[i] = data[posisi_min];
        data[posisi_min] = temp;
    }

    cout << "Hasil setelah diurutkan: ";
    for (int i = 0; i < n; i++) cout << data[i] << " ";
    cout << endl;
    return 0;
}
