/*
  More advanced approach to searching for an element in an array 
  Works only for sorted arrays
  Time complexity-O(log(n)),where n is no. of elements */  
#include <iostream>
#include <stdio.h>
using namespace std;
int arr[100005];
int binary_search(int arr[],int key,int l,int r,int n)  
{
	int mid;
	if(l<=r)
	{
		mid=(l+r)/2;
		if(arr[mid]==key)
			return mid;
		else if(arr[mid]<key)
			return binary_search(arr,key,mid+1,r,n);
		else if(arr[mid]>key)
			 return binary_search(arr,key,l,mid-1,n);
	}
	return -1;
}
int main()
{
	int n,i,key,t,l,r; // n-no. of elements,i-index,key-element being searched,t-no.of testcases, l- left ,r-right
	freopen("test_case","r",stdin);
	cin >> t;
	while(t--)
	{
		cin >> n;
	for(i=0;i<n;i++)
		cin >> arr[i];
	cin >> key;
	l=0;
	r=n-1;
	int found=binary_search(arr,key,l,r,n);
	if(found>0)
		cout << "Element found at index " << found << endl;
	else
		cout << "Element not found "<<endl;
	}
	return 0;
}