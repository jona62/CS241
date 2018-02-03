#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

bool conjunctive(bool A, bool B) {
	return (A && B);
}

bool disjunction(bool A, bool B) {
	return (A || B);
}

bool negation(bool A){
  return (!A);
}

bool implication(bool A, bool B){
  return (((A == 1) && (B == 1)) || ((A == 0) && (B == 1)) || ((A == 0) && (B == 0)) && (!(A == 1) && (B == 0)) );
}

bool equivalence(bool A, bool B){
  return (A == B);
}

char btoc(bool value){
  return(value)?('T'):('F');
}

string truthTable(){
  stringstream out;
  out<<"A | B | A & B | A | B | A > B | A = B | !A \n";
  out<<"___________________________________________\n";
  out<<btoc(1)<<" | "<<btoc(1)<<" |   "<< btoc(conjunctive(1,1))<<"   |   "<<btoc(disjunction(1,1))<<"   |   "<<btoc(implication(1,1))<<"   |   "<<btoc(equivalence(1,1))<<"   |  "<<btoc(negation(1))<<"\n";

  out<<btoc(1)<<" | "<<btoc(0)<<" |   "<< btoc(conjunctive(1,0))<<"   |   "<<btoc(disjunction(1,0))<<"   |   "<<btoc(implication(1,0))<<"   |   "<<btoc(equivalence(1,0))<<"   |  "<<"\n";

  out<<btoc(0)<<" | "<<btoc(1)<<" |   "<< btoc(conjunctive(0,1))<<"   |   "<<btoc(disjunction(0,1))<<"   |   "<<btoc(implication(0,1))<<"   |   "<<btoc(equivalence(0,1))<<"   |  "<<btoc(negation(0))<<"\n";

  out<<btoc(0)<<" | "<<btoc(0)<<" |   "<< btoc(conjunctive(0,0))<<"   |   "<<btoc(disjunction(0,0))<<"   |   "<<btoc(implication(0,0))<<"   |   "<<btoc(equivalence(0,0))<<"   |  "<<"\n";
  return out.str();
}


int main(){
  cout<<truthTable();
    return 0;
}
