#ifndef LAB_B
#define LAB_B

#include <stddef.h>
#include <sstream>
#include <string>
#include <string.h>
#include "sl_node.h"

using namespace std;


class SLList
{
    private:
    
        SLNode* head_;
        unsigned int size_;
        
    public:
    
        SLList()
        : head_(NULL), size_(0)
        {}
        
        ~SLList()
        {
            Clear();
        }
        
        void InsertHead(int);
        
        void RemoveHead();
        
        void Clear();
        
        unsigned int size() const;
        
        string ToString() const;
};

#endif