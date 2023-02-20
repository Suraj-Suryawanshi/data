#include<iostream>
 using namespace std;
 int size;
 int front = -1;
 int rear = -1;
int enqueue1(int arr[],int value,int size)
{
if(rear == -1 && front == -1)
{
rear = 0;
front = 0;
}
else if(rear == size-1)
{
cout << "Queue is full"<<endl;
return 0;
}
else{
rear++;
}
// cout << "Rear value is "<<rear<<endl;
// cout << "Front value is "<<front<<endl;
cout <<"Value Inserted:- "<<value<<endl;
arr[rear] = value;
}
int dequeue1(int arr[],int value,int size)
{
if(rear == -1 && front == -1)
{
cout << "Queue is empty" << endl;
}
else if(front == rear-1)
{
cout <<"Last element deleted is "<<arr[rear]<<endl;
rear =-1;
front = -1;
}
else
{
 cout << "Deleted element is "<<arr[front]<<endl;
 front++;
}
}
int main()
{
 
 cout << "Enter the size of the array"<<endl;
 cin >> size;
 int arr[size];
 int value;
 int a;
 int i;
 for( i=0;i<=size-1;i++){
 arr[i]=-1;
 }
 cout << "1. Enter element in queue "<<endl;
 cout << "2. Delete element from queue "<<endl;
 cout << "3. Display"<<endl;
 cout << "4. Exit"<<endl;
 cout << endl;
 
 do{
 cout << "Enter your choice "<<endl;
 cin >> a;
switch(a)
 {
 case 1:
 {
 cin >> value;
 enqueue1(arr,value,size);
 break;
 }
 case 2:
 {
 dequeue1(arr,value,size);
 break;
 }
 case 3:
 {
// cout << "Rear value is "<<rear<<endl;
// cout << "Front value is "<<front<<endl;
 if(rear != -1 && front != -1)
 {
 for(int i = front;i<=rear;i++)
 {
 cout<< arr[i] << " ";
 }
}
else
{
cout << "Queue is empty"<<endl;
}
 
 break;
}
 case 4:
 {
 break;
}
default: cout<<"Invalid choice"<<endl;
 
 }
}while(a!=4);
 }
