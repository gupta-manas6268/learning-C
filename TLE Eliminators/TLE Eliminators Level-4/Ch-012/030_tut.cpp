// This is Lecture-03.

// In Slide-03,

// In Page-5,
//  P(x) ->
//  E(x) = (x * P(x)), (E(x) => Expected value of x, 
//                      P(x) => Probability of x)
// 
//  (1 / fact(n)) * (Σ(x/ fact(n))), are possible values of x
// 
//  min(left_max, right_max) - hi (height of that point)
// 
//  either left max. or right max. is the max. of the whole array.


// In Page-6,
//  (a[j] - a[i]) = rainwater 
// 
//  find all permutations where a[j] is (max. left / max. right) 
//   for a[i].
// 
//  Calculate how much water is above each column.
// 
//  min(h[l], h[r]) - h[i],   (l => left, r => right, i => that index)


// In Page-7,
//  how many permutations are there s.t. a[j] is left_max & a[i] = P(j, i)
//                                                    (Probability ↑)
// 
//  Compute this using brute force
// 
//  (Σ(j=1 to n-1) (Σ(i=0 to j-1) ((a[j] - a[i]) * P(j, i))))
//  (a[j] >= a[i])
// 
//  (1/ (n-j+1)) * (1/ (n-j-1))


// In Page-11,
//  0 -> don't flip
//  1 -> need to flip


// In Page-12,
//  last column  which is not in last row
// 
//  we can do something similar for last row which is not last column.
// 
//  element at last row, last column will always = 0, or answer
//  doesn't exist.
// 
//  odd flips -> answer never exists.