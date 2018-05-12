#ifndef FUNCTIONS2_H
#define FUNCTIONS2_H

void makeFirst(string& word1, string& word2){
  string temp;
  if(word1.length()>word2.length()){
    temp = word1;
    word1 = word2;
    word2 = temp;
  }
}

string wordCompare(string& word1, string& word2){
  stringstream ss;
  makeFirst(word1, word2);
  for(int i=0; i<word1.length(); i++){
    if(word1.at(i) == (word2.at(i)))
      continue;
    else if(word1.at(i) < word2.at(i)){
      ss<<word1<<"\n"<<word2<<"\n";
      return ss.str();
    }
    else if(word1.at(i) > word2.at(i)){
      ss<<word2<<"\n"<<word1<<"\n";
      return ss.str();
    }
  }
  ss<<word1<<"\n"<<word2<<"\n";
  return ss.str();
}

#endif //FUNCTIONS2_H
