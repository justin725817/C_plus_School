#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string &first, const string &last, const string &ssn, double w, double p): Employee(first, last, ssn){
    setWage(w);
    setPieces(p);
}

void PieceWorker::setWage(double w){
   if (w < 0.0) {
      throw invalid_argument("Wage must be >= 0.0");
   }

    wage = w;
}
double PieceWorker::getWage() const{
 return wage;
}

void PieceWorker::setPieces(double p){
   if (p < 0.0) {
      throw invalid_argument("Pieces must be >= 0.0");
   }

    pieces = p;
}
double PieceWorker::getPieces() const{
 return pieces;
}
 
double PieceWorker::earnings() const{
    return wage * pieces;
}

std::string PieceWorker::toString() const{
   ostringstream output;
   output << fixed << setprecision(2);
   output << "commission employee: " << Employee::toString()
      << "\nPieces: " << getPieces()
      << "; Wage: " << getWage();
   return output.str();
}

