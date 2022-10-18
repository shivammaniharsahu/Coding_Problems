/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    class BST {
      public:
      int isBST;
      int mx,mn,sum;
      BST(int k,int m_x,int m_n,int s) {
          isBST=k;
          mx = m_x;
          mn = m_n;
          sum = s;
      }
    };
    int ans=0;
    BST find(TreeNode* root) {
        if(root==NULL) return BST(1,INT_MIN,INT_MAX,0); 
        BST lft = find(root->left);
        BST rgt = find(root->right);  
        
        if(lft.isBST && rgt.isBST && root->val>lft.mx && root->val<rgt.mn) {
            
                int currBstMx = max(root->val,max(lft.mx,rgt.mx));
                int currBstMn = min(root->val,min(lft.mn,rgt.mn));
                int currBstSum = root->val + lft.sum + rgt.sum;
           
                ans=max(ans,currBstSum);
                return  BST(1,currBstMx,currBstMn,currBstSum); 
        }
        else return  BST(0,1,1,1);
    }
    int maxSumBST(TreeNode* root) {
        find(root);
        return ans;
    }
};
