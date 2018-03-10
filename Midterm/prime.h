<<<<<<< HEAD
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
=======
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

  for(int i=2; i<1000; i++)
    for(int j=2; j*j<=i; j++){
      if(i % j == 0) 
        break;
      else if (j+1 > sqrt(i)){
        if(ofile.is_open()){
      	  ofile<< i <<" ";
      	}
      }
    }
	ofile.close();
}

bool modulation(int num, int x, int arr[]){
  return((num > 0) && (num % arr[x] == 0));
}

void primeFactorization(int input){
  ifstream ifile;
  int exponents[50];
  ifile.open("primeNum.txt");
  
  int iter = 0, count = 0;

  if(ifile.is_open()){
    while(!ifile.eof()){
      count++;
    }
    
  int arr[count], x=0;
  while(!ifile.eof()){
      ifile >> x;
      arr[iter] = x;
      iter++;
  }

   for(int i=0; i<iter; i++){
      cout<<arr[i]<<" ";
   }
    
  int j=0;
  for(int i=0; i<iter; i++){
    if(modulation(input, i, arr)){
      input = input / arr[i];
      exponents[j] = arr[i];
      j++;
    }
  }

    for(int i=0; i<j; i++){
      cout<<exponents[i]<<" ";
    }
  }
  ifile.close();
}

#endif //PRIME_H
>>>>>>> 7826a6d33e65ba23106e8529c02cbd8c6bf64748
