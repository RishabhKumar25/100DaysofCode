/*
given N strings , print unique strings 
in lexiographical order with their
frequency
N <= 10^5
|S| <= 100
*/

#include<iostream>
#include<map>
#include<iterator>
using namespace std;


int main(){

    map<string,int> m;
    int n;
    cin>>n;

    for(int i =0;i<n;i++){
        string s;
        cin>>s;
        m[s] = m[s]+1;
        //m[s]++;
    }

    for(auto val : m){
        cout<<val.first<<" "<<val.second<<endl;
    }


    /*

    INPUT : 

8
abc
def
abc
ghj
jkl
ghj
ghj
abc

OUTPUT :

abc 3
def 1
ghj 3
jkl 1

    */
   
return 0;
}