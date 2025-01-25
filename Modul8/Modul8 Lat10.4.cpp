#include <iostream>
using namespace std;

int main() {
   
    int A[11];
    int input, index = 0;

    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int dataSize = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < dataSize; i++) {
        input = data[i];
        if (input == 999) {
            break; 
        }
        if (index < 11) { 
            A[index] = input;
            index++;
        }
    }

    cout << "Array A: ";
    for (int i = 0; i < index; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

