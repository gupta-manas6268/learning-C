// From [01:37:00] of this Lecture-01.


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int arr[100000], sgt[4*100000];
// (s => start, e => end, sgt => segment_Tree)

int left_Child(int index){
    return 2 * index;
}
int right_Child(int index){
    return (2 * index) + 1;
}
int combine_Children(int left, int right){
    return left + right;
}

void build(int s, int e, int index){ // O(n)
    // Leaf node
    if(s == e){
        sgt[index] = arr[s];
        return;
    }

    int mid = (s + e)/ 2;
    build(s, mid, left_Child(index));
    build(mid + 1, e, right_Child(index));

    sgt[index] = combine_Children(sgt[left_Child(index)], sgt[right_Child(index)]);
}

void update(int s, int e, int index, int update_index, int update_value){ // O(log(n))
    // Leaf node
    if(s == e){
        sgt[index] = update_value;
        return;
    }
    
    int mid = (s + e)/ 2;
    if(mid >= update_index){
        update(s, mid, left_Child(index), update_index, update_value);
    }
    else{
        update(mid + 1, e, right_Child(index), update_index, update_value);
    }
    
    sgt[index] = combine_Children(sgt[left_Child(index)], sgt[right_Child(index)]);
}

int query(int s, int e, int index, int l, int r){ // O(log(n))
    // No overlap
    if((s > r) || (e < l)){
        return 0;
    }

    // Complete overlap
    if((s >= l) && (e <= r)){
        return sgt[index];
    }

    // Partial overlap
    int mid = (s + e)/ 2;
    int left_Contrib = query(s, mid, left_Child(index), l, r); // left_Contrib => left_Contribution
    int right_Contrib = query(mid + 1, e, right_Child(index), l, r);

    return combine_Children(left_Contrib, right_Contrib);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    for(int i=0; i < n; i++){ cin >> arr[i];}
    
    // Solution
    vector<int> segment_Tree(4*n);
    build(0, n-1, 1);

    // I/P
    int q; cin >> q;
    while(q--){
        int type; cin >> type;
        if(type == 1){
            int index, x; cin >> index >> x;
            update(0, n-1, 1, index-1, x);
        }
        else{
            int l, r; cin >> l >> r;

            // O/P
            cout << query(0, n-1, 1, l-1, r-1) << endl;
        }
    }
}