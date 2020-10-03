#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long q;
	cin>>q;
	vector<long long>g(n);
	vector<pair<int,int> >st;
	for(int i=0;i<n;i++)
	cin>>g[i];
	sort(g.begin(),g.end());
	while(q--)
	{
		long long left;
		long long right;
		cin>>left>>right;
		st.push_back({left,right});
	}
	sort(st.begin(),st.end());
	long long count=st[0].second-st[0].first+1;
	for(int i=1;i<st.size();i++)
	{
		if(st[i].second<=st[i-1].second)
		{
			continue;
		}
		else if(st[i].first>st[i-1].second)
		{
			count=count+(st[i].second-st[i].first+1);
		}
		else 
		{
			count=count+(st[i].second-st[i-1].second);
		}
	}
	long long ans=0;
	for(int i=n-1;i>=(n-count);i--)
	ans+=(g[i]);
	cout<<ans<<"\n";
}
