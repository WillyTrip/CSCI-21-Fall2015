#ifndef LAB_B
#define LAB_B

#include <stddef.h>
#include <sstream>
#include <string>
#include "sl_node.h"

using namespace std;

class SLList
{
    private:
    
        SLNode* head_;
        SLNode* tail_;
        unsigned int size_;
        
    public:
    
        SLList()
        : head_(NULL),tail_(NULL), size_(0)
        {}
        
        ~SLList()
        {
            Clear();
        }
        
        void InsertHead(int new_head);
        void InsertTail(int new_tail);
        
        void RemoveHead();
        void RemoveTail();
        
        void Clear();
        
        int GetHead() const;
        int GetTail() const;
        
        unsigned int size() const;
        
        string ToString() const;
        
        bool RemoveFirstOccurence(int remove_node);
        void Insert(int new_node);
}
;
#endif