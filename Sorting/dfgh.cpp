#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<string>st(9);
		for(int i=0;i<9;i++)
		{
			cin>>st[i];
		}
		ll i=0,j=0;
		while(i<9 && j<9)
		{
			ll temp=st[i][j]-'0';
			temp=(temp+1)%9;
			st[i][j]=temp+'0';
			i++;
			j++;
		}
		for(i=0;i<9;i++)
		cout<<st[i];
		cout<<"\n";	
	}
}
