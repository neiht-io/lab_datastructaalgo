/cre:https://freetuts.net/thuat-toan-sap-xep-nhanh-quick-sort-2940.html

#include<stdio.h>
#include<iostream>
using namespace std;
 
//tạo hàm swap để tráo đổi các vị trí
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
  
//  phân đoạn trong mảng
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // khai báo phần tử đánh dâu pivot
    int left = low;   //khai báo biến bên trái
    int right = high - 1; //khai báo biến bên phải
    while(true){
        while(left <= right && arr[left] < pivot) left++; // tìm phần tử >= phần tử pivot trong mảng
        while(right >= left && arr[right] > pivot) right--; // tìm phần tử <= phần tử pivot trong mảng
        if (left >= right) break; // sau khi duyệt xong thì thoát khỏi vòng lặp
        swap(arr[left], arr[right]); // nếu chưa xong thì sử dụng hàm swap() để tráo đổi.
        left++; // Vì left hiện tại đã xét, nên cần tăng
        right--; // Vì right hiện tại đã xét, nên cần giảm
    }
    swap(arr[left], arr[high]);
    return left; // Trả về chỉ số sẽ dùng để chia đôi mảng
}
  
/* Hàm thực hiện giải thuật quick sort */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // index là chỉ số nơi phần tử này đã đứng đúng vị trí và đây là phần tử chia mảng làm 2 mảng con trái & phải 
        int index = partition(arr, low, high);
  
        // Gọi đệ quy sắp xếp 2 mảng con trái và phải
        quickSort(arr, low, index - 1);
        quickSort(arr, index + 1, high);
    }
}
  
/* Hàm xuất mảng */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++){
        cout << arr[i];
        cout<<"\t";
      }
}
   
int main()
{
    int arr[] = {9, -3, 5, 2, 6, 8, -6, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
   
    cout<<"Mảng sau khi được sắp xếp: \n";
    printArray(arr, n);
   
    cout<<"\n---------------------------------------\n";
    cout<<"Chương trình này được đăng tại Freetuts.net";
}
