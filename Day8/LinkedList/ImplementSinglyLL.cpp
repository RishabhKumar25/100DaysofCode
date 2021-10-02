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
    searching(head,5);
    searching(head,2);

   
return 0;
}