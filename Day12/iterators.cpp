#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

//iterators are pointer like structure and they point to container values
int main(){

//.begin() points at first element
//.end() points at next to end element
vector<int> v = {2,3,5,6,7};

vector<int> ::iterator it = v.begin(); //syntax and pointig at begin
cout<< (*it); //printing element at thet pos

for(it = v.begin(); it!=v.end(); ++it){
    cout<<(*it)<<endl;
}
   
   /* difference between it++ and it+1
it++ moves to next iterator (valid)
it + 1 moves at next location 
bcz it stores the memory location
 ye maps and sets me ni chlega bcs they 
 dont have contgious memory location

   */

//iterator for pairs

  vector<pair<int,int>> v_p = {{1,2},{2,3}};

  vector<pair<int,int>> :: iterator itp;

  for(itp = v_p.begin(); itp!=v_p.end();++itp)
  {
   cout<<(*itp).first<<" "<<(*itp).second<<endl;
  }

  //or

  for(itp = v_p.begin(); itp!=v_p.end();++itp)
  {
   cout<<(itp->first)<<" "<<(itp->second);
  }

  
return 0;
}