#include<iostream>
#include<set>
#include<iterator>
using namespace std;


int main(){
    long long ele;
    int t;
    cin>>t;
    int n,k;


    while(t--){
        cin>>n;
        cin>>k;
            multiset<long long> bags;
            for(int i =0;i<n;i++){  //nlogn
                cin>>ele;
                bags.insert(ele);
            }

            long long total_candies = 0;
            for(int i =0;i<k;i++){   //klogn
                auto last_it = (--bags.end());
                int candy_cat = *last_it;
                total_candies += candy_cat;
                bags.erase(last_it);
                bags.insert(candy_cat/2);

            }

            cout<<total_candies<<endl;
        
    }
}
