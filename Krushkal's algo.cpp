/*
     If you can't think of solution think some well known algorithm related to it!
     Always BE COOL!
     Last minute hustle might give you AC
            ---RATNESH KUMAR TIWARY
            **Kruskal's algo for MST**
            **used to find minimum cost to connect all cities**

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
struct pam{
    int a1;
    int b1;
    int w;
};
static bool comp(pam x,pam y){
    if(x.w<y.w)return true;
    return false;
}
int n,m,a,b,scc=0;
stack<int> s;
pam v[1000],g[1000];
int pa[1000];
int find(int x){
    while(pa[x]>0)
    x=pa[x];
    return x;
}
void merge(int x,int y){
    pa[x]=y;
}
int main(){
    int sum=0;
cin>>n>>m;
for(int i=0;i<n;i++)pa[i]=-1;
for(int i=0;i<m;i++)
cin>>v[i].a1>>v[i].b1>>v[i].w;
sort(v,v+m,comp);
for(int i=0;i<m;i++){
    a=find(v[i].a1);
    b=find(v[i].b1);
    if(a!=b){
        sum+=v[i].w;
        merge(a,b);
    }
}
cout<<sum<<endl;
}
