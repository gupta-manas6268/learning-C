// Wrong, Solve it properly

// https://www.geeksforgeeks.org/problems/weak-maths0559/1?page=1&difficulty=School&sortBy=submissions


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int max(int a, int b){
    if(a>=b){ return a;}
    else{ return b;}
}
int HCF(int a, int b){
    if(a == 1){
        return 1;
    }
    else{
        int arr1[30], arr2[30];
        int index1 = 0, index2 = 0;
 
        // To make Array of divisors of number = a.
        for(int i=2; i*i <= a; i++){
            if(a%i == 0){
                arr1[index1] = i;
                a /= i;
                index1++;
                i--;
            }
            if(a == 1){
                break;
            }
        }

        // To make Array of divisors of number = b.
        for(int i=2; i*i <= b; i++){
            if(b%i == 0){
                arr2[index2] = i;
                b /= i;
                index2++;
                i--;
            }
            if(b == 1){
                break;
            }
        }

        // To take HCF of a & b
        int ans = 1;
        int index = 0;
        int boolAns = true;

        for(int i=0; i < index1; i++){
            if(boolAns == true){
                for(int j=index; j < index2; j++){
                    if(arr1[i] < arr2[j]){
                        index++;
                        break;
                    }
                    else if((arr1[i] == arr2[j]) && (j == index2-1)){
                        ans *= arr1[i];
                        boolAns = false;
                        index++;
                        break;
                    }
                    else if(arr1[i] == arr2[j]){
                        ans *= arr1[i];
                        index++;
                        break;
                    }
                    else if((arr1[i] > arr2[j]) && (j == index2-1)){
                        boolAns = false;
                        break;
                    }
                }
            }
        }
        return ans;
    }
}

class Solution {
  public:
    int getNum(int arr[] , int N) {
        sort(arr, arr + N);
        int min = arr[0], max = arr[N-1];


        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        int a = HCF(3, 6); cout << a << endl;
        Solution ob;
        cout << ob.getNum(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends