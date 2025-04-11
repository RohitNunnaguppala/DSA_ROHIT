int findmin_max(node* root){
    while(root==nullptr){
        return {-1,-1};
    }

    node* temp=root;
    int min_val=INT_MAX;
    while(temp!=nullptr){
        min_val=min(min_val,temp->data);
        temp=temp->left;
    }

    temp=root;
    int max_val=INT_MIN;
    while(temp!=nullptr){
        max_val=max(max_val,temp->data);
        temp=temp->right;
    }
    return {min_val,max_val};
} 