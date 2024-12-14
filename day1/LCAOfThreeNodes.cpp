/**********************************************************
    Following is the Binary Tree Node class structure.

    template <typename T>
    class BinaryTreeNode {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

***********************************************************/
/**********************************************************
 
---

### **Approach to Solve**
1. Traverse the tree recursively starting from the root.
2. At each node:
   - If the current node matches any of the given nodes (`N1`, `N2`, `N3`), return that node.
   - Recursively check the left and right subtrees for the nodes.
3. If both left and right subtrees return non-null:
   - The current node is the LCA.
4. If only one subtree returns non-null:
   - Propagate the non-null result upwards.

This method works efficiently due to its \(O(N)\) time complexity, which is optimal for large trees.


***********************************************************/

BinaryTreeNode<int>* lcaOfThreeNodes(BinaryTreeNode<int>* root, int node1, int node2, int node3) {
   // base case
   if(!root) return root;
   if(root->data == node1 || root->data == node2 || root->data == node3) return root;

   // for left node 
   BinaryTreeNode<int>* left = lcaOfThreeNodes( root->left,  node1,  node2, node3) ;
   BinaryTreeNode<int>* right = lcaOfThreeNodes( root->right,  node1,  node2, node3) ;

   // if both are aviable then return root
   if(left && right) return root;
   return left ? left : right;

}

