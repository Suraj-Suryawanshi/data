#include<iostream>    
using namespace std;    
int main()
{
    int n;
    cout<<"Enter Number of elements want to insert in array:\n";
    cin>>n;  
    int arr[n];
    cout<<"Elements in array:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    int counter=1;
    while (counter<n)
    {
        for (int i = 0; i < n-counter; i++)
        {
           if(arr[i]>arr[i+1])
           {
               int temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
           }
        }
        counter++;

        cout<<"Sorting array is:\n";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    
    cout<<"\nSORTED Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}