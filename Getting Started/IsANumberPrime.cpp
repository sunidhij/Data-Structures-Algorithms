#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    while (t--){
        int n ;
        cin>>n;int count=0;
    for(int i = 2 ; i*i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if (count == 0){
        cout<<"prime";
    }
    else {
        cout<<"not prime";
    }
    cout<<endl;
    }
    
}
