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
    int ele;cin>>ele;
    int pos=-1;
    // int l=0,r=n-1;
    int l=0,h=v.size()-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(v[mid]<=ele){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    // while(l<r){
    // 	int mid=(l+r)/2;
    // 	if(v[mid]==fi){
    // 		pos=mid;
    // 		break;
    // 	}
    // 	else if(v[mid]<fi){
    // 		l=mid+1;
    // 	}
    // 	else{
    // 		r=mid-1;
    // 	}
    // }
    cout<<l<<endl;



}