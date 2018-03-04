#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool IsSet(string filename);

int main(){
	string data[2] = {"data1.txt", "data2.txt"};
	for(int i=0; i<2; i++){
		cout<<data[i]<<(IsSet(data[i])?(" does "):(" does not ")) 
<< "represent a set\n";
	}

 return 0;
}

bool IsSet(string filename){
	ofstream ofile;
	ofile.open(filename);
	int x=0;
	if(ofile.is_open()){
		while(!ofile.eof()){
			x++;
		}
	int data_arr[x];
	int iter = 0, num;
		while(!ofile.eof()){
			ofile>>num;
			data_arr[iter] = num;
			iter++;
		}
		for(int i=0; i<x; i++){
			for(int j=1; j<x; j++){
				if(i != j){
					if(data_arr[j] == data_arr[i]){
						return false;
					}
				}
			}
		}
	}
}

