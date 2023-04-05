//cre:https://freetuts.net/de-quy-long-nested-recursion-2959.html
int ackerman(int m, int n){
  if(m == 0)
     return n + 1;
  else if(n == 0)
     return ackerman(m - 1, 1);
  else
     return ackerman(m-1, ackerman(m, n-1));
}
