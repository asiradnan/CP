#include <bits/stdc++.h> 
using namespace std;
using ll = long long;

int main() 
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int k = 1;
	
	int l=0,r=n-1,m;
	while(l<=r){
		m = (l+r)/2;
		if (arr[m]<k) l=m+1;
		else if (arr[m]>k) r=m-1;
		else break;
	}
	if (arr[m]==k) cout<<m<<endl;
	else cout<<-1<<endl;
}
