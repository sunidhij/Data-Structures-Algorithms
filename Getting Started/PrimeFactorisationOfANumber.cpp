#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  
  int n ;
  cin>>n;
  for ( int i = 2; i <= n-1 ; i++)
  {
      while (n%i==0)
      {
           n = n/i;
          cout<<i<<" ";
          
      }
  }
  if(n != 1)
  {
  cout<<n<<endl;
 }
    
}
