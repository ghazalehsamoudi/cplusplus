#define PI  3.14
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
  int  r;
  float  x;
  
  cout<<"enter the radius:";
  cin>>r;
  
  x=PI*pow(r,2);
  cout<<"area="<<x;
  
  getch();
}
