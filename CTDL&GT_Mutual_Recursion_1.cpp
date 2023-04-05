//cre: https://freetuts.net/de-quy-tuong-ho-mutual-recursion-2961.html
bool isEven(int n);
bool isOdd(int n);
 
bool isEven(int n){
  if(n == 0)
    return true;
  else
    return isOdd(n - 1);
}
 
bool isOdd(int n){
  return !isEven(n);
}
