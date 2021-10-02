#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){
    stack<string> st; //using stl

    for(int i =0;i<s.length();i++){
        string words ="";
        while(s[i]!=' ' && i<s.length()){
            words+=s[i];
            i++;
        }
        st.push(words);

      
    }

      while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }cout<<endl;
}

int main(){


    string s = "I am Rishabh Karn";
    reverseSentence(s);

   
return 0;
}