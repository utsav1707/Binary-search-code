#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define int long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define mod7 1000000007
#define test(t) int t; cin>>t; while(t--)
#define setp(x, y) fixed << setprecision(y) << x
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int n,m;
const int N=1e6+10;
int trees[N];
int chk(int h){
	int tot=0;
	for(int i=0;i<n;i++){
		int milega=trees[i]-h;
		tot+=max(milega,0LL);
	}
	return tot>=m;
}
signed main()
{
    fast_io;
    cin>>n>>m;
    for(int i=0;i<n;i++){
    	cin>>trees[i];
    }
    int l=0,r=1e9+10;
    while(r-l>1){
    	int mid=l+(r-l)/2;
    	if(chk(mid)){
    		l=mid;
    	}
    	else{
    		r=mid-1;
    	}
    }
    if(chk(r)){
    	cout<<r<<endl;
    }
    else{
    	cout<<l<<endl;
    }



}