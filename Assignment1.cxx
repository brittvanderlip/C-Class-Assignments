/*Brittany Vanderlip
  Comp 3400: Assignment 1
  105182221 */

#include <iostream>
#include <iomanip> // for std::noskipws

using namespace std;

int main()
{
  bool is_within_double_quotes = false;
  char byte;
  //Looping through each character inputted by the user
  while (cin >> noskipws >> byte)
  {
    //If not within double quotes then run through the switch statement
    //Switch statement will change .(dot), ,(comma), (?) questionmark, (') single quotes to white space
    //Will jump to default if none of these symbols are met and the character will be printed
    if(is_within_double_quotes == false){

    //Switch case for character symbols to be replaced by whitespace
    switch(byte){
      case '.':
        cout << " ";
        break;
      case '-':
        cout << " ";
        break;
      case ',':
        cout << " ";
        break;
      case '?':
        cout << " ";
        break;
      case '\'':
        cout << " ";
        break;

      //When reaching another quotation, set is_within_double_quotes to true to jump to first if statement
        case '\"':
        is_within_double_quotes = true;
        //print the quotation
        cout << byte;
       break;
      //If not a symbol to be replaced by whitespace, then simply print the character
      default:
      cout << byte;
      }
    }

    //If the text is within double quotes, then print our each character until an ending double quote
    else if(is_within_double_quotes == true){
    cout << byte;

      //If reach another quote, set within double quotes to false
      if(byte == '\"'){
        is_within_double_quotes = false;
      }
    }
   }
 }
