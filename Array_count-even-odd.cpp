#include<iostream>
using namespace std;

int main()
{
	int i,size,count_even=0, count_odd=0;
	int a[50];
	cout<<"Enter size of array: ";
	cin>>size;
	
	cout<<"Enter elements of the array: "<<"\n";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	cout<<"The elements of the array are: "<<"\n";
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	
	for(i=0;i<size;i++)
	{
		if(a[i] % 2 == 0)
		{
			count_even = count_even + 1;
		}
		else
		{
			count_odd = count_odd + 1;
		}
	}
	
	cout<<"\n";
	cout<<"No of even elements: "<<count_even<<"\n";
	cout<<"No of odd elements: "<<count_odd;
	return 0;
}
