#include <iostream>

int main()
{

  int variable = 8; // -2b to 2b, because 4 byte is 32 bit, 1 bit for sign, 2^31 around 2b
  unsigned int unsign_variable = 10; // 2^32, around 4b

  char a=65;

  std::cout << a << std::endl;
  std::cin.get();
}
