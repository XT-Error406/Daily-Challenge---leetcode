

class Solution {
public:
   int miniset(vector<int>& arr){
      int n = arr.size();
      unordered_map<int,int>freq;
      
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
           }
       
       multiset<int,greater<int>>m;
       
       for(auto i: freq){
           
           m.insert(i.second);
       }
       int count=0; int ans=0;
       for(auto it=m.begin();ans*2<n;it++){
           
           ans+= *it;
           count++;
       }
        return count;
   }
    
   
   
  //  ----> Aprroach 2
       
       
    int minSetSize(vector<int>& arr) {

    int n = arr.size();
        
      vector<int>freq(100005);     
      // given 10^5 o(1)  S.P
        
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        
     sort(freq.rbegin(),freq.rend()); 
        
       int ans=0;
        
       for(int i=0;i<n;i++){
           
            ans+=freq[i];
           
            if(ans>=n/2) return(i+1);
        }
       return n;
        
    }
};
