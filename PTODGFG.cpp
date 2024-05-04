class Solution
{
    public:
    // function should print the nodes at k distance from root
    void rec(struct Node *root, int k,vector<int>&ans){
        if(root == NULL) return;
        if(k==0){
            ans.push_back(root->data);

        }
        rec(root-> left ,k-1,ans);
        rec(root->right,k-1,ans)
    }
    vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      vetor<int> ans;
      rec(root,k,ans);
      return ans;

    }
};