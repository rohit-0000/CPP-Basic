//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        vector<int> dfs;
        // stack<int> st;
        queue<int> st;
        int vis[V] = {0};
        vis[0]=1;
        st.push(0);
        while (!st.empty())
        {
            int node = st.front();
            st.pop();
            // if (vis[node] == 0)
            // {
                dfs.push_back(node);
                // vis[node] = 1;
            // }
            for(int i=0;i<adj[node].size();i++)
            {
                int x = adj[node][i];
                if (vis[x] == 0)
                {
                    vis[x]=1;
                    st.push(x);
                }
            }
        }
        return dfs;
    }
};
//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends