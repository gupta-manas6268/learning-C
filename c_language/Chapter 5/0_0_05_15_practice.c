// Q.2: What will the following line produce in a
//       C program:
//        printf("%d %d %d\n", a, ++a, a++);



















#include <stdio.h>

    int main(){
      int a;
      printf("Enter the value of a \n");
      scanf("%d",&a);

      printf("%d %d %d", a, ++a, a++); // Here "gcc compiler" works from right to left.  
     
    return 0;
}