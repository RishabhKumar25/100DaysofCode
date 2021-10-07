#include<iostream>
#include<unordered_set>
#include<iterator>
using namespace std;

//set of values
//unorder maps jaisa same hai hot hai bas unorder sets me only keys hote hai ...no values
//sorted order
//unique values
//implementation using Hash Table
// jo difference map and unorder maps me hota hai wo same difference sets and unorder sets me hota hai
//cant use complex data type like pairs

int main(){

    unordered_set<string> s;
    //to insert value

    s.insert("abc");    //O(1)
    s.insert("xyz");

    //to access a value //O(1)
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


/* 
Multiset

multiset<string> s 

time complexity becoms //log(n)
duplicate values allowed

find value return iterator of first occurence
if we pass it in erase then delete only that occurence
and if we pass that value then delete all occurence
*/