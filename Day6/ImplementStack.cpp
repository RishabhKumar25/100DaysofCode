/*

Stack is a linear data structure. It follows LIFO (Last in First Out) rule.
For the array-based implementation of a stack, the push and pop operations take constant time, i.e. O(1).
There are some basic operations that allow us to perform different actions on a stack.

Push: Add an element to the top of a stack
Pop: Remove an element from the top of a stack
IsEmpty: Check if the stack is empty
IsFull: Check if the stack is full
Peek: Get the value of the top element without removing it


*/

#include<iostream>
#include<stdlib.h>
using namespace std;

#define SIZE 5;
class stack_class{

    int stack[5];
    int top;

    public :
    
    void push(int);
    void pop();
    void show();
    bool isEmpty();
    bool isFull();

    stack_class(){
    top =-1;
}
};

bool stack_class :: isEmpty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}

bool stack_class :: isFull(){
    if(top == 4){
        return true;
    }else{
        return false;
    }

    

}

void stack_class :: push(int n ){
    if(isFull()){
        cout<<"Stack Overflow\n";
    }else{
         top++;
    stack[top] =n;

    }
   

}

void stack_class :: pop(){

    if(isEmpty()){
        cout<<"Stack Underflow\n";
    }else{
    int temp = stack[top];
    cout<<"Popped Item Is : "<<temp;
    top--;
    }
}

void stack_class :: show(){

    for(int i =top;i>-1;i--){
        cout<<stack[i]<<endl;;
    }
}

int main(){
    stack_class obj;
    int choice;

    do{

        cout<<"\n Choose an action to perform....press 0 to exit";
        cout<<"\n 1. isEmpty()";
        cout<<"\n 2. isFull()";
        cout<<"\n 3. Push()";
        cout<<"\n 4. Pop()";
        cout<<"\n 5. Show()";
        cin>>choice;

        switch(choice){
            case 0 :
            cout<<"Exiting....\n";
            break;

            case 1 :
            if(obj.isEmpty()){
                cout<<"Stack Is Empty \n";
            }else{
                cout<<"Stack Is not Empty \n";
            }
            break;

            case 2 :
              if(obj.isFull()){
                cout<<"Stack Is Full \n";
            }else{
                cout<<"Stack Is not Full \n";
            }
            break;

            case 3 : 
            int n;
            cout<<"Enter Element : \n";
            cin>>n;
            obj.push(n);
            break;

            case 4 :
            obj.pop();
            break;

            case 5 :
            obj.show();
            break;

            default :
            cout<<"Please choose valid option \n";

        }







    }while(choice !=0);


}
