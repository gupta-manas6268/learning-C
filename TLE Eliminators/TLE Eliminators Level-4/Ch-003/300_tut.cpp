// This is Part-04 of this Lecture.

// From Slide-4,

// In Page-4
//  time-taken = ((pos[y] - pos[x]) * speed[x]),  (pos => position)

// In Page-7
//  j = i+1; j < n && k-(j-i-1) >= 0; j++

// In Page-13
//  take post => dp[i+1][i][k] + ((pos[i+1] - pos[i]) * speed[i])
//  not take  => dp[i+1][j][k-1] + ((pos[i+1] - pos[j]) * speed[j])

// In Page-14
//  i = n-1; i >= 0; i-- (decreasing)
// 
//  ndp[j][k], (ndp => new_dp)

// In Page-22
//  f(a, b) -> f(a)
//          -> f(b)

// In Page-24
//  f(L, R) = min(f(L+1, i) + f(i+1, R))
// 
//  S[L]
// 
//  1 + f(L+1, R)

// In Page-29
//  min(
//       1 + f(L+1, r),
//       if(L == r){ return 1;},
//       if(L > r){ return 0;},
//       min(f(L+1, i-1) + f(i, R)), s.t. (S[L] = S[i]) & (i > L)
//     )
// 

// In Page-30
//  f(L, R) => Choose an index b/w L to R (R => j)
// 
//  (r => R)


// In Page-33
//  3 ideas -> DP with bit-masking
//          -> greedy
//          -> space optimisation 

// In Page-35
//  We can sort the people on descending order of k[i]

// In Page-37
//  Person => take    => C[i] + f(i+1, mask | prob[i])   , (prob => problem)
//                                         (↑ Bitwise-OR)
//           not-take => f(i+1, mask)

// In Page-40
//  min => take (i + f(i+1, mask | prob[i]))
//                              (↑ Bitwise-OR)
// 
//  sorted people based on k
// 
//  TC = O(n * pow(2, m))

// In Page-41
//  O(k * n * pow(2, m))
// 
//  O(n * pow(2, m))