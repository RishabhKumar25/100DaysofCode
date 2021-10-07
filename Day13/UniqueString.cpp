/*

given N strings, print unique strings
in lexiographical order
N<= 10^5
|S| <= 100000


*/

#include<iostream>
#include<set>
#include<iterator>


using namespace std;
int main(){

    set<string> s;
    cout<<"Enter number of strings : ";
    int N;
    cin>>N;

    for(int i =0;i<N;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }

    for(auto value:s)
    {
        cout<<value<<endl;
    }
   
return 0;
}