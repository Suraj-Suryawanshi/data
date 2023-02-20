#include<iostream>
using namespace std;

  int front = -1;
   int rear = -1;
int enqueue(int arr[],int value,int size)
{
	if(rear == -1 && front == -1)
    {
    	rear = 0;
    	front = 0;
	}
	else if(rear == front-1 || front == 0 && rear == size-1)
	{
		cout << "Queue is full"<<endl;
		return 0;
	}
	else if(rear == size-1 && front !=0)
	{
		rear = 0;
	}
	else
	{
		rear++;
	}
//    cout <<"Front value " <<front<<endl;	
//	cout <<"Rear value " <<rear<<endl;	
        cout << "Value Inserted:- "<<value<<endl;
        arr[rear] = value;
    
}

int dequeue(int arr[],int value,int size){
//	cout <<"Front value " <<front<<endl;	
//	cout <<"Rear value " <<rear<<endl;
	if((rear == -1 && front == -1) )
	{
		cout << "Queue is empty"<<endl;
		return 0;
	}
	else if(front == size-1 && rear == 0)
	{
		cout << "You have deleted the last element in the queue " << arr[rear]<<endl;
		rear = -1;
		front = -1;
		return 0;
	}
	else if(front == rear)
	{
		cout << "You have deleted2 the last element in the queue " << arr[front]<<endl;
		rear = -1;
		front = -1;
		return 0;
	}
	else if(front == size && rear != 0)
	{
		front = 0;
	}

	cout << "Deleted element is "<<arr[front]<<endl;
     front++;
}

int main()
{
   int size;
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
               enqueue(arr,value,size);
               break;
           }
        case 2:
            {
               dequeue(arr,value,size);

            break;
            }
        case 3:
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
// cout << "rear is "<<rear<<endl;
// cout << "front is "<<front<<endl;
            break;
        }
        case 4:
        	{
        		break;
			}
           
    }
   }while(a!=4);
}
