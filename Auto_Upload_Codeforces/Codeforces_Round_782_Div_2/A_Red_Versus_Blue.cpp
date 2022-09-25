#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define pb push_back
#define FOR(b) for(int i=0;i<(int)b;i++)
#define mp(a,b) make_pair(a,b)
typedef std::vector<int> vi;
typedef std::pair<long long,long long> pi;
typedef long long ll;
#define F first 
#define S second 
#define PI 3.14159265358979323846
#define print(x) cout<<x<<'\n'
#define endl '\n'
#define bit(x,s) ((x>>s)&1)
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define INF ((int)1e9+7)
#define MOD ((ll)1e9+7)
using namespace std;
const int maxN=2e5+1;
void solve(){
    int n; cin>>n;
    int r,b; cin>>r>>b;
    int times=r/(b+1);
    vi out;
    int s=0;
    for (int i=0;i<=b;i++,s+=times){
        out.pb(times);
    }
    for (int i=0;i<out.size() && s<r; s++,i++){
        out[i]++;
    }
    for (int i=0;i<out.size();i++){
        while (out[i]--)
            cout<<'R';
        if (i!=out.size()-1) cout<<'B';
    }
    cout<<endl;
}
void precompute(){
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<setprecision(15);
    precompute();
    int t=1;
    cin>>t;
    while (t--){
        solve();
    }
}
