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
