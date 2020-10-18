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
#define maxn (1<<20)+3
#define trace(x) cout<<#x<<" "<<x<<"\n";
#define trace2(x,y) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<"\n";
#define trace3(x,y,z) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<"\n";
//////////////////////////////////////////////////////////////////
//Road to expert : 13 October,2020
string sequence(string s,ll binary,ll len)
{
	string sub;
	for(ll i=0;i<len;i++)
	{
		if(binary&(1<<i))
		{
			sub+=s[i];
			trace(i);
		}	
	}
	return sub;	
}
vector<string> subSequences(string s,ll n)
{
	ll i,j,k;
	vector<string>seq;
	ll len=n;
	ll limit=pow(2,len);
	for(i=1;i<=limit-1;i++)
	{
		string sub=sequence(s,i,n);
		seq.pb(sub);
	}
	return seq;
}
//T(n) : O(len)*lengthOfBinaryString
int main()
{
    fast()
    ll T;
    cin>>T;
    while(T--)
    {	
    	string s;
    	cin>>s;
    	vector<string>allSubSeq=subSequences(s,s.length());
    	for(ll i=0;i<allSubSeq.size();i++)
    	{
    		cout<<allSubSeq[i]<<"\n";
		}
    }      
	return 0;
}
