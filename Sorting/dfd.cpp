#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	vector<string>list(n);
	map<char,int>mp;
	mp['a']=2;
	mp['b']=2;
	mp['c']=2;
	mp['d']=3;
	mp['e']=3;
	mp['f']=3;
	mp['g']=4;
	mp['h']=4;
	mp['i']=4;
	mp['j']=5;
	mp['k']=5;
	mp['l']=5;
	mp['m']=6;
	mp['n']=6;
	mp['o']=6;
	mp['p']=7;
	mp['q']=7;
	mp['r']=7;
	mp['s']=7;
	mp['t']=8;
	mp['u']=8;
	mp['v']=8;
	mp['w']=9;
	mp['x']=9;
	mp['y']=9;
	mp['z']=9;
	map<int,int>numlist;

	for(ll i=0;i<n;i++)
	{
		cin>>list[i];
		int num=0;
		for(int j=0;j<list[i].length();j++)
		{
			num=(num*10+(mp[list[i][j]]));
		}
		numlist[num]++;
	}
	int freq=-1;
	int ans=-1;
	for(auto i:mp)
	{
		if(i.second>freq)
		{
			ans=i.first;
			freq=i.second;	
		}	
	}
	cout<<ans<<"\n";
}
