#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int n, i, j, temp;

    cout << "Program Bubble Sort Sederhana" << endl;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int data[n];

    
    cout << "Masukkan elemen array:" << endl;
    for (i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> data[i];
    }

  
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    
  
    for (i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    cout << endl;
    return 0;
}
