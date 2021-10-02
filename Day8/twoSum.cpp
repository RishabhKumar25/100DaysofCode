/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
*/




#include<iostream>
using namespace std;

int main(){

    int arr[]= {2,7,11,15};
    int target =17;

    for(int i=0;i<4;i++)
    {
        for(int j =0;j<4;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<j<<endl;
                return 0;
            }
        }
    }
   
return 0;
}