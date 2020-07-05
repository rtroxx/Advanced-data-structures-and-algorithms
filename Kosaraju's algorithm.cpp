/*
     If you can't think of solution think some well known algorithm related to it!
     Always BE COOL!
     Last minute hustle might give you AC
            ---RATNESH KUMAR TIWARY
            **Kosaraju's Algorithm**
            **finding strongly connected components**
            **if one scc dfs produces tree otherwise forest**
            **T.C=O(v+e)**

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
//int dis[100005]
//vector<int> ans;
//int n,m;
//vector<int> dis(n+1,100005);
int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 }; 
int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 }; 
//int vis[1001][1001];
//int n,m,a,b,c,d;
void prtn(ll i){
cout<<i<<ln;}
/*bool isvalid(int p,int q){
	if(p<0||p>n-1||q<0||q>m-1)
	return false;
	if(v[p][q]!='.')return false;
	return true;
}
void dfs(int x,int y){
	vis[x][y]=1;
	for(int i=0;i<4;i++){
		if(isvalid(x+dx[i],y+dy[i]))
		dfs(x+dx[i],y+dy[i]);
	}
}*/
/*int find(int a){
    if(pa[a]<0)return a;
    return pa[a]=(find(pa[a]));
}
void union1(int a,int b){
    pa[a]=min(pa[a],pa[b]);
    pa[b]=a;
}*/
/*bool issafe(int p,int q){
    if(p<0 or q<0 or p>n-1 or q>m-1)
    return false;
    return true;
}*/
int n,m,a,b,scc=0;
stack<int> s;
vector<int> v[1000],g[1000];
bool vis[1000];
void dfsstack(int v1){
    vis[v1]=true;
    for(auto i:v[v1])
    if(!vis[i])dfsstack(i);
    s.push(v1);
}
void get_transpose(){
   for(int i=0;i<n;i++){
       for(int j=0;j<v[i].size();j++)
       g[v[i][j]].pb(i);
   }
}
void dfsUtil(int e){
    vis[e]=true;
    cout<<e<<" ";
    for(auto i:g[e]){
        if(!vis[i])dfsUtil(i);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
       //int n,m,a,b;
       cin>>n>>m;
       memset(vis,false,sizeof(vis));
       for(int i=0;i<m;i++)cin>>a>>b,v[a].pb(b);
       for(int i=0;i<n;i++)
       if(!vis[i])
       dfsstack(i);
      /* while(!s.empty()){
           cout<<s.top()<<endl;
           s.pop();
       }*/
       get_transpose();
     /*  for(int i=0;i<n;i++){
           cout<<i<<"-";
       for(int j=0;j<v[i].size();j++)
       cout<<v[i][j]<<" ";
       cout<<endl;
       }*/
       memset(vis,false,sizeof(vis));
       while(!s.empty()){
           int r=s.top();
           s.pop();
           if(!vis[r]){
               vis[r]=true;
           dfsUtil(r);
           scc++;
           cout<<endl;
       }
    }
    cout<<"Total connected components is--"<<scc<<endl;
}
}
       
