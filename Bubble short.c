#include<iostream>
using namespace std ;
void bubble(int arr[],int l)
{
	cout<<"bubble sort\n";
}
int main()
{
	cout<<"enter size of array\n";
	cin>>r;
	int arr[r];
	if(r>=0 && r<20)	
{
	for(int i=0;i<r;i++)
{
	cin>>arr[i];
}
}
else
{
	cout<<"not valid range";
}
bubble(arr,r);
}
