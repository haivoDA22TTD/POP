#include <iostream>
using namespace std;

// Hàm để xây dựng Max Heap
void heapify(int arr[], int n, int i) {
    int largest = i;  // Khởi tạo largest là gốc
    int left = 2 * i + 1;  // Con trái
    int right = 2 * i + 2;  // Con phải

    // Kiểm tra xem con trái có lớn hơn gốc không
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Kiểm tra xem con phải có lớn hơn gốc không
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Nếu largest không phải là gốc, hoán đổi và tiếp tục heapify
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Hàm thực hiện HeapSort
void heapSort(int arr[], int n) {
    // Xây dựng Max Heap từ dưới lên
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Một một một lần, hoán đổi gốc với phần tử cuối cùng, và heapify lại phần còn lại
    for (int i = n - 1; i >= 1; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// Hàm in mảng
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);
    printArray(arr, n);

    return 0;
}
