#include <iostream>
#include <string>

using namespace std;

template <class t>
class Box
{
    t contents;
    
    public:
        
        Box();
        Box(t newContents) : contents(newContents)
        {}
        
        void setContents(t newContents)
        {
            contents = newContents;
        }
        
        t getContents()
        {
            return contents;
        }
        
        friend ostream& operator <<(ostream &out, const Box &stuff)
        {
            out << stuff.contents;
            return out;
        }
        

};

        template <class T>
        T Sum(T array[], unsigned int size)
        {
            T sum = T();
            
            for (int i = 0; i < size; i++)
            {
                sum+=array[i];
            }
            
            return sum;
        }
