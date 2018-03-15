#ifndef EXTRA_CREDIT_H
#define EXTRA_CREDIT_H
#include "prime.h"


//Similar to the primeFactorization Function
// This generates the prime factors of numbers less than or equal to 1000
// And stores it in a file
void xtra(){
	int num = 2;

	ofstream out;
	out.open("xtra.txt");
	if(out.is_open()){
		int input;
	while(num <= 1000){
		input = num;
		ifstream ifile;
		int exponents[100];
		ifile.open("primeNum.txt");

		int iter = 0;
		int arr[1000];

		if(ifile.is_open()){
			while(ifile >> arr[iter]){
				iter++;
			}
		}
		ifile.close();


		int i=0, j=0;
		for(int k=0; k<iter; k++){
			while(input != 1){
				if(input % arr[i] == 0){
					input /= arr[i];
					exponents[j] = arr[i];
					j++;
				}
				else i++;
			}
		}

		int count=1;
			for(int i=0; i<j; i++){
				if(exponents[i] == exponents[i+1]){
					count++;
				}

				else if(exponents[i] != exponents[i+1] || exponents[i] == exponents[j]){
					out<<"("<<exponents[i]<<"^"<<count<<") ";
					count = 1;
				}
			}
			out<<"\n";

			num++;
			}
		}
		out.close();
}


#endif //EXTRA_CREDIT_H
