/*
     If you can't think of solution think some well known algorithm related to it!
     Always BE COOL!
     Last minute hustle might give you AC
            ---RATNESH KUMAR TIWARY
 
*/
 
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define re(i,a,b) for(int i=a;i<b;i++)
#define sortv(all) sort(v.begin(),v.end())
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define ln "\n"
using namespace std;
vector<ll> v[100005];
vector<ll> solve(ll n){
    vector<ll> color(n+1,0);
    color[0]=1;
    for(int i=1;i<=n;i++)
        color[i]=-1;
   // for(auto i:color)
     //  cout<<i<<" ";
    //cout<<endl;
    bool avail[n];
    for(int i=1;i<=n;i++)
        avail[i]=false;
    //avail[0]=false;
    for(int u=1;u<=n;u++){
        //cout<<"BOOL"<<endl;
        for(auto i:v[u]){
            //cout<<color[i]<<" ";
            if(color[i]!=-1)
                avail[color[i]]=true;

        }
        ll r=0;
        for(r=1;r<=n;r++)
            if(avail[r]==false)
                break;

      color[u]=r;
      for(auto i:v[u])
        if(color[i]!=-1)
            avail[color[i]]=false;
    }
    //cout<<"mofo"<<endl;
   /* for(auto i:color)
        cout<<i<<" ";*/

    return color;



}
int main() 
{ 
   /* #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif*/
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
int t=1;
//cin>>t;
while(t--){
    ll m,n,a,b,f=0;
    cin>>n>>m;
    //vector<ll> v[n];
    for(int i=0;i<m;i++){
        cin>>a>>b;
        if(a==b)
        f=1;
        v[a].pb(b);
        v[b].pb(a);
    }
    //int f=0;
    vector<ll> ans=solve(n);
    if(f)
    cout<<-1<<endl;
    
    else{
    for(int i=1;i<=n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    }
}
}
    
