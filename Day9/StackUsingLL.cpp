#include<iostream>
using namespace std;

class node{
    public:
    int key;
    int data;
    node* next;

    node(){
        key =0;
        data =0;
        next = NULL;
    }

    node(int k,int d){
        key =k;
        data = d;
        next = NULL;
    }
};

class stack{
    public:
    node* top;

    stack(){
        top = NULL;
    }

    bool isEmpty(){
        if(top==NULL){
            return true;
        }
        return false;
    }

    bool checkifNodeExist(node* n){
        node*temp = top;
        bool exist = false;
        while(temp!=NULL){
            if(temp->key==n->key){
                exist = true;
                break;
            }
            temp=temp->next;
        }
        return exist;
    }

    void push(node *n){
        if(top == NULL){
            top =n;
        }else if(checkifNodeExist(n)){
            cout<<"Node already exist with this key \n";

        }
        else{
            node* temp = top;
            top = n;
            n->next = temp;
            cout<<"Push Done";
        }
    }

    node* pop(){
        node* temp = NULL;
        if(isEmpty()){
            cout<<"Stack is empty\n";
            return temp;
        }else{

            temp = top;
            top= top->next;
            return temp;
        }
    }

    node* peek(){
        if(isEmpty()){
            cout<<"Underflow";
            return NULL;
        }else{
            return top;
        }
    }
int count(){
    int count =0;
    node* temp = top;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void display(){

     node* temp = top;
    while(temp!=NULL){
    cout<<temp->key<<","<<temp->data;
        temp=temp->next;
    }

}


};


int main(){

    stack s1;
    int option,position,key,data;

    do{
        cout<<"Choose a option...0 to exit\n";
        cout<<"1. Push()\n";
        cout<<"2. Pop()\n";
        cout<<"3. isEmpty()\n";
        cout<<"4. Peek()\n";
        cout<<"5. count()\n";
        cout<<"6. Display()\n";
        cout<<"7. clear screen()\n";

        cin>>option;

        node* new_node = new node();

        switch(option){
            case 0:
            break;

            case 1:
             cout<<"Enter key and value : \n";
             cin>>key>>data;

             new_node->key = key;
             new_node->data = data;
             s1.push(new_node);
             break;

             case 2:
             new_node = s1.pop();
             cout<<"Top of stack is that popped is : "<<new_node->key<<" , "<<new_node->data;
             delete new_node;
             break;

             case 3:
             if(s1.isEmpty())
             {
                 cout<<"Empty\n";
                 
             }else{
                 cout<<"Not empty\n";
             }
             break;

             case 4 :
             if(s1.isEmpty()){
                 cout<<"Empty\n";
             }else{
             new_node = s1.peek();
             cout<<new_node->data;
             }

             break;

             case 5:
             cout<<s1.count();
             break;

             case 6:
             s1.display();
             break;




        }
    }while(option!=0);
   
return 0;
}