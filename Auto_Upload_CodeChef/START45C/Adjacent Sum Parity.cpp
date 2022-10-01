#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define pb push_back
#define FOR(b) for(int i=0;i<b;i++)
typedef std::vector<int> vi;
typedef std::pair<int,int> pi;
#define mp(a,b) make_pair(a,b)
typedef long long ll;
typedef std::priority_queue<int> pq;
#define endl '\n'
#define F first 
#define S second 
#define PI 3.14159265358979323846
#define print(x) cout<<x<<'\n'
#define MOD (int)(1e9+7)
#define iset tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
#define bit(x,s) ((x>>s)&1)
using namespace std;
using namespace __gnu_pbds;
ll modu(ll a,ll b){
    return (b+(a%b)) % b;
}
ll power(ll a, ll b, ll p){
    ll ans=1;
    a%=p;  
    while(b){
        if(b&1)
            ans=(ans*a)%p;
        b/=2;
        a=(a*a)%p;
    }
    return ans;
}
void fileIO(string filename) {
	freopen((filename + ".in").c_str(), "r", stdin);
	freopen((filename + ".out").c_str(), "w", stdout);
}

void solve(){
    int n; cin>>n;
    vi b(n);
    FOR(n) cin>>b[i];
    FOR(2){
        bool ok=true;
        vi vals(n,-1);
        vals[0]=i;
        for (int j=0;j<n;j++){
            int p=(j+1)%n;
            if (vals[p]==-1){
                vals[p]=b[j]^vals[j];
            }
            else{
                if ((vals[p]^vals[j])!=b[j]) ok=false;
            }
        }
        if (ok){
            print("YES");
            return;
        }
    }
    print("NO");
}
void precompute(){
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();
    int t=1;
    cin>>t;
    while (t--){
        solve();
    }
     
}