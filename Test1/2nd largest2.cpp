#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int n, number, max, sec_max;
  max = INT_MIN;
  cin >> number;
  for (int i = 0; i <= number; i++){
    cin >> n;
    if (max < n){
      sec_max = max;
      max = n;
    }
    else if (max != n)
    {
      if (sec_max < n)
      {
        sec_max = n;
      }
    }
  }
  cout << sec_max<< endl;
}
