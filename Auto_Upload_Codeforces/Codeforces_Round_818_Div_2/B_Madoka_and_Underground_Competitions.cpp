#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define pb push_back
#define FOR(a,n) for (int a=0;a<n;a++)
#define mp(a,b) make_pair(a,b)
typedef std::vector<long  long> vi;
typedef std::pair<int,int> pi;
typedef long long ll;
#define F first 
#define S second 
#define PI 3.14159265358979323846
#define print(x) cout<<x<<'\n'
#define endl '\n'
#define bit(x,s) ((x>>(s))&1)
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define INF ((int)1e9+10)
#define MOD ((ll)1e9+7)
using namespace std;
using u64 = uint64_t;
using u128 = __uint128_t;
const int maxN=505;
char arr[maxN][maxN];
void solve(){
    int n,k,r,c; cin>>n>>k>>r>>c; r--,c--;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            arr[i][j]='.';
        }
    }
    arr[r][c]='X';
    for (int j=r;j<n;j+=k){
        for (int i=0;i<n;i++){
            arr[(j+i)%n][(c+i)%n]='X';
        }
    }
    for (int j=r;j>=0;j-=k){
        for (int i=0;i<n;i++){
            arr[(j+i)%n][(c+i)%n]='X';
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
void precompute(){
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<setprecision(15);
    precompute();
    int t=1;
    int i=1;
    cin>>t;
    while (t--)
    {
        solve();
        ++i;
    }
}
