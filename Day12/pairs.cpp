#include<iostream>
#include<vector>
using namespace std;

int main(){

//declaring a pair pair<dtype,dtype> name
    pair<int,int> p; 

//initialisings a pair

                        
    p = make_pair(2,4);         //second method to initialise :  p = {2,4};

/*method to take input in par from user
    cin>>p.first;
    cin>>p.second;
*/

//printing pair values
    cout<<p.first<<" "<<p.second; 

//copy 

    pair<int,int>p1 = p;   
    //pair<int,int>&p1 = p; copying a pair by reference


 // relation of two array using pair

    int a [] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};

    for(int i =0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second;
    }




    

};