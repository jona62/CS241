#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int Phi(int);

int main(){
  fstream out;
  out.open("data.txt", fstream::out);

  for(int i=1; i<=100; i+=1){
    out<<setw(3)<<setfill('0');
    out<<"phi("<< i << ") = " << Phi(i) <<"\n";
  }
  out.close();
  return 0;
}

int Phi(int n){
  int count=0;
  for(int i=1; i<n; i++){
       bool isPrime=true;
       for (int j=2; j*j<=i; j++){
           if (i % j == 0){
               isPrime=false;
               break;
           }
       }
       if(isPrime){
         count++;
       }
   }
  return count;
}
