// Wrong. (Time-limit exceeded.)
// I can't find any Doubt class of this Question.

// Deque-STL
// https://www.hackerrank.com/challenges/deque-stl/problem?isFullScreen=true


















#include <bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k){
    deque<int> myDequeue;
    for(int i=0; i<k; i++){
        myDequeue.push_back(arr[i]);
    }
    for(int i=k; i <= n; i++){
        int ans = *max_element(myDequeue.begin(), myDequeue.end());
        cout << ans << " ";

        myDequeue.pop_front();
        if(i < n){
            myDequeue.push_back(arr[i]);
        }
    }
    cout << endl;
	//Write your code here.
}

int main(){
    int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}