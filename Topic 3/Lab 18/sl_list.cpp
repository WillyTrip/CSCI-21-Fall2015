#include "sl_list.h"

void SLList::InsertHead(int new_head)
{
    SLNode *new_node = new SLNode(new_head);
    new_node->set_next_node(head_);
    head_ = new_node;
    size_++;
    if (tail_ == NULL)
    {
        tail_ = head_;
    }
}

void SLList::InsertTail(int new_tail)
{
    if(tail_ != NULL)
    {
        SLNode *temp = new SLNode(new_tail);
        tail_ -> set_next_node(temp);
        tail_ = temp;
        tail_ -> set_next_node(NULL);
        size_++;
    }
    else if(tail_ == NULL)
    {
        SLNode *temp = new SLNode(new_tail);
        tail_ = temp;
        tail_ -> set_next_node(NULL);
        head_ = tail_;
        size_++;
    }
}

void SLList::Insert(int new_node)
{
    SLNode *temp = new SLNode(new_node);
    SLNode *iterator = head_;
    SLNode *iterator2 = NULL;
    unsigned int original_size = size_;
    
    if (iterator == NULL)
    {
        InsertHead(new_node);
    }
    while (iterator != NULL && original_size == size_)
    {
        if ((iterator -> contents()) >= (temp -> contents()))
        {
            if (iterator2 == NULL)
            {
                InsertHead(new_node);
            }
            else 
            {
                iterator2 -> set_next_node(temp);
                temp -> set_next_node(iterator);
                size_++;
            }
        }
        else if ((iterator -> contents()) < (temp -> contents()))
        {
            if ((iterator -> next_node()) == NULL)
            {
                InsertTail(new_node);
            }
            iterator2 = iterator;
            iterator = iterator -> next_node();
        }
    }
}

bool SLList::RemoveFirstOccurence(int remove_node)
{
    SLNode *temp = NULL;
    SLNode *iterator = head_;
    SLNode *iterator2 = NULL;
    
    while (iterator != NULL)
    {
        if((iterator -> contents()) == remove_node)
        {
            if (iterator2 == NULL)
            {
                RemoveHead();
                return true; 
            }
            else
            {
                if ((iterator -> next_node()) == NULL)
                {
                    RemoveTail();
                    return true;
                }
                else 
                {
                    temp = iterator;
                    iterator = iterator -> next_node();
                    iterator2 -> set_next_node(iterator);
                    delete temp;
                    temp = NULL;
                    size_--; 
                    return true;
                }
            }
        }
        
        else
        {
            iterator2 = iterator;
            iterator = iterator -> next_node();
        }
    }
    return false;
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
        temp = NULL;//handle tail?
        size_--;
    }
    if (head_ == NULL)
    {
        tail_ ==NULL;
    }
}

void SLList::RemoveTail()
{
    if (head_ != NULL)
    {
        if (head_ -> next_node() == NULL)
        {
            RemoveHead();
        }
        else 
        {
            SLNode *temp = NULL;
            SLNode *temp2 = head_;
            while (temp2 -> next_node() != NULL)
            {
                temp = temp2;
                temp2 = temp2 -> next_node();
            }
            temp -> set_next_node(NULL);
            tail_ = temp;
            delete temp2;
            temp = NULL;
            temp2 = NULL;
            size_--;
        }
    }
}

int SLList::GetHead() const
{
    if (head_ == NULL)
    {
        return 0;
    }
    else 
    {
        return head_->contents();
    }
}

int SLList::GetTail() const
{
    if (tail_ == NULL)
    {
        return 0;
    }
    else
    {
        return tail_->contents();
    }
}

void SLList::Clear()
{
    while (head_ != NULL)
    {
        RemoveHead();
    }
    head_ = NULL;
    tail_ = NULL;
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
    if (head_ == NULL)
    {
        return "";
    }
    else if (head_ != NULL)
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
}