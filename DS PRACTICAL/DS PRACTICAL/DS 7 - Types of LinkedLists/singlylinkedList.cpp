#include<iostream>
using namespace std;

class LinkNode{
    public:
    int data;
    LinkNode* next;

    //constructor
    LinkNode(int data){
        this ->data=data;
        this ->next=NULL;
    }
    
    //destructor
    // ~LinkNode(){
    //     int value= this->data;
    //     //memo free
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next=NULL;
    //     }
    //     cout<<"memory is free for node data value"<<value<<endl;
    // }
};

void insertAtHead(LinkNode* &head, int d){
    
    LinkNode* temp =new LinkNode(d);
    if (head==NULL)
    {
        head=temp;
        LinkNode* temp=head;
        return;
    }
    
    temp->next=head;
    head=temp;
    
}

void insertAtTail(LinkNode* &tail, int d){
    LinkNode* temp= new LinkNode(d);
    tail->next=temp;
    tail=temp;
}

void insertAtMid(LinkNode* &head, LinkNode* tail, int position, int d){
    //inserting at start
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    //inserting at mid i.e taking pointer to the given point
    LinkNode* temp=head;
    int count=1;
    while (count<position-1)
    {
        temp=temp->next;
        count++;
    }

    //inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    LinkNode* insertNode=new LinkNode(d);
    //pointing to the next of the new node
    insertNode->next=temp->next;
    //storing address in previous node of a new node
    temp->next=insertNode;
    
}

void deleteNode(int position, LinkNode* &head){
    //deleting start node
    if(position==1){
        LinkNode* temp=head;
        head=head->next;
        temp->next=NULL;
        //memory free of start node
        delete temp;
    }  
    //deleting from the middle
    else{
        LinkNode* curr=head;
        LinkNode* prev=NULL;
        int count=1;
        while (count<position)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next==NULL;
        delete curr;
        
    }  

    
}

void displayLink(LinkNode* &head){
    LinkNode* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;   
}


int main(){

    // LinkNode* node1 = new LinkNode(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next;

    // LinkNode* head=node1;
    // LinkNode* tail=node1;
    
    LinkNode* head=NULL;
    // insertAtTail(tail,44);
    // insertAtTail(tail,99);
    insertAtHead(head,12);
    insertAtHead(head,15);
    insertAtHead(head,41);
    insertAtHead(head,88);
    displayLink(head);
    deleteNode(2,head);
    // insertAtMid(head,tail,3,333);
    displayLink(head);
    deleteNode(3,head);
    displayLink(head);
}