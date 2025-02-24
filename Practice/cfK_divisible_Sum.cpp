#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n,k;cin>>n>>k;
   ll divi;
   if(n%k==0)
   {
   	divi=n/k;
   }
   else
   {
   	divi=(n/k)+1;
   }
   ll banate_hobe=k*divi;
   //cout<<banate_hobe<<'\n';
   ll le=1;
   ll r=2e9;
   ll final_ans=0;
   while(le<=r)
   {
   	ll mid=le+(r-le)/2;
   	ll ans=mid*n;
   	//cout<<mid<<" "<<ans<<'\n';
   	if(ans==banate_hobe)
   	{
   		final_ans=mid;
   		break;
   	}
   	else if(ans>banate_hobe)
   	{
   		final_ans=mid;
   		r=mid-1;
   	}
   	else
   	{
   		le=mid+1;
   	}
   }
   cout<<final_ans<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;

}

