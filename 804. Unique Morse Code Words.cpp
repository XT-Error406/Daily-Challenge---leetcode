class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
          
        string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
        
       set<string>ans;
                                    //bot dek le soln 
        for(auto i : words){
            
            string temp;        // i = gin ; i= zen; 
            
            for(auto m : i){     // m= g; -->m=i  --> m=n
                
                temp = temp + arr[m-'a'];   
            }
            ans.insert(temp);
        }
          
       return ans.size();
    }
};
