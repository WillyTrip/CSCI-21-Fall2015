/*
 * Name        : lab_5.cpp
 * Author      : Nick Lopez
 * Description : Practicing Functions. Use this file to write your
 *               Function Definitions (what goes below main()).
 */

#include "lab_5.h"

void Hello()
{
 cout << "Hello world!";
}


//-----------------------------------------
void PrintMessage(string  message)
{
 cout <<  message;
}


//-----------------------------------------
int GetAnswer()
{
 return 42;
}


//-----------------------------------------
int FindLarger(int first, int second)
{
 if (first > second)
 {
  return first;
 }
 else if (second > first)
 {
  return second;
 }
 else if (first == second)
 {
  return first;
 }
}


//-------------------------------------------
string BuildMessage(string first, bool second)
{ 
 if (first == "")
 {
  return "Message: empty";
 }
 else if (second == true)
 {
  string s = first;
  for (unsigned int i = 0; i < s.length(); i++)
  {
    s[i] = toupper (s[i]);
  }
  return "Message: " + s;
 }
 else if (second == false)
 {
  return "Message: " + first;
 }
 else
 {
  return "Message: " + first;
 }
}
/*
 * Function Name: BuildMessage
 *
 * Return the string "Message: STRING", where STRING is replaced by the value of
 * the first parameter (string). If second parameter (bool) is true, convert
 * first parameter (string) to all uppercase letters before concatenating it
 * with "Message: ". If first parameter is the empty string, return
 * "Message: empty".
 * @param string - A message.
 *               - Defaults to "" (empty string)
 * @param bool - To indicate if we should uppercase letters or not
 *             - Defaults to false
 */
 