/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class linked_list
{
    public:
    ListNode *head,*tail;
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        ListNode *tmp = new ListNode(n);

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    ListNode* gethead()
    {
        return head;
    }
    
    
} ;


class Solution {
public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        
        linked_list(answer);
        
        bool carry_flag = false;
        
        while((l1-> next != NULL)&&(l2->next != NULL)) //both l1 and l2 have vals 
        {
            int sum;
            
            if(carry_flag == true)
                sum = l1->val + l2-> val+1;
            else
                sum = l1->val + l2-> val;
            
            if(sum< 10)
            {
                //cout<<"sum less than 10"<<endl;
                answer.add_node(sum);
                carry_flag = false;
                
            }
            else
            {
                answer.add_node(sum-10);
                carry_flag = true;
            } 
            
            l1 = l1->next;
            l2 = l2->next;
            
        }
        
        
       int sum;
            
            if(carry_flag == true)
                sum = l1->val + l2-> val+1;
            else
                sum = l1->val + l2-> val;
            
            if(sum< 10)
            {
                //cout<<"sum less than 10"<<endl;
                answer.add_node(sum);
                carry_flag = false;
                
            }
            else
            {
                answer.add_node(sum-10);
                carry_flag = true;
            } 
            
            l1 = l1->next;
            l2 = l2->next;
        
        
        while(l1!=NULL)//l2 has no more vals
        {
            int sum;
            
            if(carry_flag == true)
                sum = l1->val +1;
            else
                sum = l1->val;
            
            if(sum< 10)
            {
                //cout<<"sum less than 10"<<endl;
                answer.add_node(sum);
                carry_flag = false;
                
            }
            else
            {
                answer.add_node(sum-10);
                carry_flag = true;
            } 
            
            l1 = l1->next;
        }
        
        
        while(l2!=NULL)//l1 has no more vals
        {
            int sum;
            
            if(carry_flag == true)
                sum = l2-> val+1;
            else
                sum = l2-> val;
            
            if(sum< 10)
            {
                //cout<<"sum less than 10"<<endl;
                answer.add_node(sum);
                carry_flag = false;
                
            }
            else
            {
                answer.add_node(sum-10);
                carry_flag = true;
            } 
            
            l2 = l2->next;
        }
        
        if(carry_flag ==true)
        {
            answer.add_node(1);
        }
        
        return (answer.gethead());
        
        
    }
};
