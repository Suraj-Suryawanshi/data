#include<iostream>
using namespace std;
void hashing(int arr[],int size, int value)
{
int index = value%size;
 do{
 
 if(index == size-1 && arr[index]!= -1)
 {
 index = 0;
 }
 if(arr[index]== -1 )
 {
// arr[index] = value;
// break;
 }
 else
 {
 cout << "It already has element "<<endl;
 cout <<endl;
index++;
 }
 }while(arr[index] != -1);
 if(arr[index] == -1)
 {
 arr[index] = value;
 cout << "Value added"<<endl;
 }
}
int main()
{
int size;
cout << "Enter the size of the array"<<endl;
cin >> size;
int arr[size];
int choice;
for(int i = 0; i<size;i++)
{
arr[i] = -1;
}
do{
int count =0;
cout << "1. Enter elements"<<endl;
cout << "2. Display"<<endl;
cout << "3. Exit"<<endl;
cout << "Enter your choice "<<endl;
cin >> choice;
cout << endl;
 int value;
switch(choice)
{
case 1:
for(int i = 0; i<size;i++)
 {
 if(arr[i] == -1)
 {
 count++;
 }
 }
if(count > 0)
{
 cout << "Enter your value "<<endl;
 cin >> value;
 hashing(arr,size,value);
 }
 else
 {
 cout << "Array is full" <<endl;
}
break;
case 2:
cout << "Elements in the Array are "<<endl;
 for(int i = 0; i<size;i++)
{
cout << arr[i] << " ";
}
cout << endl;
break;
case 3:
break;
}
}while(choice!=3);
}

