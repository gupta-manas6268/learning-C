// From [50:00] of this Lecture.



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void merge(vector<int> &v, int start_index, int end_index){
    vector<int> arr(end_index - start_index + 1);
    int mid = (start_index + end_index)/2;
    int i = start_index, j = mid + 1, k = 0;
    while((i <= mid) && (j <= end_index)){
        if(v[i] <= v[j]){
            arr[k] = v[i];
            i++; k++;
        }
        else{
            arr[k] = v[j];
            j++; k++;
        }
    }
    while(i <= mid){
        arr[k] = v[i];
        i++; k++;
    }
    while(j <= end_index){
        arr[k] = v[j];
        j++; k++;
    }

    int t = 0;
    for(int x=start_index; x <= end_index; x++){
        v[x] = arr[t];
        t++;
    }
}

void merge_sort(vector<int> &v, int start_index, int end_index){
    if(start_index >= end_index) return;

    int mid = (start_index + end_index)/2;
    merge_sort(v, start_index, mid);
    merge_sort(v, mid + 1, end_index);
    merge(v, start_index, end_index);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    for(auto &it:v){ cin >> it;}
    merge_sort(v, 0, n-1);
    for(auto &it:v){
        cout << it << " ";
    }
    cout << endl;
}