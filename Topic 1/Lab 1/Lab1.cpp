/*
 * Name        : lab_1.cpp
 * Author      : Nick Lopez
 * Date        : 1/27/2016
 * Description : Our First Lab of the Semester!
 */
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
 * Create a program based on the comments below
 * @param none
 * @return none
 */
string checkExperience (char hasExperience) 
{
    return string("Welcome back! Get ready to have fun!");
}

void FirstLab() 
{
  string first_name;

  char z, y, n;

  char programmed_before = z;
  char my_character = z;

  cout << "Hello user! What is your name? " << endl;
  cin >> first_name;
  
  cout << "Nice to meet you, " << first_name << endl;
  cout << "Have you ever programmed before? Press 'y' for yes and 'n' for no." << endl;
  cin >> programmed_before;
  
  if (programmed_before == y)
  {
  cout << checkExperience(programmed_before);
  }
  else
  {
    cout << "You should try it sometime!" << endl;
  }
}

int main()
{
  FirstLab();
  return 0;
}

