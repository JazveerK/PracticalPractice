#include "bst.h"

int main()
{
    bst object;
    object.build(); 	//builds a BST
    object.display();	//displays a BST

    node* root = object.getRoot();
    if (root->left != NULL) {
     node* result = object.findPredecessor(root->left);
     cout << result->data << endl;
    }
    else
      cout << root->data << endl; 



    object.display();	//displays again after!
   
    return 0;
}
