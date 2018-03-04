#ifndef PRIME_H
#define PRIME_H
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void primeNums(){
	ofstream file;
	file.open("primeNum.txt");

	int i=2, primes = 1000;
	while(primes>0){
	    bool prime = true;
	    for(int j=0; j*j <= i; j++){
		if(i % j == 0){
		    prime = false;
		    break;
		 }
	    }
	if(prime){
	    if(file.is_open()){
		  file<< i <<" ";
	    }
	}
	primes--;
	i++;
    }
	file.close();
}

#endif //PRIME_H
