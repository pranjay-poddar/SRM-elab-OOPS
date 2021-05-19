#include <iostream>
using namespace std;
class Money
{
  int r,p;
  public:
  Money()
  {
    cin>>r;
    cin>>p;
  }
  Money operator +(Money o)
  {
    Money k;
    k.r=r+o.r;
    k.p=p+o.p;
    return k;
  }
  Money operator -(Money o)
  {
    Money k;
    k.r=r-o.r;
    k.p=p-o.p;
    return k;
  }
  void disp()
  {
    cout<<"Rs="<<r<<" and "<<p<<" Paise";
  }
};
int main() 
  {
  Money m1,m2,m3,m4,m5;
  m4=m1+m2;
  m5=m4-m3;
  m5.disp();
  return 0;
}