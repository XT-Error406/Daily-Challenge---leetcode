/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;


 void minSetSize(vector<int>& arr) {
      int n = arr.size();
      unordered_map<int,int>freq;
      
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
           }
           
           for(auto i : freq){
           	
           	cout<<i.first<<"  "<<"value "<<i.second<<endl;
           }
           
           multiset<int,greater<int>>m;
           for(auto n : freq){
            
            m.insert(n.second);
           }
           
          for(auto i : m){
              cout<<i;
          }
           int ans=0;
           int count=0;
           
           for(auto it=m.begin();ans*2<n;it++){
               ans+=*it;
               cout<<" the it"<<*it<<" valur of it"<<*it;
               count++;
           }
           cout<<endl;
           cout<<count<<" "<<ans;
           
        // for(auto i :m){
        //     ans+=i;
        //     count++;
        //     if(ans*2<=n) cout <<" " <<ans<<" "<<count;
        // }
      
    }

int main(){



  vector<int>cards={3,3,3,3,5,5,5,2,2,7};

    minSetSize(cards);
}
