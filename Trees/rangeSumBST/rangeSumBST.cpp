/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution {
public:
    int sum = 0;
    int rangeSumBST(TreeNode* root, int L, int R) 
    {
        traverse(root, L, R);
        return sum;
    }
    
    void traverse(TreeNode *current, int &l_val, int &r_val) 
    {
    	if(current == NULL) 
        {
    		return;
		}
		if(current->val >= l_val && current->val <= r_val) 
        {
			sum += current->val;
		}
        if(current->val > l_val )
            traverse(current->left, l_val, r_val);
		
        if(current-> val < r_val)
            traverse(current->right, l_val, r_val);
	}
};
