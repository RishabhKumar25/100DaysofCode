#include<iostream>
#include<map>
#include<iterator>
using namespace std;

//map strores "key - value" data
//in ordered map key stored in sorted order
//it is being internally implemented using red black tree
//non contigous memory allocation
//keys will be unique
//if we make duplicate key then it will replace old value with new value

int main(){

    /*declaring a map

    map<key dtype , value dtype> name

    */

   map<int,string> m;
   m[1]="abc";  //o(log(n))
   m[2] = "cdc";
   m[3] ="gfg";
   m[6]; //o(log(n)) //by default empty string and if value is tring then by default 0


/*
m["abcd"] = "dsrf"; Time complexity = s.size() * log(n)

*/
   //method to insert values
   m.insert({4,"rsr"});
   //iterator pointing to key value pair

   map<int,string> ::iterator it;
   for(it = m.begin();it!=m.end();++it){
       cout<<(*it).first<<" "<<(*it).second<<endl;

   }

   //traversal using auto o(n(log(n)))
   for(auto &val : m){
       cout<<val.first<<" "<<val.second<<endl;
   }

   //if keys are string then alphabetically sorted
   //to get size of map : m.size() size is dynamic
   //accessing a value : o(log(n))

   //finding a value
   auto it = m.find(3);   //return iterator of that value and if value not present then it will return next of end iterator
   cout<<(*it).first<<" "<<(*it).second;

    //erasing a value
    m.erase(3);  //taking key value and will delete that O(log(n))
    auto ite = m.find(5);
    if(ite !=m.end()){
    m.erase(ite); //taking iterator value , can't give that iterator which does not exist means if value not exist then iterator will get at next of end and that doesnot exist so it will be segmentation fault
    }

    // to clear the map
    m.clear();
   
return 0;
}