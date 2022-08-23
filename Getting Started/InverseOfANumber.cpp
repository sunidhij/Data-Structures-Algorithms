
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    // write your code here 
 
  int n ;
  cin>>n;
  int inv=0;
  int op = 1;
  while (n!=0)
  {
     int ofv = n%10;
     int ifv = op;
     int ip = ofv;
     
     inv = inv + ifv*((int)(Math.pow(10,ip-1)));
     op++;
     n = n/10;
  }
  cout<<inv<<endl;
    
}
