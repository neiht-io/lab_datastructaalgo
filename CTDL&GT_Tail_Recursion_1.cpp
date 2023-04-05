//cre: https://freetuts.net/de-quy-duoi-tail-recursion-2951.html

int UCLN(int m, int n){
  int r;
  if(m<n) return UCLN(n,m);
  r = m % n;
  if(r == 0) return n;
  else return UCLN(n,r);
}
