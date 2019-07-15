class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> answer;
        
        for(int i = left; i<= right; i++)
        {
            int a = i;
            bool failed = false;
            while(a != 0)
            {
                
                int rem = a%10;
                
                if(rem == 0) // some digit has value zero
                {
                    failed = true;
                    break;
                }
                
                if(i%rem != 0) // given num is not divisible by some digit
                {
                    failed = true;
                    break;
                }
                
                a = a/10;
            }
            
            if(failed == false)
                answer.push_back(i);  
        }
        
        return(answer);
        
    }
};
