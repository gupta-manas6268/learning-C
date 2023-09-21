#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int S(n);
  S(1) = a;
  S(2) = b;
  S(3) = c;
  S(n) = S(n-1) + S(n-2) + S(n-3);

  
  if (n==1){
    return a;
  }
  else if (n==2){
    return b;
  }
  else if (n==3){
    return c;
  }
  else{
    return
  }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}