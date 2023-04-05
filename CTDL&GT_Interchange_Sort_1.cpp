//cre: https://sinhvientot.net/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort/

void Sapxep(int a[], int n)
{
	for (int i = 0; i < n-1;i++)
		for (int j = i + 1; j < n;j++)
		if (a[i]>a[j])
			swap(a[i], a[j]);
}


void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

