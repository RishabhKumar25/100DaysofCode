#include<iostream>
using namespace std;
#include<unordered_map>

//no order maintained
//hash table in build implementation
//time complexity
//if order doesnt matter then use unorder map it saves time
//we can't have complex data type in key value pair



int main(){
    unordered_map<int,string> m;

   m[1]="abc";  //o(1) avg TC
   m[2] = "cdc";
   m[3] ="gfg";

   //accessing time complexity : o(1)
//find , erase : O(1)

//rest things are same as map

/*

No unique keys


*/

return 0;
}