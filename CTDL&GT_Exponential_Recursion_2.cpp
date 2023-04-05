//cre:https://freetuts.net/de-quy-da-tuyen-exponential-recursion-2958.html
#include<stdio.h>
#include<iostream>
using namespace std;
void dayNhiPhan(int i, int n, int *X)
{
    int val;    // val là các giá trị có thể gán cho các vị trí trong x
    for (val = 0; val < 2; val++)      // val có thể nhận hai giá trị là 0 và 1
    {
        X[i] = val;
  
        if (i == (n-1))         // nếu i là phần tử cuối của dãy
        {
            int j;
            for(j = 0; j < n; j ++)         // thì tin ra nhị phân mới tìm được
            {
                cout<<X[j];
            }
            cout<<"\n";
        }
  
        else              // nếu i chưa phải là phần tử cuối thì gán cho i sau là i+1.
        {
            dayNhiPhan(i+1, n, X); // gọi đệ quy tiếp tục thực hiện hàm
        }
    }
}
 
int main()
{
    int n;
    cout<<"Nhập n : ";    
    cin>>n;
  
    int X[n];    
    cout<<"Dãy nhị phân có độ dài "<<n<<" là:\n";
    dayNhiPhan(0, n, X);  
  
    cout<<"\n--------------------------------\n";
    cout<<"Chương trình này được đăng tại Freetuts.net";
}
