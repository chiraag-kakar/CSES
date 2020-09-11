#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	ll n;
	cin>>n;
	cout<<n;
	while(n>1)
	{
		if(n%2==0)
			n=n/2;
		else
			n=(n*3)+1;
		cout<<" "<<n;
	}
	return 0;
}
