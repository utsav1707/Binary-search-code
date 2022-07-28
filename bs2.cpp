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
#define t_case int t; cin>>t; while(t--)
#define setp(x, y) fixed << setprecision(y) << x
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
void solve(){
int n;cin>>n;
vi v(n);
f0(i,n){
	cin>>v[i];
}
int l=0,h=n-1;
int x;cin>>x;
while(l<=h){
	int mid=l+(h-l)/2;
	if(v[mid]==x){
		cout<<mid;
		return;
	}
	if(v[mid-1]==x && mid-1>=l){
		cout<<mid-1;
		return;
	}
	if(v[mid+1]==x && mid+1<=h){
		cout<<mid+1;
		return;
	}
	if(v[mid]<x){
		l=mid+2;
	}
	else{
		h=mid-2;
	}
}



}
signed main()
{
    fast_io;
    // t_case{
    	solve();
    // }



}