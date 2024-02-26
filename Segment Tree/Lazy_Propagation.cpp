#include<bits/stdc++.h>
using namespace std;
using ll=long long;

vector<ll> arr,tree,lazy;
void build(int idx,int b,int e)
{
    if (b==e) {
        tree[idx]=arr[b];
        return;
    }
    int left=idx*2,right=idx*2+1,mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[idx]=tree[left]+tree[right];
}
void update(int idx,int b,int e,int l,int r,int value)
{
    if (r<b || e<l)  return;
    if (l<=b && e<=r) {
    	tree[idx]+=value*(r-l+1);
    	if (b<r){
    		lazy[2*idx]+=value;
    		lazy[2*idx+1]+=value;
    	}
    	return;
    }
    int left=idx*2,right=idx*2+1,mid=(b+e)/2;
    update(left,b,mid,l,r,value);
    update(right,mid+1,e,l,r,value);
    tree[idx]=tree[left]+tree[right];
}
ll query(int idx,int b,int e,int l, int r)
{
    if (lazy[idx]){
		tree[idx]+=lazy[idx]*(e-b+1);
		if (b<e){
			lazy[idx*2]+=lazy[idx];
			lazy[idx*2+1]+=lazy[idx];
		}
		lazy[idx]=0;
    }
    if (r<b || e<l) return 0;
    if (l<=b && e<=r) return tree[idx];
    int left=idx*2,right=idx*2+1,mid=(b+e)/2;
    ll left_sum=query(left,b,mid,l,r);
    ll right_sum=query(right,mid+1,e,l,r);
    return left_sum+right_sum;
}
int main()
{
    int n,q;
    cin>>n>>q;
    arr.resize(n+1);
    tree.resize(4 *n);
    lazy.resize(4*n);
    // for (int i=1;i<=n;i++) cin>>arr[i];
    build(1,1,n);
    while(q--){
        int a,b,c;
        cin>>a>>b>>c;
        if (a==1) cout<<query(1,1,n,b,c)<<endl;
        else {
        	int d;
        	cin>>d;
        	update(1,1,n,b,c,d);
        }
        	
    }
}
