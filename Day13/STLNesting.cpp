#include<iostream>
#include<map>
#include<vector>
#include<iterator>
#include<set>

using namespace std;

int main(){
/*
    map<pair<int,int>,int> m; //pair is key and int is val

    pair<int,int> p1,p2;
    p1= {1,2};
    p2 = {2,3};
    cout<<(p1>p2); //directly compare two pair, first comapre first pair val

    map<set<int,int>,int> s;
   set<int,int> s1,s2;
    s1= {1,2};
    s2 = {2,3};
    cout<<(p1>p2); //directly compare two sets, first comapre firs elemt pair val
    */

   map<pair<string,string>,vector<int>>m;
   int n;
   cin>>n;

   for(int i =0;i<n;i++){
       string fn , ln;
       int ct;
       cin>>fn>>ln>>ct;
       for(int j =0;j<ct;j++){
           int x;
           cin>>x;

           m[{fn,ln}].push_back(x);

       }
   }

   for (auto &pr:m){
       auto &full_name = pr.first;
       auto &list = pr.second;
       cout<<full_name.first<<" "<<full_name.second<<" "<<endl;
       cout<<list.size()<<endl;
       for(auto &element:list)
       {
           cout<<element<<" ";
       }
   }

return 0;
}