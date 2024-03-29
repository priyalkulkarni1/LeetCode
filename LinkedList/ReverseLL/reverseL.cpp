/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        if((head == NULL))
            return head;
        
        ListNode* previous = NULL;
        ListNode* current = head;
        
        while(current != NULL)
        {
            ListNode* temp = current->next;
            current->next = previous;
            previous = current;
            current = temp; 
        }
        
        return (previous); 
        
    }
};
