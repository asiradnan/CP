int dp[1001][1001];
int func(string &s1,string &s2,int n,int m)
{
    if (n==0 || m==0) return 0;
    if (dp[n-1][m-1]!=-1) return dp[n-1][m-1];
    if (s1[n-1]==s2[m-1]) return 1 + func(s1,s2,n-1,m-1);
    return dp[n-1][m-1] = max(func(s1,s2,n,m-1),func(s1,s2,n-1,m));
}
int lcs(int n, int m, string str1, string str2) {
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++) dp[i][j]=-1;
    }
    return func(str1,str2,n,m);
}
