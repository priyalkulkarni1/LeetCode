class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        
        int small = 0;
        
        vector<int> answer;
        
        for(int i=0; i< A.size();i++)
        {
            A[i]= A[i]* A[i];
            if(A[i] < A[small])
                small = i;
            //cout<<A[i]<<endl;
            
        }
        
        //insert smallest element into 0th pos
        answer.push_back(A[small]);
        
        int j = small-1; //backward pointer
        int k = small+1;// forward pointer
        
        while((j >=0) &&(k<A.size()))
        {
            if(A[j]< A[k])
            {
                answer.push_back(A[j]);
                j--;
            }
            
            else
            {
                answer.push_back(A[k]);
                k++;
            }
        }
        
        if(j>=0) // remaining elements in the back
        {
            while(j>=0)
            {
                answer.push_back(A[j]);
                j--;
            }
        }
        
        if(k<= A.size() -1) //remaining elements in the front 
        {
            while(k< A.size())
            {
                answer.push_back(A[k]);
                k++;
            }
        }
        
        return (answer);
        
    }
};
