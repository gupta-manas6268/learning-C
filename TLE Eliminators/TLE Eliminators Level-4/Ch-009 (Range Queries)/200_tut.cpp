// From Lecture-03,

// In Slide-03,

// In Page-3,
//  (build, query, update)(merge)

// In Page-4,
//  node -> inversion count   l-r, ic (ic => inversion_count)

// In Page-5,
//  (ic_par => inversion_count_of_parent, f_par => frequency_parent)
//  (ic_left => inversion_count_of_left, f_left => frequency_left)
//  (ic_right => inversion_count_of_right, f_right => frequency_right)

// In Page-7,
//  (ind => index)

// In Page-8,
//  (fr => freq._array_of_right)
// 
//  4 ←--- fr[1] + fr[2] + fr[3]
// 
//  Fp[i] = Fl[i] + Fr[i], (Fp => freq._array_of_Parent, Fl => freq._array_of_Left,
//                          Fr => freq._array_of_Right)

// In Page-9,
//  build -> O(n * 40)
//  update -> O(log(n) * 40)
// 
//   q * log_2(n) * 40,   (log_2(n) => log(n) with base-2)
// 
//  Parent[i-1] -> i-1
//  left[i] + right[i],

// In Page-15,
//         (a[1], a[2], a[3], ....., a[n])
//         (a[1], -a[2], a[3], -a[4], ....., (-1) * (pow(-1, n)) a[n])
// (odd index ↑)    (↑ even index)