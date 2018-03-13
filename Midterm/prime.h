#ifndef PRIME_H
#define PRIME_H
#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void primeNums(){
	ofstream ofile;
	ofile.open("primeNum.txt");
	
  if(ofile.is_open()){
  	for (int i=2; i<1000; i++){
  		bool prime=true;
  		for (int j=2; j*j<=i; j++){
  			if (i % j == 0){
  				prime=false;
  				break;    
  			}
		}
		  if(prime) ofile << i << " ";
	  }
	  
	}
	ofile.close();
}


void PrimeFactorization(int input){
  ifstream ifile;
  int exponents[50];
  ifile.open("primeNum.txt");
  
  int iter = 0;
	  int arr[1000];

  if(ifile.is_open()){
	  while(ifile >> arr[iter]){
		  iter++;
    }
  }
  ifile.close();

   for(int i=0; i<iter; i++){
      cout<<arr[i]<<" ";
   }
    
  cout<<"\n\n";

	int j=0, i=0;
	while(input > 0){
	  if(input % arr[i] == 0){
		  input = input / arr[i];
		  exponents[j] = arr[i];
		  j++;
	  }
	  else{
	    i++;
	    }
	}

    for(int i=0; i<j; i++){
      cout<<exponents[i]<<" ";
    }
  cout<<"\n\n";

}


#endif //PRIME_H
