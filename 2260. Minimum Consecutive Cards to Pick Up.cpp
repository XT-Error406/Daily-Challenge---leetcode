


// Approach 1 --->Accpeted

class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
           
         int ways=INT_MAX;
        
         unordered_map<int,int>m;
        
        for(int i=0; i<cards.size(); i++){
            
            if(m.find(cards[i])!=m.end() && !m.empty()){
                
                ways=min( ways , i-m[cards[i]]+1);
            }
            
            m[cards[i]]=i;
        }
 
        // if(ways==INT_MAX)return -1;
        // return ways;
        
        
         return ways == INT_MAX ? -1 : ways;
       
    }
};






//  ----> B.F --TLE

class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
        vector<int>ans;
           
        for(int i=0;i<cards.size()-1;i++){
          int temp =cards[i];
            
            for(int j=i+1;j<cards.size();j++){
                
               if(cards[j]==cards[i]){
                  
                 ans.push_back(j-i+1);
                   break;
               }
               
             
            }
        
        }
        
        if(ans.size()==0)
        {
            return -1;
        }
        
       int mini=INT_MAX;
       
          for(int i=0;i<ans.size();i++){
              mini=min(mini,ans[i]);
          }
        return mini;
        
     
    }
};
