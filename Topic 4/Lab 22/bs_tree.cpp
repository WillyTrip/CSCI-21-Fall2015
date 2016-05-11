#include "bs_tree.h"

bool BSTree::Insert(int contents, BSTNode*& temp_root)
{
    if (contents == temp_root)
    {
        return false;
    }
    if (temp_root == NULL)
    {
        BSTNode *new_node = new BSTNode(contents);
        temp_root = new_node;
        size_++;
        return true;
    }
    else
    {
        if (contents < temp_root->contents_)
        {
            return Insert(contents, temp_root -> set_left_child(contents));
        }
        else if (contents > temp_root->contents_)
        {
            return Insert(contents, temp_root -> set_right_child(contents));
        }
    }
}

void BSTree::Clear(BSTNode*& temp_root)
{
    if (temp_root != NULL)
    {
        Clear(temp_root_ -> left_child_);
        Clear(temp_root_ -> right_child_);
        delete temp_root
        size --;
    }
}

string BSTree::InOrder(BSTNode*& temp_root)
{
    stringstream ss; 
    ss.str();
    string InOrder;
    
    if (temp_root != NULL)
    {
        InOrder(temp_root -> left_child_);
        ss << temp_root -> contents_ << " ";
        InOrder(temp_root -> right_child_);
    }
    InOrder = ss.str();
    return InOrder;
}

bool BSTree::Insert(int stuff)
{
    Insert(stuff, root_);
}

void BSTree::Clear()
{
    Clear();
}

unsigned int BSTree::size() const
{
    return size_;
}

string BSTree::InOrder()
{
    InOrder(temp)
}