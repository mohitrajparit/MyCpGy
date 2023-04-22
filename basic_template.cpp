#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define YES cout << "YES" << endl;
#define NO  cout << "NO" << endl;
#define fo(i,n) for(i=0;i<n;i++)
#define srt(a) sort(a.begin(),a.end())
#define lb lower_bound
#define ub upper_bound

bool prime(int a) { 
    if (a==1) return 0; 
    for(int i=2;i<sqrt(a);i++){
        if(a%i==0)return 0;
    }
    return 1;
}
ll powa(ll a, ll b, ll m = mod){
	if (b == 0)
		return 1ll;
	else if (b == 1)
		return a;
	else{
		ll x = powa(a, b/2, m);
		x *= x;
		if (b%2)
		{
			x *= a;
		}
		return x;
	}
}
int gcd(int a, int b){
    int result = min(a, b); 
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }result--;
    }
    return result;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
	   
	}
	return 0;
}
