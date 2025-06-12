// Take Screenshots by fastly seeing the Lecture.




// Next Greater Permutation 
// https://www.naukri.com/code360/problems/next-greater-permutation_6929564





#include<bits/stdc++.h>
using namespace std;

vector<int> next_Greater_Permutation(vector<int> &A){
    int index = -1;
    int n = A.size();

    for(int i = n-2; i >= 0; i--){
        if(A[i] < A[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(A.begin(), A.end());
        return A;
    }

    for(int i = n-1; i > index; i--){
        if(A[i] > A[index]){
            swap(A[i], A[index]);
            break;
        }
    }

    reverse(A.begin() + index + 1, A.end());
    return A;


    // TC = O(3 * n)
    // i.e. TC = O(n).

    // 
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}