#include <iostream>
using namespace std;
class matrix
{
  public:
  float s,l,add;
  void get()
  {
    cin>>s;
    cin>>l;
  }
  matrix operator *(matrix m)
  {
    matrix k;
   k.s=s*m.s;
    k.l=l*m.l;
    k.add=k.s+k.l;
    return k; 
  }
  void put()
  {
    cout<<add;
    }
 
};

int main() 
{
	matrix m1,m2,m3,m4,m5;
  m1.get();
  m2.get();
  m3.get();
  m4=m1*m3;
  m4.put();
  cout<<"\n";
  m5=m2*m3;
  m5.put();
	return 0;
}