#include "sl_node.h"

void SLNode::set_contents(int contents)
{
    contents_ = contents;    
}

void SLNode::set_next_node(SLNode* next_node)
{
    next_node_ = next_node;
}

unsigned int SLNode::contents() const
{
    return contents_;
}

SLNode* SLNode::next_node() const
{
    return next_node_;
}