#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int B[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>B[i];
	}
	int  flag=0;
	for(int i=1;i<=n;i++)
	{
		if(i<B[i] || (i%B[i]!=0))
		{
			flag=1;
			break;
		}
	}
	if(!flag)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	}
	return 0;
}
