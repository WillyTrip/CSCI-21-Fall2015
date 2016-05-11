#ifndef LAB_B
#define LAB_B

#include <stddef.h>
#include "bst_node.h"
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

class BSTree
{
    private:
        
        bool Insert(int contents, BSTNode*&);
        
        void Clear(BSTNode*&);
        
        string InOrder(BSTNode*);
        
        BSTNode* root_;
        unsigned int size_;
        
    public:
    
        BSTree()
            :root_(NULL), size_(0)
            {}
            
        ~BSTree()
        {
            Clear();
        }
        
        bool Insert(int stuff);
        
        void Clear();
        
        unsigned int size() const;
        
        string InOrder();
};

#endif