#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool isPrime(int);
void goldBach();
void storePrimes();

int main(){
  storePrimes();
  goldBach();
  return 0;
}

void goldBach(){
  int i=0, num=0;
  int arr[1000]={0};
  ifstream ifile;
  ifile.open("primes.txt");
  ofstream ofile;
  ofile.open("output.txt");

  while(ifile>>num){
    for(int j=0; j<2000; j++){
      if(isPrime(j)){
        if((num + j) % 2 == 0 && ((num + j)) <= 2000){
          ofile<<num <<" + "<< j << " = "<<num + j<<endl;
        }
      }
    }
    i++;
  }
  ofile.close();
  ifile.close();
}

bool isPrime(int n){
  if (n <= 1)  return false;
  for (int i=2; i<n; i++){
    if (n%i == 0)
      return false;
  }
    return true;
}

void storePrimes(){
  ofstream ofile;
  ofile.open("primes.txt");
  if(ofile.is_open()){
    for(int i=1; i<=2000; i++){
      if(isPrime(i))
        ofile<<i<<endl;
    }
  }
  ofile.close();
}
