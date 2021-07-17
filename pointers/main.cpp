#include <iostream>

void increasePoint(int* value)
{
  (*value)++;
}

void increaseReference(int& value)
{
  value++;
}

int main()
{
  int result = 5;
  /* increasePoint(&result); */
  increaseReference(result);
  

  std::cout << result << std::endl;
  std::cin.get();
}
