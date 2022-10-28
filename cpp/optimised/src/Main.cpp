#include <iostream>
#include <vector>

#include "project/Gene.hpp"

int main () {

  std::vector<Gene> genes;
  genes.reserve(4);

  genes.emplace_back(std::string("TACCAGATTAGCCATGAGGATGGATCCGATA"));
  genes.emplace_back(std::string("ATCACCGTTGATGCCTTGATTAAGCAACCGT"));
  genes.emplace_back(std::string("GCCACGAATCTCTTAGGCGGTTAAGACTATA"));
  genes.emplace_back(std::string("GCCACGAATCTCTTAGGCGGTTAAGACTATA"));

  for (const auto& gene: genes){
    std::cout << "Sequence:\t" << gene << std::endl;
    std::cout << "Complement:\t" << gene.complement() << std::endl;
  }
  return 0;
}
