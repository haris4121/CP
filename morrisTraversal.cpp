#include<iostream>
using namespace std;
#include<vector>




vector<int> getInorder(Node *root){
vector<int> inorder;
vector<int> preorder;
Node * current = root;
    while(current!=NULL){
        if(current->left == NULL){
            inorder.push_back(current->data);
            preorder.push_back(current->data;)
            current= current->right;
        }
        else{
            Node *prev = current->left;
            while(prev->right && prev->right != current){
                        prev = prev->right;
            }
            if(prev->right == NULL){
                prev->right = current;
                
                preorder.push_back(current->data);
                current = current->left;
            }
            else{
                prev->right == NULL;
                inorder.push_back(current->val);
                current = current->right;
            }


        }




    }


return inder;

}

int main()
{
    

    return 0;
}