

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
 head->prev = n;
    }
   

    head=n;
}

void insertAtTail(node* &head,int val){

    if(head == NULL){
        insertAtHead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}
void deletedl(node* &head,int pos){

    if(pos==1){
        deleteAtHead(head);
    }

    node* temp = head;
    /*
    deleting through value
    while(temp->next->data!=val){
        temp = temp->next;
    }
    */

   //deleting through position
   int count =1;
   while(temp!=NULL && count!=pos){
       temp = temp->next;
       count++;
   }

   temp->prev->next = temp->next;
   if(temp->next!=NULL){
   temp->next->prev=temp->prev;
   }
   // node* delNode = temp->next;

/* my logic
    temp->next = temp->next->next;
    temp->next->next->prev = temp;
    */


    delete temp;

}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }

    cout<<endl;
}
int main(){

node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    insertAtHead(head,0);
    display(head);

    deletedl(head,2);
    display(head);






   
return 0;
}