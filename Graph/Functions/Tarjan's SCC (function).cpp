vector<int> node_id;
vector<int> low;
vector<bool> instack;
stack<int> sk;
int id=0;
void dfs(int i, vector<int> adj[])
{
    node_id[i] = low[i] = id++;
    sk.push(i);
    instack[i] = true;
    for (int j:adj[i]) {
        if (node_id[j]==-1) dfs(j,adj);
        if (instack[j]) low[i] = min(low[i],low[j]);
    }
    if (node_id[i]==low[i]){
        while(sk.size()) {
            int x = sk.top();
            sk.pop();
            instack[x]=false;
            low[x]=node_id[i];
            if (x==i) break;
        }
    }
    
}

vector<vector<int>> tarjans(int V, vector<int> adj[])
{
    node_id.resize(V,-1);
    instack.resize(V);
    low.resize(V);
    for (int i=0;i<V;i++) {
        if (node_id[i]==-1) dfs(i,adj);
    }
    map<int,vector<int>> mp;
    for (int i=0;i<V;i++) {
        mp[low[i]].push_back(i);
    }
    vector<vector<int>> ans;
    for (auto p:mp) ans.push_back(p.second);
    sort(ans.begin(),ans.end()); //optional
    return ans;
}
