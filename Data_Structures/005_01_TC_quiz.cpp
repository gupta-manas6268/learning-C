// Q.1: Consider the recursive algorithm below, where the random(int n) spends one unit of time to return a
//       random integer which is evenly distributed within the range [0,n]. If the average processing time
//       is T(n), what is the value of T(6)?


int function(int n) {
    int i;
    if (n <= 0) {
        return 0;
    } else {
        i = random(n - 1); // It gives a random number b/w '0 to (n-1)'.
        printf("this\n");
        return function(i) + function(n - 1 - i); // Here, if we take any random no. then also by this
                                                  // line. TC is same.
                                                  // Let, (n = 0) then (n - 1 - i = n - 1).
    }
}




// Ans: So, T(n) = O(n)
//        So, T(6) = 6 unit of time.  