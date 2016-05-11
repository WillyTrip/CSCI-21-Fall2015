#ifndef LAB_A
#define LAB_A

#include <stddef.h>

class SLNode
{
    private:
        
        SLNode* next_node_;
        unsigned int contents_;
        
    public:
    
        SLNode()
            : next_node_(NULL), contents_(0)
            {}
            
        SLNode(int contents)
            :next_node_(NULL), contents_(contents)
            {}
            
        ~SLNode(){}
        
        void set_contents(int contents);
        unsigned int contents() const;
        
        void set_next_node(SLNode* next_node);
        SLNode* next_node() const;
};

#endif