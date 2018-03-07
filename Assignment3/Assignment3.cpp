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
	ifstream ifile;
	int data_arr[1000];
	ifile.open(filename);
	
	int iter = 0;
	if(ifile.is_open()){
		while(ifile>>data_arr[iter]){
			iter++;
		}
	}
		ifile.close();

		for(int i=0; i<iter; i++){
			for(int j=1; j<iter; j++){
				if(i != j){
					if(data_arr[j] == data_arr[i]){
						return false;
					}
				}
			}
		}
		
	return true;
}
