#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int>s1;
    stack<int>s2;

    public:
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty() && s2.empty()){

            cout<<"Queue is empty";
            return -1;

        }

        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int topval = s2.top();
        s2.pop();
        return topval;
    }

    bool empty(){
        if(s1.empty() && s2.empty()){
            return true;
        }

        return false;
    }
};
int main(){

    queue q;
   
return 0;
}