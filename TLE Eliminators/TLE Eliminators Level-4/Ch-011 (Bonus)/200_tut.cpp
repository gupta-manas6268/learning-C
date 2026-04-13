// This is Lecture-03.

// In Slide-03,

// In Page-03,
//  if no -ve weight edge then go with dijkstra, as
//  dijkstra-TC = O((V + E) * log(V)), but
//  bellman-ford-TC = O(V * E), 
//  i.e. dijkstra is faster than bellman-ford for
//       non -ve edges.

// In Page-07,
// Bellman-Ford is used for:
//  shortest path even if -ve egdes exist
//  detect -ve cycles