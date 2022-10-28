#include <iostream>
#include <algorithm>
#include <cstring>

#include "project/Gene.hpp"


// One of our inefficient replacement methods.
std::string Gene::replace_a_and_t(std::string seq){
  // Not passing by reference above.
  // Needless storage variable.
  std::string seq_empty;
  // Not passing by reference.
  for (std::string::size_type i = 0; i < seq.size(); i++){
    // Needless copying and appending to storage variable.
    // Using std::string instead of char for data as small
    // as a single character.
    if (seq[i] == 'A'){
      std::string rep = "T";
      seq_empty += rep;
      continue;
    }
    // Needless copying and appending to storage variable.
    else if (seq[i] == 'T'){
      std::string rep = "A";
      seq_empty += rep;
      continue;
    }
    // Needless copying and appending to storage variable.
    else {
      char rep = seq[i];
      seq_empty += rep;
    }
  }
  return seq_empty;
}

// Another of our inefficient replacement methods.
std::string Gene::replace_c_and_g(std::string seq){
  // Not passing by reference above.
  // Needless storage variable.
  std::string seq_empty;
  // Not passing by reference.
  for (std::string::size_type i = 0; i < seq.size(); i++){
    // Needless copying and appending to storage variable.
    // Using std::string instead of char for data as small
    // as a single character.
    if (seq[i] == 'C'){
      std::string rep = "G";
      seq_empty += rep;
      continue;
    }
    // Needless copying and appending to storage variable.
    else if (seq[i] == 'G'){
      std::string rep = "C";
      seq_empty += rep;
      continue;
    }
    // Needless copying and appending to storage variable.
    else {
      char rep = seq[i];
      seq_empty += rep;
    }
  }
  return seq_empty;
}

// Another needlessly nested wrapper.
std::string Gene::needlessly_nested(std::string seq){
  // Not passing by reference above.
  // Needless copy.
  std::string first_replace = replace_a_and_t(seq);
  // Needless copy.
  std::string second_replace = replace_c_and_g(first_replace);
  return second_replace;
}

Gene::Gene(const std::string& str) {
  _nuc_seq = str;
}

std::string Gene::seq() const{
  return _nuc_seq;
}

// The inefficient method of finding the sequence complement
// which wraps around several nested methods.
Gene Gene::complement() const {
  // Unnecessary copying.
  std::string tmp = _nuc_seq;
  std::string complement = needlessly_nested(tmp);
  return Gene(complement);
}

// Overloaded insertion operator for printing
std::ostream& operator<<(std::ostream& os, const Gene& g){
  os << g.seq();
  return os;
}
