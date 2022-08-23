#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
      int n,k
         cin>>n>>k;
    
    int v1;
    int v2;
    int m=n;
    int count =0;
    //Counting the number of digits
    while(m!=0){
        m =m/10;
        count++;
    }
     //Getting Value of K
     k = k%count; ;
     if (k<0)
     {
         k = k + count ;  // k+count because it will be the same if the value is negative
     }
     
    v1 = n/((int)Math.pow(10,k));
    v2 =  n%((int)Math.pow(10,k));
    int r = v2*((int)Math.pow(10,count -k)) + v1;
    cout<<r;
    
}
