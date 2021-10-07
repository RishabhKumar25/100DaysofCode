#include<iostream>
#include<set>
#include<iterator>
using namespace std;

//set of values
//maps jaisa same hai hot hai bas sets me only keys hote hai ...no values
//sorted order
//unique values
//implementation using Red Black Tree

int main(){

    set<string> s;
    //to insert value

    s.insert("abc");    //O(log(n))
    s.insert("xyz");

    //to access a value
    auto it = s.find("abc");  //return the iterator of that elment and if that elment does not exist then will return next to end
    if(it!=s.end())
    {
        cout<<(*it);

    }

    
    //printing values

    for(string value:s){
        cout<<value<<endl;
    }

    for(auto it = s.begin();it!=s.end();++it)
    {
        cout<<(*it)<<endl;
    }

    //to erase a value
    s.erase(it);  //iterator of that elment we can get that using find func
    s.erase("abc");


   
return 0;
}