#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<double,double>p1, pair<double,double>p2) 
{ 
    double r1 = p1.first / p1.second; 
    double r2 = p2.first / p2.second; 
    return r1 > r2; 
} 
double fractional_knapsack(vector<pair<double,double> >&objects,double W,long long n)
{
	double cur=0;
	double final=0;
	for(int i=0;i<n;i++)
	{
		if(cur+(objects[i].second)<=W)
		{
			final+=(objects[i].first);
			cur+=objects[i].second;
		}
		else
		{
			double remain=W-cur;
			double value=objects[i].first*(remain/objects[i].second);
			final+=value;
			break;
		}
	}
	return final;
}
int main()
{
	vector<pair<double,double> >objects;
	long long n;
	double W;
	cin>>n>>W;
	for(int i=0;i<n;i++)
	{
		double weight,value;
		cin>>value;
		cin>>weight;
		objects.push_back({value,weight});
	}
	sort(objects.begin(),objects.end(),cmp);	
	cout<<fractional_knapsack(objects,W,n)<<"\n";
}
