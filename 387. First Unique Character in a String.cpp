class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        
    for(int i=0;i<s.length();i++){
        
        //int index=s[i]-'a';
        
          arr[s[i]-'a']++;
        
       }
        for(int i=0;i<s.length();i++){
            
          //int index=s[i]-'a';
            
          if(arr[s[i]-'a']==1){
             
            return i;
          }
            
        }
        
       return -1;
    }
};
