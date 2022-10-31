#include <iostream>
#include <vector>

#include "project/Gene.hpp"

int main () {

  std::vector<Gene> genes;
  genes.reserve(4);

  genes.emplace_back("TACCAGATTAGCCATGAGGATGGATCCGATA");
  genes.emplace_back("ATCACCGTTGATGCCTTGATTAAGCAACCGT");
  genes.emplace_back("GCCACGAATCTCTTAGGCGGTTAAGACTATA");
  genes.emplace_back("GCCACGAATCTCTTAGGCGGTTAAGACTATA");

  for (const auto& gene: genes){
    std::cout << "Sequence:\t" << gene << std::endl;
    std::cout << "Complement:\t" << gene.complement() << std::endl;
  }
  return 0;
}
