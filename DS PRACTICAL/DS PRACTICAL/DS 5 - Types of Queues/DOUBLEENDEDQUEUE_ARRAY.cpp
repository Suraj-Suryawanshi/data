#include<iostream>
 using namespace std;
 int size;
 int front = -1;
 int rear = -1;
void insertFront(int arr[],int value,int size) {
if (front == rear+1 || front == 0 && rear == size-1) {
 cout << "Deque is full" << endl;
 return;
 }
 if (front == -1) {
 front = 0;
 rear = 0;
 } else if (front == 0) {
 front = size-1;
 } else {
 front--;
 }
 arr[front] = value;
 }
 void insertRear(int arr[],int value,int size) {
 if (front == rear+1 || front == 0 && rear == size-1) {
 cout << "Deque is full" << endl;
 return;
 }
 if (front == -1) {
 front = 0;
 rear = 0;
 } else if (rear == size-1) {
 rear = 0;
 } else {
 rear++;
 }
 arr[rear] = value;
 }
 int deleteFront(int arr[],int size) {
 if (front == -1) {
 cout << "Deque is empty" << endl;
 return -1;
}
 int value = arr[front];
 if (front == rear) {
 front = -1;
 rear = -1;
 } else if (front == size-1) {
 front = 0;
 } else {
 front++;
 }
 cout << "Value deleted is:- "<<value<<endl;
 return 0;
 }
 int deleteRear(int arr[],int size) {
 if (front == -1) {
 cout << "Deque is empty" << endl;
 return -1;
 }
 int value = arr[rear];
 if (front == rear) {
 front = -1;
 rear = -1;
 } else if (rear == 0) {
 rear = size-1;
 } else {
 rear--;
 }
 cout << "Value deleted is:- "<<value<<endl;
 return 0;
 }
 
 void display(int arr[],int size)
 {
int r = rear;
int f = front;
 if(r != -1 && r != -1)
 {
 if(f < r)
 { 
 for(int j = f; j <= r; j++)
 {
 cout << arr[j]<< " ";
 }
 }
 if(f > r)
 {
 for(int k = f; k < size; k++)
 {
 
 cout << arr[k]<< " ";
 }
 for(int l = 0; l <= r; l++)
 {
 
 cout << arr[l]<< " ";
 }
 }
}
else
{
cout << "Queue is empty"<<endl;
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
 cout << "1. Insert from front "<<endl;
 cout << "2. Insert from rear "<<endl;
 cout << "3. Delete from front "<<endl;
 cout << "4. Delete from rear "<<endl;
 cout << "5. Display"<<endl;
 cout << "6. Exit"<<endl;
 cout << endl;
 
 do{
 cout << "Enter your choice "<<endl;
 cin >> a;
 switch(a)
 {
 case 1:
 {
 cin >> value;
 insertFront(arr,value,size);
 break;
 }
 case 2:
 {
 cin >> value;
 insertRear(arr,value,size);
 break;
 }
 case 3:
 {
 deleteFront(arr,size);
break;
 }
 case 4:
 {
 deleteRear(arr,size);
 break;
 }
 case 5:
 {
 display(arr,size);
 
 break;
}
 case 6:
 {
 break;
}
default: cout<<"Invalid choice"<<endl;
 
 }
 }while(a!=6);
 
}

