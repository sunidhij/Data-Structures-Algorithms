#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
      int m = n;
       int p = 1;
       while (m >= 10)
       {
         m = m/10;
         p = p*10;
       }
        
      //displaying digits
      while (p != 0)
      {
        int dig = n/p;
        cout<<dig<<endl;
        n= n%p;
        p = p/10;
      }
    
}
