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

signed main()
{
    fast_io;
    int n;cin>>n;
    vi v(n);
    f0(i,n){
    	cin>>v[i];
    }
    int x;cin>>x;
    int l=0,h=1;
    while(v[h]<x){
    	l=h;
    	h=2*h;
    }
    cout<<l<<" "<<h<<endl;
    while(l<h){
    	int mid=l+(h-l)/2;
    	if(v[mid]==x){
    		cout<<mid<<endl;
    		break;
    	}
    	if(v[mid]<x){
    		l=mid+1;
    	}
    	else{
    		h=mid-1;
    	}
    }




}