#ifndef PROJECT_GENE_
  #define PROJECT_GENE_

#include <string>
#include <iostream>

class Gene {

private:

  std::string _nuc_seq;
  
  static char complement_single(char& nuc);

public:

  Gene(const std::string& str);

  std::string seq() const;

  Gene complement() const;

  friend std::ostream& operator<<(std::ostream& os, const Gene& g);

};

#endif
