#ifndef LAB_A
#define LAB_A

#include <stddef.h>

class BSTNode
{
    private:
    
        BSTNode* left_child_;
        BSTNode* right_child_;
        int contents_;
        
    public:
    
        BSTNode()
            : left_child_(NULL), right_child_(NULL), contents_(0)
            {}
            
        BSTNode(int contents)
            : left_child_(NULL), right_child_(NULL), contents_(contents)
            {}
            
        ~BSTNode()
            {}
            
        void set_contents(int contents);
        
        int contents() const;
        int& contents();
        
        void set_left_child(BSTNode* left_child);
        void set_right_child(BSTNode* left_child);
        
        BSTNode* left_child() const;
        BSTNode*& left_child();
        
        BSTNode* right_child() const;
        BSTNode*& right_child();
};

#endif