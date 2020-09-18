#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &A,int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;
	vector<int>p1,p2;
	for(int i=p;i<=q;i++)
	{
		p1.push_back(A[i]);
	}
	for(int i=q+1;i<=r;i++)
	{
		p2.push_back(A[i]);
	}
	int i=0,j=0,k=p;
	while(i<n1 && j<n2)
	{
		if(p1[i]<=p2[j])
		{
			A[k]=p1[i];
			i++;
		}
		else if(p1[i]>p2[j])
		{
			A[k]=p2[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		A[k]=p1[i];
		i++;
		k++;
	}
	
	while(j<n2)
	{
		A[k]=p2[j];
		j++;
		k++;
	}
}
void mergesort(vector<int> &A,int p,int q)
{
	if(p<q){
		int mid=p+(q-p)/2;
		mergesort(A,p,mid);
		mergesort(A,mid+1,q);
		merge(A,p,mid,q);
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	cin>>arr[i];	
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
