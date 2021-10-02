//floyds / hare and tortoise algo

//detection of cycle and remove it

/*

suppose we have one tortoise and one rabbit.
initially they both are at same position
we will move rabbit by two steps and 
tortoise by one step
we will check if in future they both met at same place
then there is a cycle in linked list


*/



#include<iostream>
using namespace std;

class node{

    public :
    int data;
    node* next;

    node(int val){
        next = NULL;
        data = val;
    }

};


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

void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;

    int count =1;

    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp = temp->next;
        count++;
    }

    temp->next = startNode;
}

bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){

        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow){
            return true;
        }


    }
                return false;


    

   
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

    node *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);

   // makeCycle(head,3);
    cout<<detectCycle;

   // display(head);

    



   
return 0;
}