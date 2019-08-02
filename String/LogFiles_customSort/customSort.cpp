class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) 
    {
        vector<string> answer;
        vector<string> digit_logs;
        map<string,string> letter_logs;
        
        for(int i = 0;i<logs.size();i++)
        {
            //cout<<logs[i][0]<<endl;
            char identifier;
                        
            //find location of first space
            size_t j = logs[i].find(" ");
            
            
            if(j ==string::npos)
                continue;
            
            //cout<<"first space found at location "<<int(j)<<endl;
            //cout<<"next char after space "<<logs[i][j+1]<<endl;
            //check if the location after space is digit
            //if digit push log to digit log
            if(isdigit(logs[i][j+1]) != 0)
            {
                //cout<<"is digit"<<logs[i][j+1]<<endl;
                digit_logs.push_back(logs[i]);
                
            }
             
           //if location after space is not digit it is letter log 
            else
            {
                string temp_logs = logs[i];
                string temp;
                int k = 0;
                //extract the identifier into a temp string
                while(k < int(j))
                {
                    temp = temp + temp_logs[0];
                    temp_logs.erase (temp_logs.begin());
                    k++;
                }
                cout<<" temp value "<<temp<<endl;
                cout<<"temp logs value "<<temp_logs<<endl;
                temp_logs = temp_logs+ temp;
                //built a map with key as (letter log+identifier)
                //value as (original form of log)
                //cout<<"key pushed "<<temp_logs<<endl;
                //cout<<"value pushed "<<logs[i]<<endl;
                
                letter_logs.insert( std::pair<string,string>(temp_logs,logs[i]) );
            }
            
            
        }
        
        //push all the values of sorted keys into the answer
        for (auto it=letter_logs.begin(); it!=letter_logs.end(); ++it)
        {
            answer.push_back(it->second);
            //cout<<"letter log pushed "<<it->second<<endl;
        }
     
        
        //push all digits logs in given order into the answer
        for(int i = 0;i<digit_logs.size();i++)
        {
            answer.push_back(digit_logs[i]);
            //cout<<"digit log pushed "<<digit_logs[i]<<endl;
        }
            
        
   
        
        return answer;
        
    }
};
