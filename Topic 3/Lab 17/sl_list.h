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
        
        void InsertHead(int);
        void InsertTail(int);
        
        void RemoveHead();
        void RemoveTail();
        
        void Clear();
        
        int GetHead() const;
        int GetTail() const;
        
        unsigned int size() const;
        
        string ToString() const;
}
;
#endif