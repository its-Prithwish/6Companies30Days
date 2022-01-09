#include <bits/stdc++.h>
using namespace std;

long long int countSquares(int n)
{
  return (n * (n + 1) / 2) * (2 * n + 1) / 3;
}
int main()
{
 
  int n = 4;
  cout << countSquares(n);
  return 0;
}
