// In Slide-1, Page-13

// Quiz-1: Fibonacci Problem?
// Ans: SC = O(n) => (Wrong)(MLE),
//      because dp[i] depends on dp[i-1], dp[i-2]
//      So, SC = O(1) => (Correct.)

// Quiz-2: Grid Problem?
// Ans:  SC = O(n * m) => (Wrong)(MLE),
//      because dp[i][j] depends on dp[i+1][j], dp[i][j+1],
//      i.e. current row only depends upon previous(bottom) row,
//      So, SC = O(m) => (Correct)