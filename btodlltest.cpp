{
    if (root == NULL)
        return root;
 
    
    if (root->left != NULL)
    {
        
        node* left = bintree2listUtil(root->left);
        while(left->right!=NULL)
            left=left->right;
        left->right = root;
        root->left = left;
    }
 
    
    if (root->right!=NULL)
    {
        
        node* right = bintree2listUtil(root->right);
        while(right->left!=NULL)
            right = right->left);
        right->left = root;
        root->right = right;
    }
 
    return root;
}
