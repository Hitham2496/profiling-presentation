#include <iostream>
#include <algorithm>

#include "project/Gene.hpp"


Gene::Gene(const std::string& str) {
  _nuc_seq = str;
}

// The nicer, more efficient switch-based complement function
char Gene::complement_single(char& nuc){
  switch(nuc)
  {   
  case 'A':
      return 'T';
  case 'T':
      return 'A';
  case 'G':
      return 'C';
  case 'C':
      return 'G';
  }
  std::string tmp = std::string("invalid nucleotide: ") + nuc;
  throw std::invalid_argument(tmp);
}

std::string Gene::seq() const{
  return _nuc_seq;
}

// A wrapper around the nicer complement method
Gene Gene::complement() const {
  std::string tmp = _nuc_seq;
  std::transform( begin(tmp), end(tmp),
                  begin(tmp), Gene::complement_single );
  return Gene(tmp);
}

// Overloaded insertion operator for printing
std::ostream& operator<<(std::ostream& os, const Gene& g){
  os << g.seq();
  return os;
}


