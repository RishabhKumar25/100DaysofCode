#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next =NULL;
    }
};

class queue{
    node* front;
    node* back;

    public:
    queue(){
        front=NULL;
        back = NULL;

    }

    void enqueue(int x){

        node*n = new node(x);

        if(front == NULL){
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;

    }

    void dequeue(){
        if(front==NULL){
            cout<<"Queue is empty";
            return;
        }

        node* todelete = front;
        front = front->next;

        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"No element";
            return -1;
        }

        return front->data;
    }

    bool empty(){
        if(front == NULL){
            return true;
        }
        return false;
    }
};
int main(){

    queue q;
    q.enqueue(1);
    q.enqueue(2);
    cout<<q.peek();
    q.dequeue();
   
return 0;
}