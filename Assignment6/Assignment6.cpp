#include <iostream>
#include <string>
using namespace std;


void mult2(int A[][2], int B[][2], int C[][2]);
void print(int A[][2]);

int main() {
  int A[2][2], B[2][2], C[2][2];
  cout<<"Enter the elements of matrix A:\n";
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      cin>>A[i][j];
    }
  }

  cout<<"Enter the elements of matrix B:\n";
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      cin>>B[i][j];
    }
  }

  cout<<"The Product of\n";
  print(A);
  cout<<"and\n";
  print(B);
  cout<<"is\n";
  mult2(A,B,C);
  print(C);

  return 0;
}

void mult2(int A[][2], int B[][2], int R[][2]){
  for(int row=0; row<2; row++){
    for(int col=0; col<2; col++){
      R[row][col] = 0;
        for (int i=0; i < 2; i++){
          R[row][col] += A[row][i] * B[i][col];
        }
    }
  }
}
void print(int A[][2]){
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      cout<<A[i][j]<<" ";
    }
    cout<<endl;
  }
}
