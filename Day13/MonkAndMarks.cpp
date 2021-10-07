#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<iterator>
using namespace std;
int main(){

    map<int,multiset<string>>marks_map;
    int n;
    cin>>n;

    for(int i =0;i<n;i++)
    {
        int marks;
        string name;
        cin>>name >> marks;
        marks_map[marks].insert(name);
       //marks_map[-1* marks].insert(name);
    }

    auto cur_it = --marks_map.end();
    while(true)
    {
        auto &students = (*cur_it).second;
        auto marks = (*cur_it).first;
        for(auto student : students)
        {
            cout<<student<<" "<<marks<<endl;
        }

        if(cur_it == marks_map.begin())
        break;
        cur_it--;
    }
   

return 0;
}