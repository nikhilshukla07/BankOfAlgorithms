#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(double x) 
{   
  double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
} 
int main()
{
//	cout<<isPerfectSquare(25);
	long long n,m;
	long long i,j;
	cin>>n>>m;
	vector<pair<double,double> >g;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if((i+j)>0)
			g.push_back({i,j});
		}
	}
	vector<pair<int,int> >ans;
	long long sz=g.size();
	for(i=0;i<sz;i++)
	{
		long long flag=0;
		for(j=0;j<sz;j++)
		{
			if(i==j)
			continue;
			
			double x=g[i].first-g[j].first;
			double y=g[i].second-g[j].second;
			double temp=x*x+y*y;
			if(isPerfectSquare(temp)==0){
			cout<<g[i].first<<" "<<g[i].second<<"->"<<g[j].first<<" "<<g[j].second<<" ";
			cout<<isPerfectSquare(temp)<<"\n";
		}
		}
		if(flag==1)
		{
			continue;
		}
		ans.push_back({g[i].first,g[i].second});
	}
	cout<<ans.size()<<"\n";
	for(i=0;i<ans.size();i++)
	{
		cout<<ans[i].first<<" "<<ans[i].second<<"\n";
	}
}
