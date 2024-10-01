
bool isidentical(node* root){
    if(r1==nullptr && r2==nullptr){
        retur true;
    }
    if(r1!=nullptr && r2==nullptr){
        retur false;
    }
    if(r1==nullptr && r2!=nullptr){
        retur false;
    }

    bool left=isidentical(r1->left,r2->left);
    bool right=isidentical(r2->right,r2->right);

    bool value=r1->data==r2->data;

    if(left &&right &&value){
        return result;
    }
    else{
        return false;
    }
}