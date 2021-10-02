#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

//insert at tail
void insertAtTail(node* &head,int val){

    node *n = new node(val);  //constructor node(int val) will be called and assign value
        if(head==NULL){
            head = n;
            return;
        }

    node* temp = head;

    while(temp->next !=NULL){
        temp = temp->next;
    }

    temp->next = n;

}

void insertAtBeginning(node* &head,int val){
    node *n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    n->next = head;
    head = n;
}

//deleting

void deleteAtHead(node* &head){
    node *delNode = head;
    head = head->next;

    delete delNode;
}

void deleteLL(node* &head,int val){

    if(head == NULL){
        return;
    }

    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    node *temp = head;

    while(temp->next->data!=val){
        temp=temp->next;
    }

    node* delNode = temp->next;
    temp->next = temp->next->next; //to delete nth node we have to acces n-1th node and in next of n-1th node just point in to n+1th node
    delete delNode;


}

//displaying

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

//searching

void searching(node *head,int key){

    node *temp = head;
    int flag =0;

    while(temp!=NULL){
        if(temp->data == key){
                flag =1;
              break;
        }

        temp = temp->next;
    }

    if(flag ==1){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not found\n";
    }
}


int main(){

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtBeginning(head,0);
    display(head);
    //searching(head,5);
    //searching(head,2);
   // deleteLL(head,2);
   deleteAtHead(head);
    display(head);

   
return 0;
}