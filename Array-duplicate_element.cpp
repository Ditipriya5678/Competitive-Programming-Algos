#include<iostream>
using namespace std;

int main()
{
	int i, j, n, count=0;
	cout<<"Input no of elements to be stored in the array: ";
	cin>>n;
	int a[n];
	
	cout<<"Enter elements in the array: "<<"\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i]; //input array elements
	}
	
	for (i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
    		if(a[i] == a[j])
    		{
    			count++;
				break;
			}
		}
	}
	
	cout<<"Total number of duplicate elements found in the array is: "<<count<<"\n";

	return 0;
}
