#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int>v,int target){
  int mid,s,e;
  int n = v.size();
  s = 0;
  e = n-1;

  while(s<=e){
      mid = (s+e)/2;


  if(v[mid]==target){
    return true;
  }else if(v[mid]>target){
    s = mid+1;

  }else{
    e = mid-1;
  }
  }

  return false;
}

int main(){
  vector<int> v;
  int n,x;
  cout<<"Enter number of elements : ";
  cin>>n;

  for(int i =0;i<n;i++){
    cin>>x;
    v.push_back(x);
  }


cout<<binarySearch(v,5);

return 0;
}