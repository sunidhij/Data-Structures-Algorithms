#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int a = 0;
    cout<<a<<endl;
    int b = 1;
    cout<<b<<endl;
    for (int i = 0; i<n-2; i++){
        
      
        int c= a+b;
         cout<<c<<endl;
        a = b;
        b = c;
    }
    
}
