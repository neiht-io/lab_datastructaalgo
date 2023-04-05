//CRE: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-tuyen-tinh-linear-search
int LinearSearch(int a[], int n, int x){
	int i=0; a[n]=x; //a[n] là phần tử “lính canh”
	while(a[i]!=x){
		i++;
	}
	if(i==n){
		return -1; //Tìm không thấy x
	}
	else{
		return i; //Tìm thấy x
	}
}
