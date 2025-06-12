// See 2-Page-Notes of this Tries in TLE-notebook
























// In Slide-1, Page-4
//  "a queries with a string X"
//   ↑             
//  "X such that 1 <= a <= 1e3, 1 <= length(X) <= 1e3"
//                    ↑             
// 
// here, it isn't "a" but "q". So,
//  "q queries with a string X"
//   ↑             
//  "X such that 1 <= q <= 1e3, 1 <= length(X) <= 1e3"
//                    ↑             
// 
// |X| => length of string-X.










// In Slide-1, Page-7
// if(hash_map.find(5) != hash_map.end())    // O(1)
// if(map.find(5) != map.end())    // O(log(n))







// In Slide-1, Page-11
//    Q(X) => Q-Queries of different string-X.
// 
//    Brute Force =>      TC = O(Q * N * X)
//                =>      TC = O(Q * N * |X|)



// In Slide-1, Page-15
//      if A > B or B > A    (Correct)
//      if A > B or B < A    (Wrong)
//                    ↑




// In Slide-1, Page-16
//    O(B) -> O(log(B))





// In Slide-1, Page-17
// Checking no. of string in DB with X as prefix
//                           ↑ (DB => Data-Base)
// 
//  BS => Binary-Search.
//     if X is a prefix or not of current string




// In Slide-1, Page-19
//      2) Precompute prefix hash of all string -> O(N * L)
//                                          ↑
// 
//  3) i) Precompute prefix hash of X -> O(|X|)
//                               ↑







// In Slide-1, Page-33
//  Here, Compare initial trie in Page-25, and after deleting-"abd"
//        in trie of Page-33, and Compare numbering of nodes(which
//          gives no. of string with particular prefix) is also changed.

























// Slide-2


// In Slide-2, Page-2
// (DB => Data-Base.)
// 
// you will be given a string X, you need to find whether there exist <= 2
//                                                                       ↑ (Correct.)




// In Slide-2, Page-8
//   f(1e6, 40, 26) = [Σ(i=1 to k) of power(26, i)] + f(1e6, 40-k, 26)
//                                                    ↑(See carefully.)




// In Slide-2, Page-12
//       (TN => Total no. of nodes in trie.)




// In Slide-2, Page-20
//     O(N * 32) + O(N * 32)   
//           ↑(here, 32 = log2(1e9).)
// 
// Q. Given an array A of N integers (0 <= a[i] <= 1e9), find the max.
//    XOR of 2 no.'s when one number is  X = 110010, (where, X => is in binary no.)
//                   ↑(from here, see Q. properly.)



// In Slide-2, Page-31
//    for(int j=0; j<n; j++){
//        if(valid[j] & (i'th bit is set)){ cnt++;}       // (where, cnt => count)
//                             ↑
//    }