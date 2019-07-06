#include<bits/stdc++.h>
typedef long long int ll;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
	fastio
	ll tt,n;
	cin>>tt;
	while(tt--){
		cin>>n;
		ll a[n];
		ll sum=0;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
        if(sum%n!=0){
			cout<<"Impossible"<<endl;
        }
        else{
			ll x=sum/n;
			int k=0;
			for(ll i=0;i<n;i++){
				if(a[i]==x){
					k=1;
					cout<<i+1<<endl;
					break;
				}
			}
			if(k==0){
				cout<<"Impossible"<<endl;
			}
        }
	}
}
