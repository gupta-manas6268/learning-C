// # states => no. of states.







// This is Lecture - 1.


// In Slide-1, Page-12
// Here, input is when can we use array instead of map.
//  input for array instead of map -> +ve int
//                                 -> input must not be very large

// In Slide-1, Page-13
//  arr -> |DV|DV|DV|....
//             keys
// 
//  Here, DV => Default Values. (To check whether we solved that Sub-Problem before or not.)
//   DV(Default Values) should be any value outside the range of the function.

// In Slide-1, Page-15
//  output -> {-inf to inf}
//         -> {-infinity to infinity} (Range of OUTPUT's.)
// 
//  (act val => actual values)
//  (bool    => boolean values)

// In Slide-1, Page-20
//  TC: O(power(2, n*n)).  (For Brute-Force without DP.)
//     (As, square had total n*n grids.)
// 
//  Actual TC: O( nCr(2n-2, n-1)).  (By using DP.)
//     (As, these no. of Combinations form where, 
//      (2n-2 = (n-1) + (n-1))

// In Slide-1, Page-22
//  D↓  => Down↓ (n-1)times.
//  R→  => Right→ (m-1)times.

// In Slide-1, Page-27
//  2) go from (0,0) to (i,j) & find out the min. sum path
//                                    ↑

// In Slide-1, Page-30
//      (DnC => Divide and Conquer approach.)















// This is Lecture-2.




// In Slide-2, Page-2
//  We are ensuring that every sub-problem is solved just once
//                                ↑                        ↑


// In Slide-2, Page-6
//  O(1) in 99% problems.


// In Slide-2, Page-6
//   TC = (# states)      x (T.T. for 1-state)
//   TC = (no. of states) * (Transition Time for 1-state) 
//   TC =  n * O(1) = O(n).
// 
//  S_1 -> O(1).    [Here, S_1 => Sub-Problem 1.]
//  S_2 -> O(1).    [Here, S_2 => Sub-Problem 2.]
//  ....



// In Slide-2, Page-17
//  Recursive V/S Iterative DP
//             ↓
//  Recursive DP V/S Iterative DP


// In Slide-2, Page-20
//   no. of paths to go from top left to bottom right
// 
//   f(i, j) = f(i+1, j) + f(i, j+1).
//                ↓           ↓          ↓
//                ↓          (Only when right cell is empty)
//              (Only when bottom cell is empty)
//                           ↑


// In Slide-2, Page-22
//   Grid Problem =>  
//   for(i -> ((n-1) to 0))
//      for(j -> ((m-1) to 0))
//          dp[i][j] => (It depends on dp[i+1][j] & dp[i][j+1].)
// 
// 