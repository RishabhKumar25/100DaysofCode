#include<iostream>
using namespace std;

//implementing using array

#define n 20
class queue{
    int* arr;
    int front;
    int back;

    public :
    queue(){
        arr = new int[n];
        front =-1;
        back = -1;
    }

    void enqueue(int x){
        if(back == n-1){
            cout<<"Quueue is full"<<endl;
            return;
        }

        back++;
        arr[back] =x;

        if(front ==-1){
            front++;
        }
    }

    void dequeue(){
        if(front == -1 || front>back){
            cout<<"Queue is empty"<<endl;
            return;
        }

        front++;
    }

    int peek(){

        if(front == -1 || front>back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        return arr[front];

    }

    bool empty(){

         if(front == -1 || front>back){
           
            return true ;
        }

        return false;

    }
};
int main(){

    queue q;

    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);

    cout<<q.peek();
    q.dequeue();
    cout<<q.peek();

   
return 0;
}