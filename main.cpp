#include <cmath>
#include <iostream>
using namespace std;
int main()
{
  long i;
  long k;
  int m = 0;
  int v[6] = {0,0,0,0,0,0};
  i = pow(216,6) + pow(216,4) + pow(36,6) - pow(6,14) - 24;
  cout << "Here we get the first result: " << i << endl;
  while(i > 6)
  {
    k = i % 6;
    v[k] = 1;
    cout << "Waste: " << k << endl;
    i /= 6; //i / 6;
    //i = M;
    cout << "Result:" << i << endl;
  }
  //cout << "Cycle ends here" << endl;
  for(int j; j < 6; j++)
  {
    m += v[j];
  }
  cout << "Different digits: " << m << endl;
  return 0;
}