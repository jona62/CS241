#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

int stringCount(string& word){
  return word.length();
}

bool findChar(char letter, string &word){
  for (int i = 0; i < word.length(); i++){
    if(letter == word.at(i)){
      return 1;
    }
  }
  return 0;
}

string isThere(string &word, string &arrayWord){
  int count=0;
  for(int i=0; i<word.length(); i++){
    if(findChar(arrayWord[i], word)){
      count++;
    }
    if(count >= arrayWord.length()){
      return arrayWord;
    }
  }
  return "";
}

void Word_scrabble(string &word){
 string parsedWord[1000];
  //vector <string> parsedWord;
  int iterator=-1;
  ifstream dictionaryFile;
  ofstream ofile;

  dictionaryFile.open("wordlist.txt");
  ofile.open("outputfile.txt");

  if(ofile.is_open()){
    if(dictionaryFile.is_open()){
      while(dictionaryFile>>parsedWord[++iterator]){
          if(isThere(word, parsedWord[iterator]) != ""){
            cout<<isThere(word, parsedWord[iterator])<<endl;
            ofile<<isThere(word, parsedWord[iterator])<<endl;
          }
      }
    }
  }
  ofile.close();
  dictionaryFile.close();
}

#endif //FUNCTIONS_H
