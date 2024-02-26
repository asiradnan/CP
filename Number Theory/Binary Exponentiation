int binExpo(ll a, int b, int m)
{
	ll ans=1;
	while(b){
		if (b&1) ans=(ans*a)%m;
		b>>=1;
		a=(a*a)%m;
	}
	return ans;
}
