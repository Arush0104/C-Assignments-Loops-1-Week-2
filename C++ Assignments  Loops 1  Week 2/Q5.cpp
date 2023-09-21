#include <iostream>

using namespace std;

int
main ()
{
  int i, n,a;
  a=3;
  cout << "Enter n";
  cin >> n;
  for (i = 1; i <= n; i++)
    {
        cout<<a<<endl;
        a=a*4;
    }
}
