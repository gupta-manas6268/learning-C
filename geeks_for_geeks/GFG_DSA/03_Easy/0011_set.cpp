// 

// Greater and Smaller Ones
// https://www.geeksforgeeks.org/problems/greater-and-smaller-ones/1?page=1&category=set&difficulty=Easy&sortBy=submissions


//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Geeks {
  public:
  static void greaterKSorted(vector<int>&arr, int k) {
      sort(arr.begin(), arr.end());
      vector<int> :: iterator it;
      it = find(arr.begin(), arr.end(), k);
      if(it == arr.end()){
        cout << "-1" << endl;
      }
      else{
        for(auto it_2 = it; it_2 != arr.end(); it_2++){
            cout << *it_2 << " ";
        }
        cout << endl;
      }
  }
  static void smallerKSorted(vector<int>&arr, int k) {
      sort(arr.begin(), arr.end());
      vector<int> :: iterator it;
      it = find(arr.begin(), arr.end(), k);
      if(it == arr.begin()){
        cout << "-1" << endl;
      }
      else{
        for(auto it_2 = arr.begin(); it_2 != it; it_2++){
            cout << *it_2 << " ";
        }
        cout << endl;
      }
  }
};

//{ Driver Code Starts.
int main() {
    
    int t; 
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n;
        cin >> k;
        
        vector<int>arr;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        Geeks obj;
        obj.greaterKSorted(arr, k);
        cout<<endl;
        obj.smallerKSorted(arr, k);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends