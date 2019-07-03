class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int i= 0;
        int j = (s.size() )-1;
        char temp;
        
        //cout<<"i"<<i<<endl;
        //cout<<"j"<<j<<endl;
        
        while(i <= j)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            //cout<<"i"<<i<<endl;
            //cout<<"j"<<j<<endl;
            i++;
            j--;
        }
        
        
    }
};
