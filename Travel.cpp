#include <iostream>
using namespace std;
class Distance
{
  public:
  int a,b;
  Distance()
  {
    cin>>a>>b;
  }
  void displayDistance()
  {
    cout<<"Feet="<<a<<" Inches="<<b;
  }
  Distance operator +()
  {
    cout<<"Travelling Forward\n";
  }
  Distance operator -()
  {
    cout<<"Travelling Backwards\n";
  }
};
int main() 
{
  Distance d1;
  +d1;
  d1.displayDistance();
  cout<<"\n";
  -d1;
  d1.displayDistance();
	return 0;
}