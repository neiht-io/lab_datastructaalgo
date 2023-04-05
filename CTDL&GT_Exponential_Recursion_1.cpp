//cre:https://freetuts.net/de-quy-da-tuyen-exponential-recursion-2958.html
void daTuyen(int i, int n, int *X)
{
    int val;    
    for (val = 0; val < 2; val++)
    {
        X[i] = val;
        if (i == (n-1))      
        {
            int j;
            for(j = 0; j < n; j ++)     
            {
                cout<< X[j];
            }
            cout<<"\n";
        }
        else          
        {
            daTuyen(i+1, n, X); 
        }
    }
}
