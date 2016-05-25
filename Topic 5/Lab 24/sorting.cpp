/*
 * Name        : sorting.cpp
 * Author      : FILL IN
 * Description : Working with Insertion and Shell Sort
 */
#include "sorting.h"

// CODE HERE -- FUNCTION DEFINITIONS

void SwapValues(int &value_1, int &value_2)
{
  // DO NOT ALTER THE NEXT 3 LINES!!!
  if (GRADER) {
    cout << value_1 << " " << value_2 << endl;
  }
  // Code SWAP Algorithm Here
  int temp = value_1;
  value_1 = value_2;
  value_2 = temp;

}

int BubbleSort(int the_array[], unsigned int size)
{
    int swapHold = 0;
    int end = size;
    int length = size;
    int pass = 0;
    
    for (int counter = length - 1; counter > 0; counter--)
    {
        for (int index = 0; index < end; index++)
        {
            if (the_array[index] > the_array[index + 1])
            {
                swapHold = the_array[index + 1];
                the_array[index + 1] = the_array[index];
                the_array[index] = swapHold;
            }
        }
        end--;
        pass++;
    }
    return pass;
}

int OptimizedBubbleSort(int the_array[], unsigned int size)
{
    int swapHold = 0;
    int end = size;
    int length = size;
    int swaps = 0;
    int pass = 0;
    
    for (int counter = length - 1; counter > 0; counter--)
    {
        for (int index = 0; index < end; index++)
        {
            if (the_array[index] > the_array[index + 1])
            {
                swapHold = the_array[index + 1];
                the_array[index + 1] = the_array[index];
                the_array[index] = swapHold;
                swaps++;
            }
        }
        end--;
        pass++;
        if (swaps == 0)
        {
            break;
        }
    }
    return pass;
}

int SelectionSort(int the_array[], unsigned int size)
{
    int smallest = 0;
    int smallestIndex = 0;
    int swapHold = 0;
    
    for (int i = 0; i < size; i++)
    {
        smallest = the_array[i];
        int smallestIndex = i;
        
        for (int m = i; m < size; m++)
        {
            if (the_array[m] < smallest)
            {
                smallest = the_array[m];
                smallestIndex = m;
            }
        }
        swapHold = the_array[smallestIndex];
        the_array[smallestIndex] = the_array[i];
        the_array[i] = swapHold;
    }
}

int InsertionSort(int the_array[], unsigned int size)
{
    int j = 0;
    int temp = 0;
    int pass = 0;
    
    for (int i = 1; i < size; i++)
    {
        j = i;
        
        while (j > 0 && the_array[j - 1] > the_array[j])
        {
            temp = the_array[j];
            the_array[j] = the_array[j-1];
            the_array[j-1] = temp;
            j--;
        }
        pass++;
    }
    return pass;
}

int ShellSort(int the_array[], unsigned int size)
{
    int j;
    
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; i++)
        {
            int temp = the_array[i];
            for (j = i; j >= gap && temp < the_array[j - gap]; j -= gap)
            {
                the_array[j] = the_array[j - gap];
            }
            the_array[j] = temp;
        }
    }
}