#include<iostream>
#include<vector>
using namespace std;

//this feature is available in c++ 11 above

int main(){

/*vectors  syntax

for(dtype varname : vectname)
{}

for(int value : v){
    cout<<value<<" "; //copy value from vectors into value
}
//getting actual value using reference

for(int &value : v){
    cout<<value;
}
*/

/*

vector pf pairs

for(pair<int,int> &value:v_p){
    cout<<value.first<<" "<<value.second;
}


*/

// Auto Keyword

/*

auto a =1; //it automatcally determines data type no need to specify

 // for pairs

 for(auto &value : v_p){
     cout<<value.first<<" "<<value.second;

     //v_p is name of pair
 }


*/



   
return 0;
}