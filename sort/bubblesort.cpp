#include <iostream>
using namespace std;

// Hàm hoán đổi hai phần tử trong mảng
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Hàm thực hiện thuật toán Bubble Sort
void bubbleSort(int arr[], int size) {
    // Duyệt qua mảng từ đầu đến cuối
    for (int i = 0; i < size - 1; i++) {
        // So sánh từng cặp phần tử liền kề
        for (int j = 0; j < size - 1 - i; j++) {
            // Nếu phần tử hiện tại lớn hơn phần tử tiếp theo, hoán đổi chúng
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Hàm in mảng
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Mảng cần sắp xếp
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    // In mảng trước khi sắp xếp
    cout << "Mảng trước khi sắp xếp: ";
    printArray(arr, size);

    // Gọi hàm Bubble Sort để sắp xếp mảng
    bubbleSort(arr, size);

    // In mảng sau khi sắp xếp
    cout << "Mảng sau khi sắp xếp: ";
    printArray(arr, size);

    return 0;
}
