#include "bst_node.h"

void BSTNode::set_contents(int contents)
{
    contents_ = contents;
}

int BSTNode::contents() const
{
    return contents_;
}

int& BSTNode::contents()
{
    return contents_;
}

void BSTNode::set_left_child(BSTNode* left_child)
{
    left_child_ = left_child;
}

void BSTNode::set_right_child(BSTNode* right_child)
{
    right_child_ = right_child;
}

BSTNode* BSTNode::left_child() const
{
    return right_child_;
}

BSTNode*& BSTNode::left_child()
{
    return left_child_;
}

BSTNode* BSTNode::right_child() const
{
    return right_child_;
}

BSTNode*& BSTNode::right_child()
{
    return right_child_;
}