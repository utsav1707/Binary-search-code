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
double esp=1e-6;
signed main()
{
    fast_io;
    double x;cin>>x;
    double l=1,r=x;
    while(r-l>esp){
    	double mid=(l+r)/2;
    	if(mid*mid<x){
    		l=mid;
    	}
    	else{
    		r=mid;
    	}
    }
    cout<<setp(l,10)<<endl;
    cout<<setp(r,10)<<endl;




}