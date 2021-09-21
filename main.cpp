#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>


using namespace std;




int main () {
  char str[80];
  char newstr[80];
  char revstr[80];
  int i =0;
  int j =0;
  int k = 1;
  int g = 0;
  
  cout << "Put in a series of charectors" << endl;
  cin.get(str, 80);
  cin.get();
  for (int i=0; i < strlen(str); i++) {
    if (isalpha(str[i])) {      
	newstr[j] = str[i];
	
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

  if (strcmp(newstr, revstr) == 0) {
    cout << "Palindrome!" << endl;
  }
  else {
    cout << "Not a Palindrome" << endl;
  }

  return 0;
}


