#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
   int a,b,c;
  cin>>a>>b>>c;
    if ( a>b && a>c)
    {
       int temp = c;
       c= a;
       a = temp;
    }
    else if (b>c && b>a)
    {
       int temp = c;
       c= b;
       b = temp;
    }
    
    if (c*c == a*a + b*b)
    {
        cout<<"true"<<endl;
    }
    else 
    {
         cout<<"false"<<endl;
    }
    
}
