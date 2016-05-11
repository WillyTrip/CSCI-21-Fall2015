/*
 * Name        : lab_12.cpp
 * Author      : FILL IN
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "lab_14.h"

// CODE HERE -- FUNCTION DEFINITIONS
int* MakeDynoIntArray(unsigned int size)
{
    int *my_array;
    if (my_array == NULL)
    {
        throw "NULL ARRAY REFERENCE";
    }
    else
    {
        my_array = new int[size];
        return my_array;
    }
    
}

int Sum(int* the_array, unsigned int array_size)
{
    //int *the_array;
    if (the_array == NULL)
    {
        throw "NULL ARRAY REFERENCE";
    }
    else
    {

        int sum = 0;
    
        for (int i = 0; i < array_size; i++)
        {
            sum += the_array[i];
        }
        return sum;
    }
}

int Max(int* the_array, unsigned int array_size)
{
    //int *the_array;
    int max;
    //int i = 0;
    if (the_array == NULL)
    {
        throw "NULL ARRAY REFERENCE";
    }
    
    else
    {
        max = the_array[0];
        for (int i = 0; i < array_size; i++)
        {
            if (the_array[i] > max)
            {
                max = the_array[i];
                
            }
        }
    }
    return max;
}

int Min(int* the_array, unsigned int array_size)
{
    int min;
    //int i = 0;
    min = the_array[0];
    if (the_array == NULL)
    {
        throw "NULL ARRAY REFERENCE";
    }
    else
    {
        for (int i = 0; i < array_size; i++)
        {
            if (the_array[i] < min)
            {
                min = the_array[i];
                
            }
        }
    }
    return min;
}

