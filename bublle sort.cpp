#include<iostream>
using namespace std;
void insrt(int arr[],int s)
{
	for(int i=1;i<s;i++)
{
	int chotu=i;
	while(chotu>=0 && arr[chotu]<arr[chotu-1])
	
{
	int tmp;
	tmp=arr[chotu-1];
	arr[chotu-1]=arr[chotu];
	arr[chotu]=tmp;
	chotu--;
}
}
}


