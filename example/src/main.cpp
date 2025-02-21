#include <iostream>

#include "GitHash.hpp"

int main()
{
  std::cout << "Branch:     " << GitHash::branch << '\n';
  std::cout << "SHA1:       " << GitHash::sha1 << '\n';
  std::cout << "Short SHA1: " << GitHash::shortSha1 << '\n';
  std::cout << "Tags:       " << GitHash::tags << '\n';
  std::cout << "Dirty:      " << GitHash::dirty << '\n';
  std::cout << "Config:     " << GitHash::config << '\n';

  return 0;
}
