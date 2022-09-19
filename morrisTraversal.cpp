class Solution {
vector<int> getInorder(Node *root){
vector<int> inorder;
Node * current = root;
while(current!=NULL){
    if(current->left == NULL){
        inorder.push_back(current->data);
        current = current->right;
    }
    else{
        Node *prev = current->left;
        while(prev->right !=NULL && prev->right!=current){
            prev = prev->right;
        }
        if(prev->right == NULL){
            prev->right = current;
            current= current->left;
        }
        else{
            prev->right = NULL;
            inorder.push_back(current->data);
            current = current->right;
        
        }
    
    }
    
    
}
return inorder;

}
    
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
      return getInorder(root); 
    }
};