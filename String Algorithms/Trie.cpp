#include<bits/stdc++.h>
using namespace std;
using ll=long long;

const int MAXLEN = 1e6+10;
const int alphabet = 26;
int trie_table[MAXLEN][alphabet];
int total_nodes = 1;
int cnt[MAXLEN]; 

void add(string &s){
    int cur_node = 1; 
    cnt[cur_node]++;
    for(int i=0; i<s.size(); i++){
        int ch = s[i]-'a'; 
        if(trie_table[cur_node][ch]==0){ 
            total_nodes++;
            trie_table[cur_node][ch] = ++total_nodes;
        }
        cur_node = trie_table[cur_node][ch];
        cnt[cur_node]++;
    }
}
int query(string &s){ 

    int cur_node = 1;
    for(int i=0; i<s.size(); i++){
        int ch = s[i]-'a';
        if(trie_table[cur_node][ch]==0) return 0; 
        cur_node = trie_table[cur_node][ch];
    }
    return cnt[cur_node];
}
void solve()
{
	int n, q; 
    cin >> n >> q;
    for(int i=0; i<n;i++){
        string s;
        cin >> s;
        add(s);
    }
    while(q--){
        string s;
        cin >> s;
        int ans = query(s);
        cout << ans << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    
    while(t--) solve();
    // for (int i=1;i<=t;i++) {cout<<"Case "<<i<<": "; solve();}
}

