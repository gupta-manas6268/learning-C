// 

// H.W. Problem.

// Find Number of Cyclic Shifts
// https://acmp.ru/index.asp?main=task&id_task=829&locale=en







// Hint:
//  Ex: string a = "abcabc", b = "abc";
//    here, b.size() = 3. 
//   So, make Sliding-Window of size = 3 of string-a,
//   then take Hash of Sliding Window of a, & also take
//   Hash of all cyclic shift string-b.
//  Then, check all Hash of Sliding Window of string-a = cyclic shift of string-b.
//  This will give Answer.






// TC = O(n * log(n)).