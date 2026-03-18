#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        queue <TreeNode*,int>q;
        q.push(pair{root,0});
        while(!q.empty()){
            if(res.size()<=q.front().second) res.push_back(q.front().first->val);
            
        }
    }