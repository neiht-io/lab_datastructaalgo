//Cre: https://freetuts.net/thuat-toan-tim-kiem-tuyen-tinh-2630.html
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x){
        //Lặp từng phần tử của mảng và kiểm tra.
    for(int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
        // Trả về -1 nếu đã duyệt hết mà ko tìm thấy.
    return -1;
}
int main() {
    int arr[] = {1, 5, 12, -10, 5, 11};
    int x = -10;
        // Số phần có trong mảng.
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, x);
    if (result == -1)
        cout << "Khong tim thay " << x
             << " trong mang";
    else
        cout << "Vi tri: " << result;
}
