class Solution {
public:
    string reverseWords(string s) {
        
       int space_index=0;
        int j=0;
        for(int i=0;i<=s.length();i++){
            
            if(s[i]==' ' || s[i]=='\0'){
                space_index=i-1; //  i  if reverse functions 
                while(j<=space_index){
                    swap(s[j],s[space_index]);
                    j++;
                    space_index--;
                                           //reverse(s.begin()+j,s.begin()+space_index);
             }
                j=i+1;
                space_index=i+1;
            }
        
        }
        return s;
    }
    
};
