#include <iostream>
using namespace std;
class Distance
{
  int f,i;
  public:
  void readDistance(void)
  {
    cin>>f;
    cin>>i;
  }
  Distance operator +(Distance d)
  {
    Distance k;
  if((i+d.i)>=12)
  {
      k.f=f+d.f+((i+d.i)/12);
      k.i=(i+d.i)%12;
    }
  else
  {
    k.f=f+d.f;
    k.i=i+d.i;
  }
    return k;
   
  }
  void dispDistance()
  {
    cout<<"Feet:"<<f<<" Inches:"<<i;
  }
};
int main() 
{
  Distance d1,d2,d3;
  d1.readDistance();
  d2.readDistance();
  d3=d1+d2;
  d3.dispDistance();
	return 0;
}