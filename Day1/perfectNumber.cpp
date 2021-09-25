//Code to find perfect number
// 6 = 1+2+3 so 6 is is perfect number

#include<iostream>
using namespace std;


int main(){

    int n;
    int sum =0;
    cout<<"Enter a number to check for perfect number : "<<endl;
    cin>>n;

    for(int i =1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }

    if(sum/2==n){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a perfect number";
    }

    
   
return 0;
}