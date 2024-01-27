#include <bits/stdc++.h> 
using namespace std;
using ll = long long;

int main() 
{
	int n,q;
	cin>>n>>q;
	int arr[n];
	for (int i=0;i<n;i++) cin>>arr[i];
	ll prefix_sum[n+1];
	prefix_sum[0] = 0;
	for (int i=0;i<n;i++) prefix_sum[i+1] = prefix_sum[i] + arr[i];
	while(q--){
		int x,y;
		cin>>x>>y;
		cout<<prefix_sum[y]-prefix_sum[x-1]<<endl;
	}
}
