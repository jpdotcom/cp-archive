#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define pb push_back
#define FOR(a,b) for (int a=0;a<=b;a++)
#define mp(a,b) make_pair(a,b)
typedef std::vector<int> vi;
typedef std::pair<long long,long long> pi;
typedef long long ll;
#define F first 
#define S second 
#define PI 3.14159265358979323846
#define print(x) cout<<x<<'\n'
#define bit(x,s) ((x>>s)&1)
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define INF (1e18)
#define endl '\n'
#define MOD ((int)1e9+7)
using namespace std;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    set<char> v={'T','i','m','u','r'};
    for (int i=0;i<s.size();i++){
        if (v.find(s[i])==v.end()){
            print("NO");
            return;
        }
        v.erase(s[i]);
    }
    if (v.size()==0) print("YES");
    else print("NO");
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
    while (t--) solve();
}
