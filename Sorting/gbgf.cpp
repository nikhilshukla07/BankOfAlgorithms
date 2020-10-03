#include<bits/stdc++.h>
using namespace std;
int main()
{	long long T=1;
	while(T--){
	long long n;
	cin>>n;
	string s;
	cin>>s;
	set<char>st;
	vector<long long>fre;
	for(long long i=0;i<n;i++)
	{
		st.insert(s[i]);
		long long j=i;
		long long count=0;
		while(j<n && s[j]==s[i])
		{
			count++;
			j++;
		}
		if(count>0)
		{
			i=i+count-1;
			fre.push_back(count);
		}
	}
	long long d=st.size();
	
	vector<long long>pre(fre.size());
	pre[0]=fre[0];
	long long i;
	for(i=1;i<fre.size();i++)
	{
		pre[i]=fre[i]+pre[i-1];
	}
	long long cnt=d-2;
	long long ans=1000000000;
	if(cnt>0)
	for(i=1;i<=pre.size()-1-cnt;i++)
	{
		ans=min(ans,pre[i+cnt-1]-pre[i-1]);
	}

	if(d<=2)
	{
		cout<<d<<"\n";
	}
	else
	{
		cout<<ans+2<<"\n";
	}
	}
}
