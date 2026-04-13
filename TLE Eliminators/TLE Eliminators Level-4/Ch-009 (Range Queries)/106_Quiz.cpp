// Quiz: 1st-element > X, in range.


// Max. range
// update -> a[i] = x

// See Lines-82 to 103 & 121 to 157.

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 
#define all(x) x.begin(), x.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


// Segment-Tree Template (↓)
template<typename Node, typename Update>
struct SegTree {
    vector<Node> tree;
	vector<int> arr; // type may change
	int n;
	int s;
	SegTree(int a_len, vector<int> &a) { // change if type updated
		arr = a;
		n = a_len;
		s = 1;
		while(s < 2 * n){
            s = s << 1;
		}
		tree.resize(s); fill(all(tree), Node());
		build(0, n - 1, 1);
	}
	void build(int start, int end, int index)  // Never change this
	{
        if (start == end)	{
            tree[index] = Node(arr[start]);
			return;
		}
		int mid = (start + end) / 2;
		build(start, mid, 2 * index);
		build(mid + 1, end, 2 * index + 1);
		tree[index].merge(tree[2 * index], tree[2 * index + 1]);
	}
	void update(int start, int end, int index, int query_index, Update &u)  // Never Change this
	{
        if (start == end) {
            u.apply(tree[index]);
			return;
		}
		int mid = (start + end) / 2;
		if (mid >= query_index)
        update(start, mid, 2 * index, query_index, u);
		else
        update(mid + 1, end, 2 * index + 1, query_index, u);
		tree[index].merge(tree[2 * index], tree[2 * index + 1]);
	}
	Node query(int start, int end, int index, int left, int right) { // Never change this
		if (start > right || end < left)
        return Node();
		if (start >= left && end <= right)
        return tree[index];
		int mid = (start + end) / 2;
		Node l, r, ans;
		l = query(start, mid, 2 * index, left, right);
		r = query(mid + 1, end, 2 * index + 1, left, right);
		ans.merge(l, r);
		return ans;
	}
	void make_update(int index, int x) {  // changed (←)
		Update new_update = Update(x); // changed (←)
		update(0, n - 1, 1, index, new_update);
	}
	Node make_query(int left, int right) {
        return query(0, n - 1, 1, left, right);
	}
};

struct Node1 {
    int val; // changed (←)
	Node1() { // Identity element
		val = -1e9;	// changed (←)
	}
	Node1(int p1) {  // Actual Node
		val = p1; // changed (←)
	}
	void merge(Node1 &l, Node1 &r) { // Merge two child nodes
		val = max(l.val, r.val); // changed (←)
	}
};

struct Update1 {
    int x; // changed (←)
	Update1(int x1) { // changed (←)
		x = x1; // changed (←)
	}
	void apply(Node1 &a) { // apply update to given node
		a.min_1 = x; // changed (←)
	}
};
// Segment-Tree Template (↑)


signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++){ cin >> arr[i];}

    // Solution
    SegTree<Node1, Update1> sg = SegTree<Node1, Update1> (n, arr);

    int q; cin >> q;
    while(q--){
        int type; cin >> type;

        if(type == 1){
            int i, x; cin >> i >> x;
            sg.make_update(i, x);
        }
        else{
            int l, r, x; cin >> l >> r >> x;

            // Find out 1st-'i' s.t. a[i] > x in the range from l to r.
            int start = l, end = r;
            int ans = -1;

            // [1, 2, 3, 4], l = 0, r = 3, x = 3

            // mid = 1 [0, 1] -> No -> l = 2, r = 3
            // mid = 2 [0, 2] -> No -> l = 3, r = 3
            // mid = 3 [0, 3] -> Yes -> ans = mid = 3
            
            while(start <= end){ // log(n)
                int mid = (start + end)/ 2;
                int max_from_l_to_mid = sg.make_query(l, mid).val; // log(n)
                if(max_from_l_to_mid > x){
                    ans = mid;
                    end = (mid - 1);
                }
                else{
                    start = (mid + 1);
                }
            }

            // O/P
            // Complete it.
        }
    }
}