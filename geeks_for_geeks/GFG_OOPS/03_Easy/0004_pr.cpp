// Correct.
// C++ Function overloading
// https://www.geeksforgeeks.org/problems/c-function-overloading-1587115620/1?page=1&category=CPP&difficulty=Easy&sortBy=submissions



















//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;



// } Driver Code Ends
//User function Template for C++

int power(int a, int b){
    int ans = 1;
    for(int i=1; i<=b; i++){ ans *= a;}
    return ans;
}

void volume(int s)
{
    int  ans = power(s, 3);
    cout << ans << endl;
    // Add your code here.
}

void volume(int r, int h)
{
    float pi = 3.14159;
    float ans = pi * power(r, 2) * h;
    cout << ans << endl;
    // Add your code here.
}

void volume(int l, int b, int h)
{
    int ans = (l * b * h);
    cout << ans << endl;
    // Add your code here.
}



//{ Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        
        switch (q)
        {
            case 1:
            int edge;
            cin>>edge;
            volume(edge);
            break;
            
            case 2:
            int radius, heigh;
            cin>>radius>>heigh;
            volume(radius, heigh);
            break;
            
            case 3:
            int length, width, height;
            cin>>length>>width>>height;
            volume(length, width, height);
            break;
            
        }
        
        
        
    }
	
	return 0;
}
// } Driver Code Ends