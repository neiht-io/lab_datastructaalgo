//Cre :https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-nhi-phan-binary-search

int BinarySearch_Recursive(int a[],int x,int left,int right){
	if(left>right){
		return -1;
	}
	int mid=(left+right)/2;
	if(x==a[mid]){
		return mid;
	}
	if(x<a[mid]){
		return BinarySearch_Recursive(a,x,left,mid-1);
	}
	return BinarySearch_Recursive(a,x,mid+1,right);
}
