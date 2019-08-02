class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> match;
        
        for(int i =0;i<s.length();i++)
        {
            if( (s[i]=='(') || (s[i]=='{')|| (s[i]=='[') )
            {
                match.push(s[i]);
            }
            
            if(s[i]== ')')
            {
                if(match.empty())
                    return false;
                
                if(match.top() == '(')
                    match.pop();
                else
                    return false;
            }
            
            if(s[i]== '}')
            {
                if(match.empty())
                    return false;
                
                if(match.top() == '{')
                    match.pop();
                else
                    return false;
            }
            
            if(s[i]== ']')
            {
                if(match.empty())
                    return false;
                
                if(match.top() == '[')
                    match.pop();
                else
                    return false;
            }
            
        }
        
        if(match.empty())
            return true;
        else
            return false;
        
    }
};
