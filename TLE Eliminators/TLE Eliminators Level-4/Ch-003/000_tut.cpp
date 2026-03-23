// This is Part-01 of this Lecture.

// In Slide-01

// Page-14
//  Generally, DP with bitmasking problems have (n <= 20)

// Page-30
//  index & mask => dependent on each other.

// Page-31
//  dp[i][mask] => (n * pow(2, n)) total states, but
//   only pow(2, n) useful states.

// Page-36
//  (mask, prev) = (mask | (1 << j), j)
//                      (↑) OR

// Page-38
//  TC: O(pow(n, 3) * pow(2, n)), SC = O(pow(n, 2) * pow(2, n))