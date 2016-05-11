/*
 * Name        : lab_7.cpp
 * Author      : Nick Lopez
 * Description : Working with File I/O
 */
#include "lab_7.h"

// CODE HERE -- FUNCTION DEFINITION FOR ProcessFile()


bool ProcessFile(string filename)
{
    ifstream my_file;
    my_file.open("lab_7_input.txt");
    string output;
    if (filename == "lab_7_input.txt")
    {
        while (!my_file.eof())
        {
            my_file >> output;
            
            if (output == "10")
            {
                OnTen();
            }
            else if (output == "20")
            {
                OnTwenty();
            }
            else if (output == "30")
            {
                OnThirty();
            }
            else if (output == "40")
            {
                OnForty();
            }
            else if (output == "50")
            {
                OnFifty();
            }
            else
            {
                OnError();
            }
            
        }
         my_file.close();
        return true;
    }
    else
    {
         my_file.close();
        return false;
    }
    
}
void ProcessArguments(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++)
    {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }
}
