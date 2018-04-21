#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int Phi(int);
int GCD(int, int);

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
  for(int i=1; i<=n; i++){
    if(GCD(n,i) == 1){
      count++;
    }
  }
  return count;
}

int GCD(int num1, int num2){
  return (num2 != 0)? GCD(num2, num1 % num2): num1;
}
