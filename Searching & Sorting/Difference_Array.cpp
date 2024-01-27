#include <bits/stdc++.h> 
using namespace std;
using ll = long long;

int main() 
{
	int n,m,k;
	cin>>n>>m>>k;
	int arr[n];
	for (int i=0;i<n;i++) cin>>arr[i];
	vector<int> difference_array(n);
	while(m--){
		int l,r,value;
		cin>>l>>r>>value;
		difference_array[l-1]+=value;
		if (r<n) arr[r]-=value;
	}
	for (int i=1;i<n;i++) difference_array[i]+=difference_array[i-1];
	ll prefix_sum[n+1];
	prefix_sum[0]=0;
	for (int i=0;i<n;i++) prefix_sum[i+1] = prefix_sum[i] + difference_array[i] + arr[i];
	while(k--){
		int x,y;
		cin>>x>>y;
		cout<<prefix_sum[y] - prefix_sum[x-1]<<endl;
	}
}
