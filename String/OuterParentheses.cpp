class Solution {
public:
    string removeOuterParentheses(string S) 
    {
        int count = 0;
        string ans= "";
        
        
        
        for (int i = 0; i <= S.length() ;i++)
        {
             if(S[i] == '(') 
             {
                if(count != 0)
                    ans = ans + S[i];                
                count++;
                continue;
            }
            else if(S[i] == ')') 
            {
                count --;
                
                if(count != 0)
                    ans = ans + S[i];
                continue;
            }
            
            
               
        }
         
        return ans;
        
    }
};
