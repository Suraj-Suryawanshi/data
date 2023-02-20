#include<iostream>
using namespace std;

void shellsort(int arr[], int n)
{
	 
	for(int gap=n/2;gap>0;gap = gap/2)
	{
		
		for(int j = gap;j<n;j++)
		{
			int temp = arr[j];
			int i=0;
			
			for(i=j;i>=gap && arr[i-gap] > temp ; i=i-gap)
			{
				arr[i] = arr[i-gap];
			}
			arr[i] = temp;
			
			
		}
		
		
	}

	
}

int main()
{
  int arr[] = {6,4,1,9,5,3,2,8};
  
  int len = sizeof(arr)/sizeof(int);
  
  cout<<len;
  
  int gap=0;
  
  cout<<"Before Sorting"<<endl;
  for(int i=0;i<len;i++)
  {
  	cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  shellsort(arr,len);
  
   cout<<"After Sorting"<<endl;
  for(int i=0;i<len;i++)
  {
  	cout<<arr[i]<<" ";
  }
  cout<<endl;
	
	return 0;
	
}
