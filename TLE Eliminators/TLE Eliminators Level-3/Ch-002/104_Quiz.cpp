// Quiz: There is a hidden array of N integers, you need to find any index of the majority
//        element or report that no such element exists. You can ask for any index and
//        the computer will tell you if that index contains the majority element or not.
//        Constraints: 1 <= N <= 1018.



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// [10, 20, 10, 10, 10, 30]
struct Interactor{
    long long n;
    int majority_Element = -1;
    vector<int> arr;

    Interactor(long long n1){
        n = n1;
        // vector<int> arr = {10, 20, 10, 30, 10, 10, 10};
        // Above line didn't work, but below 'this' line works.
        this->arr = {10, 20, 10, 30, 10, 10, 10};
        majority_Element = 10;
    }
    string queryInteractor(long long index){
        if(arr[index - 1] == majority_Element){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};

bool testing = true;

string query(long long index, Interactor &it){
    cout << "? " << index << endl;

    fflush(stdout);  // These two lines 
    cout << flush;   // flushes the O/P.

    // Interactor it;
    string output; 

    if(testing){
        output = it.queryInteractor(index);
        cout << "Interactor Output: " << output << endl;
        cout << flush;
    }
    else{
        cin >> output;
    }
    return output;
}

signed main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // ios::sync_with_stdio(false); cin.tie(NULL);

    long long n; cin >> n;

    Interactor it = Interactor(n);

    int iterations = 20;
    long long ans = -1;
    for(int i=0; i < iterations; i++){
        // int x = getRandomNumber(1, n);
        int x = (rand() % n) + 1;

        string result = query(x, it);
        if(result == "Yes"){
            ans = x;
            break;
        }
    }
    cout << "! " << ans << endl;
}