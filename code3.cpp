#include<bits/stdc++.h>
using namespace std; 
long long int mod=1000000007;
long long int mod2=998244353;
<<<<<<< HEAD
long long int p=1;
=======
long long int temp=1;
>>>>>>> 9b444fa (Change)
//#define MAX 10000
//vector<int> stree(MAX,0);
//vector<int> lazy(MAX,0);
//vector<pair<int,pair<int,int> > > edges(1e5+1);
//vector<bool> ap(1000,false);
//class comp{
//	public:
//	bool operator()(pair<int,string> a,pair<int,string> b){
//	if(a.first<b.first)
//	return true;
//	if(a.first==b.first){
//		return a.second>b.second;
//	}
//	return false;
//}
//};
//void buildtree(vector<int> arr,int low,int high,int index){
//	if(low>high)
//	return;
//	if(low==high){
//		stree[index]=arr[low];
//		return;
//	}
//	int mid=low+high;
//	mid=mid/2;
//	buildtree(arr,low,mid,2*index+1);
//	buildtree(arr,mid+1,high,2*index+2);
//	stree[index]=stree[2*index+1]+stree[2*index+2];
//}
//void update(int low,int high,int left,int right,int value,int index){
//	if(lazy[index]!=0){
//		stree[index]+=(high-low+1)*lazy[index];
//		if(low!=high){
//			lazy[2*index+1]+=lazy[index];
//			lazy[2*index+2]+=lazy[index];
//		}
//		lazy[index]=0;
//	}
//	if(low>right||high<left||low>high)
//	return;
//	if(low>=left&&right>=high){
//		stree[index]+=(high-low+1)*value;
//		if(low!=high){
//			lazy[2*index+1]+=value;
//			lazy[2*index+2]+=value;
//		}
//		return;
//	}
//	int mid=(low+high)/2;
//	update(low,mid,left,right,value,2*index+1);
//	update(mid+1,high,left,right,value,2*index+2);
//	stree[index]=stree[2*index+1]+stree[2*index+2];
//}
//int sum(int low,int high,int left,int right,int index){
//	if(lazy[index]!=0){
//		stree[index]+=(high-low+1)*lazy[index];
//		if(low!=high){
//			lazy[2*index+1]+=lazy[index];
//			lazy[2*index+2]+=lazy[index];
//		}
//		lazy[index]=0;
//	}
//	if(low>right||high<left||low>high)
//	return 0;
//	if(low>=left&&right>=high){
//		return stree[index];
//	}
//	int mid=(low+high)/2;
//	return sum(low,mid,left,right,2*index+1)+sum(mid+1,high,left,right,2*index+2);
//}
//long long int power(long long  int x,long long int y,long long int p){  
//    long long int res = 1;     
//    x = x % p;
//    if (x == 0) return 0;
//    while (y > 0)  {  
//        if (y & 1)  
//        res=(res*x)%p;  
//        y=y>>1;
//        x=(x*x)%p;  
//    }  
//    return res;  
//}  
//long long int gcdExtended(long long int a,long long int b, long long int *x,long long  int *y) { 
//	if(a==0){ 
//	*x = 0,*y = 1; 
//	return b; 
//	} 
//    long long int x1, y1;  
//	long long int gcd = gcdExtended(b%a, a, &x1, &y1); 
//	*x = y1 - (b/a) * x1; 
//	*y = x1; 
//    return gcd; 
//}  
//long long int modInverse( long long int b,long long int m){ 
//	long long int x, y; 
//	long long int g = gcdExtended(b, m, &x, &y); 
//	if (g != 1) 
//		return -1; 
//	return (x%m + m) % m; 
//}  
// C++ program to find modular inverse of a under modulo m
// This program works only if m is prime.
//long long int  power(long long int   x,long long int   y,long long int   m)
//{
//	if (y == 0)
//		return 1;
//	int p = power(x, y / 2, m) % m;
//	p = (p * p) % m;
//
//	return (y % 2 == 0) ? p : (x * p) % m;
//}
//long long int   gcd(long long int a,long long int b)
//{
//	if (a == 0)
//		return b;
//	return gcd(b % a, a);
//}
//long long int   modInverse(long long int   a,long long  int m)
//{
//	//long long int   g = gcd(a, m);
//	return ((power(a, m - 2, m)%m)*(1%m))%m;
//}
//long long modDivide(long long int a,long long int b,long long int m){ 
//	a = power(10,a,m); 
//	long long int inv = modInverse(b, m); 
//	return (inv*a)%m;
//} 
//bool comp(pair<pair<long long int,long long int>,long long int> &a,pair<pair<long long int,long long int>,long long int> &b){
//	if(a.first.second<b.first.second)
//	return true;
//	return false;
//}
//void dfs(int source,vector<vector<pair<int,int> > > &graph,vector<bool> &vis,int &count,vector<int>&dt,vector<int>&at){
//	vis[source]=true;
//	at[source]= ++count;
//	for(int i=0;i<graph[source].size();i++){
//		if(!vis[graph[source][i].first]){
//			dfs(graph[source][i].first,graph,vis,count,dt,at);
//		}
//	}
//	dt[source]= ++count;
//}
//void dijsktra(vector<vector<pair<int,int> > >&graph,int v,int e){
//	priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > >q;
//	vector<int> dist(v,INT_MAX);
//	q.push({0,0});
//	dist[0]=0;
//	while(!q.empty()){
//		int u=q.top().first;
//		int dis=q.top().second;
//		q.pop();
//		if(dist[u]<dis){
//			continue;
//		}
//		for(int i=0;i<graph[u].size();i++){
//			int g=graph[u][i].first;
//			int f=graph[u][i].second;
//			if(dist[g]>dis+f){
//				dist[g]=dis+f;
//				q.push({g,dist[g]});
//			}
//		}
//	}
//	for(int i=0;i<v;i++){
//		cout<<dist[i]<<" ";
//	}
//}
//int find(vector<pair<int,int> >&par,int x){
//	if(par[x].first==-1)
//	return x;
//	return find(par,par[x].first);
//}
//void Union(vector<pair<int,int> >&par,int x,int y){
//	int root1=find(par,x);
//	int root2=find(par,y);
//	if(par[root1].second>par[root2].second){
//		par[root2].first=root1;
//	}
//	else if(par[root2].second>par[root1].second){
//		par[root1].first=root2;
//	}
//	else{
//		par[root2].first=root1;
//		par[root1].second++;
//	}
//}
//void kruskalmst(vector<vector<pair<int,int> > >&graph,int v,int e){
//	vector<pair<int,pair<int,int> > > res;
//	vector<int> par(v+1,-1);
//	//sort(edges.begin(),edges.end(),compare);
//	for(int i=0;i<edges.size();i++){
//		int a,b,c;
//		a=edges[i].first;
//		b=edges[i].second.first;
//		if(!Union(par,a,b)){
//			res.push_back(edges[i]);
//		}
//	}
//	for(int i=0;i<res.size();i++){
//		cout<<res[i].first<<" "<<res[i].second.first<<" "<<res[i].second.second<<"\n";
//	}
//}
//void primmst(int v,vector<vector<pair<int,int> > > &graph,vector<bool> &vis){
//vector<int> par(v,-1);
//vector<int> dist(v,INT_MAX);
//	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
//	dist[0]=0;
//	par[0]=-1;
//	pq.push({0,0});
//	vector<bool> mstset(v,false);
//	while(!pq.empty()){
//		int u=pq.top().second;
//		pq.pop();
//		mstset[u]=true;
//		for(int i=0;i<ques[u].size();i++){
//			int v=ques[u][i].first;
//			int dis=ques[u][i].second;
//			if(dist[v]>dis&&mstset[v]==false){
//				dist[v]=dis;
//				par[v]=u;
//				pq.push({dis,v});
//			}
//		}
//	}
//	for(int i=1;i<v;i++){
//		cout<<i<<" "<<par[i]<<" "<<dist[i]<<" \n";
//	}
//}
//void bridge(vector<vector<int>> &gr,int s,vector<bool> &vis,vector<int> &low,vector<int> &dis,int par,vector<vector<int>> &ans){
//        vis[s]=true;
//        count++;
//        low[s]=count;
//        dis[s]=count;
//        for(int v:gr[s]){
//            if(v==par){
//                continue;
//            }
//            if(!vis[v]){
//                bridge(gr,v,vis,low,dis,s,ans);
//                low[s]=min(low[s],low[v]);
//                if(dis[s]<low[v]){
//                    ans.push_back({s,v});
//                }
//            }
//            else{
//                low[s]=min(low[s],dis[v]);
//            }
//        }
//}
//void toposort(vector<vector<pair<int,int> > >&graph,int source,vector<bool> &vis,vector<int> &ind,vector<int> ans){
//	vector<int> copy=ind;
//	int flag=0;
//	for(int i=0;i<v;i++){
//		if(ind[i]==0){
//			ans.push_back(v);
//			ind[i]--;
//			flag++;
//			for(int j=0;j<graph[i].size();j++){
//				int g=graph[i][j].first;
//				ind[g]--;
//			}
//			ind=copy;
//		}
//	}
//	if(flag==0){
//		for(int i=0;i<ans.size();i++){
//			cout<<ans[i]<<" ";
//		}
//	}
//	
//}
//void graphquestion(){
//	int v,e;
//	cin>>v>>e;//number of vertices and edges
//	vector<vector<pair<int,int> > > graph(v);
//	vector<bool> vis(v,false);
//	vector<int> dt(v,0);
//	vector<int> at(v,0);
//	vector<int> ind(v,0);
//	vector<int> outd(v,0);
//	vector<pair<int,int> > par(v,-1);
//	for(int i=0;i<e;i++){
//		int a,b,w;
//		cin>>a>>b>>w;
//		graph[a].push_back({b,w});
//		graph[b].push_back({a,w});
//		edges.push_back({a,{b,w}});
//	}
//	int count=0;
//	dfs(0,graph,vis,count,dt,at);
//}
//void calprime(){
//	 vector<bool> prime(1000002,true);
//	 for(int i=2;i<=1000001;i++){
//    	if(prime[i]==false){
//    		continue;
//		}
//		for(int p=2*i;p<=1000001;p+=i){
//			prime[p]=false;
//		}
//	}
//}
//void primeFactors(map<long long int,long long int> &mp,set<long long int> &st,long long int n) 
//{ 
//    while (n % 2 == 0) 
//    { 
//       st.insert(2);
//        mp[2]++; 
//        n = n/2; 
//    } 
//    for (long long int i = 3; i <= sqrt(n); i = i + 2) 
//    { 
//        while (n % i == 0) 
//        { 
//            st.insert(i);
//            mp[i]++; 
//            n = n/i; 
//        } 
//    } 
//    
//    if (n > 2) {
//	st.insert(n);
//       mp[n]++; }
//} 
int main(){
    long long int t=1;
     cin>>t;
    while(t--){
         long long int n;
         
		 
	}
	return 0;
}
/*Rough 
  


*/

