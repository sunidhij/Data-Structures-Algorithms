#include <iostream>
using namespace std;

int main(int argc, char **argv){

     int n ;
      cin>>n;
     int r;
     while(n!=0)
     {
         r = n%10;
         n = n/10;
         cout<<r<<endl;
     }
    
    
}
