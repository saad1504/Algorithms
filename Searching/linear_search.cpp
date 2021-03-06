/*Simplest approach for searching for an element in an array
  Works for sorted and unsorted arrays
  Time complexity-O(n),where n is no. of elements */
#include <iostream>
#include <stdio.h>
using namespace std;
int arr[100005];
int linear_search(int arr[],int key,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
			return i;
	}
	return -1;
}
int main()
{
	int n,i,key,t; // n-no. of elements,i-index,key-element being searched,t-no.of testcases
	freopen("test_case","r",stdin);
	cin >> t;
	while(t--)
	{
		cin >> n;
	for(i=0;i<n;i++)
		cin >> arr[i];
	cin >> key;
	int found=linear_search(arr,key,n);
	if(found>0)
		cout << "Element found at index " << found << endl;
	else
		cout << "Element not found "<<endl;
	}
	return 0;
}

