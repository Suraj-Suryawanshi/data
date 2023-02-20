#include<iostream>
using namespace std;

int getmax(int arr[], int n)
{
	int max = 0;
	for(int i =0 ;i<n;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	
	return max;
}

void countingsort(int arr[],int n, int div)
{
	int output[n];
	int count[10] = {0};
	
	for(int i=0;i <n;i++)
	{
		count[ (arr[i]/div)%10 ]++;
	}
	
	for(int i=1;i<10;i++)
	{
		count[i] +=count[i-1];
	}
	
	for(int i=n-1;i>=0;i--)
	{
		output[count[ (arr[i]/div)%10 ] - 1 ] = arr[i];
		count[ (arr[i]/div)%10 ]--;
	}
	
	for(int i=0;i<n;i++)
	{
		arr[i] = output[i];
	}
}


radixsort(int arr[],int n)
{
   int m = getmax(arr,n);
   
   for(int div = 1;m/div > 0; div=div*10)
   {
   	countingsort(arr,n,div);
   }
   
   cout<<"After Sorting"<<endl;
  for(int i=0;i<n;i++)
  {
  	cout<<arr[i]<<" ";
  }
  cout<<endl;
}




int main()
{
  int arr[] = {6,400,1,9,5,3,2,80};
  
  int len = sizeof(arr)/sizeof(int);
  
  cout<<len<<endl<<endl;
  
  
  cout<<"Before Sorting"<<endl;
  for(int i=0;i<len;i++)
  {
  	cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  radixsort(arr,len);
  
   cout<<"After Sorting"<<endl;
  for(int i=0;i<len;i++)
  {
  	cout<<arr[i]<<" ";
  }
  cout<<endl;
	
	return 0;
	
}


