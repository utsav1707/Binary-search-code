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
int pos,cow;
const int N=1e5+10;
int arr[N];
int chk(int dis){
	int cnt=cow;
	int curr=-1;
	for(int i=0;i<pos;i++){
		if(arr[i]-curr>=dis || curr==-1){
			cnt--;
			curr=arr[i];
		}
	}
	return cnt==0;
}
void solve(){
cin>>pos>>cow;
for(int i=0;i<pos;i++){
	cin>>arr[i];
}	
sort(arr,arr+pos);
int l=0,r=1e9;
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
signed main()
{
    fast_io;
    t_case{
    	solve();
    }



}