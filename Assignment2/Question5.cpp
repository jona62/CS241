// Name: Jonathan James
// Creation: 02/22/2018
// Version: 2
// Prof. Jermaine Reid

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void absVal (int &x);
bool isOdd(int x);
bool isMult5(int x);
bool uWff(string doi, bool(*P)(int) );

int main(){
  string files[2] = {"data1.txt", "data2.txt"};
  cout << boolalpha;
  for(int i=0; i<2; i++){
    cout <<"Predicate wff evaluates to "<< uWff(files[i], isOdd) <<" for DOI "<< (i + 1)<< " and predicate isOdd()\n";
    cout <<"Predicate wff evaluates to "<<uWff(files[i],isMult5) <<" for DOI " << (i + 1) <<" and predicate isMult5()\n\n";
  }
  return 0;
}

void absVal (int &x){
  if(x < 0) x *= -1;
}

bool isOdd(int x){
  absVal(x);
  return x % 2 == 1;
}

bool isMult5(int x){
  absVal(x);
  return x % 5 == 0;
}

bool uWff(string doi, bool(*P)(int) ){
  int num=0;
  bool value = false;

  ifstream ifile;
  ifile.open(doi);
  if(ifile.is_open()){
    while(!ifile.eof()){
      ifile>>num;
      value = P(num);

        if(!value) return value;
    }
  }
  ifile.close();
  return value;
}
