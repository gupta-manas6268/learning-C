// Slide-2

// (Page-5)
//  Find no. of children ....?
// 
//   (Here, children => Immediate children, not all descendants.)
// For, root node, (no. of children = adjacency_List[i].size())
// For, non-root node, (no. of children = adjacency_List[i].size()-1)
//  We can solve it without using 'dfs' function by only 'adjacency_List'
//   2-D vector, by using '.size()' function in 'main()' only.


// (Page-9)
//  Level Order Traversal(LOT) != DFS.
//  LOT is different & Mentor didn't teach it & said that 
//   LOT isn't useful.


// (Page-10)
// Correct BFS => 1 2 4 3 6 5 7 8 10 9 12 11
// Correct BFS => 1 2 3 4 5 6 7 8 9 10 11 12 
// 
//  (Both are correct, As (Page-9 =>) if A comes before B
//      in BFS traversal then all children of A must come
//      before all children of B.)


// (Page-12)
// # diameter of tree is not necessarily .... pass from the root.
//                                                           (↑)


// (Page-16)
//  ans[x] = ml(c1) + 1
// (↑ when x has only one child.)


// (Page-17)
// In rooted tree -> farthest node from the deepest node in the tree.
// 
// 2nd Point => '.... X and call it ...'
// 4th Point => '.... Y and call it ...'
//                          (↑) these 3-words written
//                             by Red-Marker Handwritten.


// (Page-21) 
// x,y -> LCA(x, y) = x
// (↑ here, x is ancestor of y.)




















// (Slide-3)

// (Page-8)
// ( x=4 ) -> written below tree in Left side of Page.