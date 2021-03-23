#include <iostream>
using namespace std;
// рекурсивна функція для визначення кількості встановлених бітів
int count(int n)
{
 if (n == 0)
  return 0;
 else
  // якщо останній біт 1 то додаєм 1, якщо ні то нуль, та зміщаємся на 1 біт
  return (n & 1) + count(n >> 1);
}
int main()
{
 int n;
 cout << "Input your int value\n";
 cin >> n;
 cout << "Amount of bits in your int value: ";
 cout << count(n);
 return 0;
}