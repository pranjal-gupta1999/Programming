#include <iostream>
using namespace std;
class BankDeposit
{
    int principle;
    int years;
    int interestRate;
    float rate;

    public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int R);  //here r is rate in float and R is % value
    void show();
};
BankDeposit :: BankDeposit(int p, int y, float r)
{
  principle = p;
  years = y;
  rate = r;
  interestRate = p;
  for(int i=0;i<years;i++)
  {
      interestRate = interestRate * (1 + rate);
      cout<<"IR "<<interestRate<<endl;
  }
}
BankDeposit :: BankDeposit(int p, int y, int R)
{
  principle = p;
  years = y;
  rate = (float(R)/100);
  interestRate = p;
  for(int i=0;i<years;i++)
  {
      interestRate = interestRate * (1 + rate);
  }
}
void BankDeposit :: show()
{
    cout<<"Today your amount is "<<principle<<" . Return value after "<<years<<" years at rate "<<rate<<" will be "<<interestRate<<endl;
}
int main()
{ int p ,y,R;
  float r;
cout <<"Enter p , y and r respectively."<<endl;
cin>>p>>y>>r;
BankDeposit d1(p,y,r);
d1.show();
cout <<"Enter p , y and R(in %) respectively."<<endl;
cin>>p>>y>>R;
BankDeposit d2(p,y,R);
d2.show();
    return 0;
}
