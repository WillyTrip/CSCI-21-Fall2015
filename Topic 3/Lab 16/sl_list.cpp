#include "sl_list.h"
#include <iostream>
void SLList::InsertHead(int contents)
{
    SLNode *new_node = new SLNode(contents);
    new_node->set_next_node(head_);
    head_ = new_node;
    size_++;
}

void SLList::RemoveHead()
{
    if (head_!= NULL)
    {
        SLNode *temp = head_;//create *temp that points at head
        //point head to next node
        head_=head_->next_node();
        
        //delete *temp
        delete temp;
        temp = NULL;
        size_--;
    }
    
}

void SLList::Clear()
{
    SLNode *temp = head_;
    
    while (head_ != NULL)
    {
        RemoveHead();
    }
    
    temp = NULL;
    head_ = NULL;
}

unsigned int SLList::size() const
{
    return size_;
}

string SLList::ToString() const
{

    SLNode *print = head_;
    stringstream ss;
    ss.str();
    string list;
    const char* separator = "";
    if (head_!= NULL)
    {
        while (print != NULL)
        {
            ss << separator << print->contents();
            print = print->next_node();
            separator = ", ";
        }
        list = ss.str();
        return list;
    }
    else if (head_ == NULL)
    {
        return "";
    }
}