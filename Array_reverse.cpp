#include<iostream>
using namespace std;

int main()
{
	int i,n;
	cout<<"Enter size of array: "<<"\n";
	cin>>n;
	int a[n];
	cout<<"Enter elements of array: "<<"\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i]; //input array elements
	}
	
	cout<<"The elements are: "<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" "; //print array elements
	}
	
	cout<<"\n";
	cout<<"Array elements in reverse order: "<<"\n";
	for(i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
