#include <iostream>
#include <vector>

#include "project/Gene.hpp"

int main () {

  std::vector<Gene> genes;

  genes.push_back(std::string("TACCAGATTAGCCATGAGGATGGATCCGATA"));
  genes.push_back(std::string("ATCACCGTTGATGCCTTGATTAAGCAACCGT"));
  genes.push_back(std::string("GCCACGAATCTCTTAGGCGGTTAAGACTATA"));
  genes.push_back(std::string("GCGGTATGGATAGCCATACCCATGAGGATCT"));

  for (const auto& gene: genes){
    std::cout << "Sequence:\t" << gene << std::endl;
    std::cout << "Complement:\t" << gene.complement() << std::endl;
  }

  return 0;
}
