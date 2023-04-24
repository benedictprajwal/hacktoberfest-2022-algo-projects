#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define M 0
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl "\n"
#define mp make_pair
#define pb push_back
#define pf push_front
#define ub upper_bound
#define lb lower_bound
#define mod1 1000000009
#define mem(a, val) memset(a, val, sizeof(a))
#define vi vector<int>
#define vvl vector<vector<long>>
#define vl vector<ll>
#define vpl vector<pair<ll, ll>>
#define vpi vector<pair<int, int>>
#define msi map<string, int>
const ll limit = (ll)1e18;
vi adj[200005];
bool vis[200005];
int par[200005];
int color[200005];
int n;
bool dfs(int v, int c, int par)
{
    vis[v] = true;
    color[v] = c;
    for (auto x : adj[v])
    {
        if (!vis[x])
        {
            vis[x] = true;
            c = color[v] ^ 3;

            if (!dfs(x, c, v))
                return false;
        }
        else
        {
            if (color[x] == color[v])
                return false;
        }
    }
    return true;
}

void solve()
{
    int m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == false)
        {
            if (!dfs(i, 1, -1))
            {
                cout << "IMPOSSIBLE" << endl;
                return;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << color[i] << " ";
    }
    cout << endl;
}
int main()
{
    fastIO;
    solve();
}
