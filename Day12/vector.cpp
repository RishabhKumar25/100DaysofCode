#include<iostream>
#include<vector>
using namespace std;

    //vectors are nothing but dynamic array


int main(){

    /*syntax to declare vector

    vector<dtype> name
    vector<int> v(5) //size 5 initilaise 0
    vector<int> v(5,3) //size 5 all value 3
    v.push_back(5) //push at last  o(1)
    v.pop_back() //pop from end o(1)

    */
    vector<int> v; 


    //taking user input
    int n = 5;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);     //push at last
    }

    //printing vector

    for(int i =0;i<v.size();i++)   //v.size()-> o(1)
    {
        cout<<v[i];
    }


//copying a vector
vector<int> v2 = v; //o(n)

/*function accepting vector

void func(vector <int> v){}

//use & for pass by reference

void func(vector <int> &v){}

calling vector func
func(v)


*/

// we can also make vector of strings


// vector of pairs

vector<pair<int,int>> vp; 

/*initialising
vector<pair<int,int>> vp = {{1,2},{2,3}}; 
*/


//inputting vector of pairs

for(int i =0;i<vp.size();i++){
   int x,y;
   cin>>x>>y;
   vp.push_back({x,y});
   //or use make_pair
}

//printing vector of pairs

for(int i =0;i<vp.size();i++){
    cout<<vp[i].first<<" "<<vp[i].second<<" ";
}


//array of vectors
vector <int> va[3]; //3 vectots created (array of vectors size 0) //number of rows fixed ,columns vary
//taking input each vector
for(int i =0;i<3;i++){
    int n;
    cin>>n;
    for(int j =0;j<n;j++){
        int x;
        cin>>x;
        va[i].push_back(x);
    }
}

for(int i =0;i<3;i++)
{
    cout<<v[i]; 
}

//if there is a function of printing call : v[i]

vector <vector<int>> vv;

//taking input of vectors of vectors
for(int i =0;i<3;i++){
    int n;
    cin>>n;
    vector<int> temp;
    for(int j =0;j<n;j++){
        int x;
        cin>>x;
        temp.push_back(x);
    }

    vv.push_back(temp);
}



   
return 0;
}