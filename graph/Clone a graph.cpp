/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL)return NULL;
        unordered_map<Node*,Node*>mp;
        mp[node]=new Node(node->val);
        queue<Node*>treeq;
        treeq.push(node);
        while(!treeq.empty()){
            Node* p=treeq.front();
            treeq.pop();
            for(auto i:p->neighbors){
                if(mp.find(i)==mp.end()){mp[i]=new Node(i->val);treeq.push(i);}
                mp[p]->neighbors.push_back(mp[i]);
            }
        }
        return mp[node];
    }
};
