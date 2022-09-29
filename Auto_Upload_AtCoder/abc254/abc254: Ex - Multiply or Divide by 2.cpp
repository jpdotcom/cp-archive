#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define pb push_back
#define FOR(b) for(int i=0;i<b;i++)
typedef std::vector<int> vi;
typedef std::pair<long long,long long> pi;
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
typedef long long ll;
typedef std::priority_queue<int> pq;
#define F first 
#define S second 
#define PI 3.14159265358979323846
#define print(x) cout<<x<<'\n'
#define MOD (ll)(998244353)
#define INF ((int)1e9+7)
#define iset tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
#define bit(x,s) ((x>>s)&1)
using namespace std;
using namespace __gnu_pbds;
using u64 = uint64_t;
using u128 = __uint128_t;
const int maxN=1e5+10;
void solve(){

    pq a,b;
    int n; cin>>n;
    FOR(n){
        int v; cin>>v;
        a.push(v);
    }
    FOR(n){
        int v; cin>>v;
        b.push(v);
    }
    int ans=0;
    while (a.size() && b.size()){
        int v1=a.top();
        int v2=b.top();
        if (v1==v2){
            a.pop();
            b.pop();
        }
        else if (v1>v2){
            a.pop();
            v1/=2;
            ans++;
            a.push(v1);
        }
        else{
            if (v2%2){
                print(-1);
                return;
            }
            b.pop();
            b.push(v2/2);
            ans++;
        }
    }
    print(ans);
}
void precompute(){
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cout<<setprecision(15);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();
    int t=1;
    while (t--){
        solve();
    }
}

