#include <iostream>
#include <fstream>
using namespace std;

void absVal (int &x){
  if(x < 0) x *= -1;
}

bool isEven(int x){
  absVal(x);
  return x % 2 == 0;
}

bool isMult3(int x){
  absVal(x);
  return x % 3 == 0;}

bool eWff(string doi, bool(*P)(int) );

int main(){
  string files[2] = {"data1.txt", "data2.txt"};
  cout << boolalpha;
  for(int i=0; i<2; i++){
    cout <<"Predicate wff evaluates to "<< eWff(files[i], isEven) <<" for DOI "<< (i + 1)<< " and predicate isEven()\n";
    cout <<"Predicate wff evaluates to "<<eWff(files[i],isMult3) <<" for DOI " << (i + 1) <<" and predicate isMult3()\n\n";
  }
  return 0;
}

bool eWff(string doi, bool(*P)(int) ){
  int num=0;
  bool value = false;

  ifstream ifile;
  ifile.open(doi);
  if(ifile.is_open()){
    while(!ifile.eof()){
      ifile>>num;
      value = P(num);

        if(value) return value;
    }
  }
  ifile.close();
  return value;
}
