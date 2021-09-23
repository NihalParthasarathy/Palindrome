//Nihal Parthasrathy
//9/23/2021
//This program sees if user input is a Palindrome
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>


using namespace std;




int main () {

  //Initilize arrays and varubles
  char str[80];
  char newstr[80];
  char revstr[80];
  int i =0;
  int j =0;
  int k = 1;
  int g = 0;

  //Read in the string
  cout << "Put in a series of characters" << endl;
  cin.get(str, 80);
  cin.get();

  //remove punctuation and make the letters uppercase
  for (int i=0; i < strlen(str); i++) {
    if (isalpha(str[i])) {
      newstr[j] = toupper(str[i]);

        j++;

    }
  }

  cout << newstr << endl;
  newstr[j] = '\0';

  //Copying string to reverse

  for (int i = 0; i<strlen(newstr); i++) {

    revstr[i] = newstr[strlen(newstr) - k];
    k++;
    g++;

  }

  revstr[g] = '\0';
  cout << revstr << endl;

  //see if the arrays are the same
  if (strcmp(newstr, revstr) == 0) {
    cout << "Palindrome!" << endl;
  }
  else {
    cout << "Not a Palindrome" << endl;
  }

  return 0;
}


