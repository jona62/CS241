#ifndef PRIME_H
#define PRIME_H
#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


// Adds prime numbers to a file
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


//Finds the prime factors of a number and saves to an array
void primeFactorization(int input){
  ifstream ifile;
  int exponents[100];

	// CLEAN START
	for (int l=0 ; l < 100; l++){
			exponents[l] = 0;

	}
  ifile.open("primeNum.txt");

  int iter = 0;
	int arr[1000];

  // CLEAN START
	for (int l=0 ; l < 1000; l++){
			arr[l] = 0;
	}

  if(ifile.is_open()){
	  while(ifile >> arr[iter]){
		  iter++;
    }
  }
  ifile.close();

//Finds the prime factors of a number while the number is not equal to one
	int i=0, j=0;
	for(int k=0; k<iter; k++){
		while(input != 1){
			if(input % arr[i] == 0){
				input /= arr[i];
				exponents[j] = arr[i];
				// cout <<"j: "<< exponents[j] << " ";
				j++;
			}
			else i++;
		}
	}

// Displays the exponents in the form (B^e)
// Where B is the base and e is the exponent
	int count=1;
    for(int i=0; i<j; i++){
			if(exponents[i] == exponents[i+1]){
				count++;
			}
			// redo this part
			else if (exponents[i] != exponents[i+1] || exponents[i] == exponents[j]){
				cout<<"("<<exponents[i]<<"^"<<count<<") ";
			  count = 1;
			}

    }


  cout<<"\n";

}


void ask(){
	int choice;
	do{
		cout<<"Enter a number between 2 and 1000: ";
		cin>>choice;

		if(choice < 2 || choice > 1000){
			if(choice != 0){
				cout<<"\ninvalid input!\n";
			}
			continue;
		}
			primeFactorization(choice);

	}while(choice != 0);
}


#endif //PRIME_H
