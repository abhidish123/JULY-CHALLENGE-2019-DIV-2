#include<bits/stdc++.h>

#define ll long long int
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define vvi vector<vector<ll>>
#define vi vector<ll>
#define all(a) (a).begin(),(a).end()
#define pii pair<ll,ll>
#define rep(x,n) for(ll i=x;i<n;++i)
#define repd(x,n) for(ll i=x-1;i>=n;--i)
#define repn(x,n) for(ll j=x;j<n;++j)
#define repnd(x,n) for(ll j=x-1;j>=n;--j)
#define endl '\n'
#define M 1000000007
const ll INF = 1ll<<60;

using namespace std;

ll fact(ll n){ ll p=1; rep(1,n+1){ p*=i; } return p; }

bool isprime(ll a){
    if(a==2) {
        return 1;
    }
    if(!(a&1) ) {return 0;}
    for(ll i=3;i*i<=a;i+=2){
        if(a%i==0) {return 0;}
    }
    return 1;
}

ll fast_power(long long base, long long power)  //for(2^100)
{   long long result=1;
    while(power>0) {
        if(power&1) {
            result=(result*base)%M;
        }
        base=(base*base)%M;
        power>>=1;
    }
    return result;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n];
        rep(0,n) cin>>a[i];
        int pos=-1,k=0;
        rep(0,n){
            if(a[i]==1){
                if(pos<0) pos=i;
                else{
                    int d=i-pos;
                    pos=i;
                    if(d<6){
                        k=1;
                        break;
                    }
                }
            }
            if(k==1) break;
        }
        if(k==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }


	return 0;
}

