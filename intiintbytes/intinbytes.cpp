#include <iostream>
#include <string>


int count(unsigned int n)
{
 int count = 0;
 while (n) // when n still has bits
 {
  count += (n & 1);
  n >>= 1;
 }
 return count;
}
int main()
{
 unsigned int n;
 std::cout << "Input your positive value\n";
 std::cin >> n;
  std::cout << "Your value is: "<<n<<std::endl;
 std::cout << "Amount of bits in your int value: ";
 std::cout << count(n);
 return 0;
}