#include <bits/stdc++.h> 
using namespace std;
using ll = long long;
bool ok(int arr[],ll m, int n, int t)
{
	ll cnt = 0;
	for (int i=0;i<n;i++){
		cnt+=m/arr[i];
		if (cnt>=t) return true;
	}
	return false;
}
int main() 
{
	int n,t;
	cin>>n>>t;
	int arr[n];
	for (int i=0;i<n;i++) cin>>arr[i];
	ll l=0,r=1e18,m;
	while(l+1<r){
		m=(l+r)/2;
		if (ok(arr,m,n,t)) r=m;
		else l=m;
	}
	cout<<r<<endl;
}
