// Nikhil Shukla, MMMUT Gorakhpur
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define V vector
#define pb push_back
#define all x x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tc ll t; cin>>t; while(t--)
#define tc1 ll tt=1; while(tt--)
#define fir first
#define sec second
#define mod 1000000007
#define out1(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define debug() cout<<"I am in\n";
#define Vll vector<long long>
#define FOR(i,x,n) for(ll i=x;i<n;i++)
#define RFOR(i,x,n) for(ll i=x;i>=n;i--)
#define maxn (1<<20)+3//////////////////////////////////////////////////////////////////
//Road to expert : 13 October,2020
vector<string> subString(string s,ll n)
{
	ll i,j,k;
	vector<string>allSubString;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			string temp;
			for(k=j;k<j+i;k++)
			{
				temp.pb(s[k]);
			}
			allSubString.pb(temp);
		}
	}
	return allSubString;
}
int main()
{
    fast()
    ll T;
    cin>>T;
    while(T--)
    {	
    	string s;
    	cin>>s;
    	vector<string>allSubString=subString(s,s.length());
    	for(ll i=0;i<allSubString.size();i++)
    	{
    		cout<<allSubString[i]<<"\n";
		}
    }      
	return 0;
}
