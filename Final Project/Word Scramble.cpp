#include "functions.h"

int stringCount(string&);
bool findChar(char letter, string &word);
string isThere(string &, string&);
void Word_scrabble(string&);
string wordCompare(string&, string&);
void makeFirst(string&, string&);

int main(){
  string word;
  do{
    cout<<"Enter a word that contains less than 26 letters: ";
    cin>>word;
  }while(stringCount(word)>26);
    Word_scrabble(word);

  return 0;
}
