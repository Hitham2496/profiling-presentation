#ifndef PROJECT_GENE_
  #define PROJECT_GENE_

#include <string>
#include <iostream>

class Gene {

private:

  std::string _nuc_seq;

  static std::string replace_a_and_t(std::string seq);

  static std::string replace_c_and_g(std::string seq);

  static std::string needlessly_nested(std::string seq);

public:

  Gene(const std::string& str);

  std::string seq() const;

  Gene complement() const;

  friend std::ostream& operator<<(std::ostream& os, const Gene& g);

};

#endif
