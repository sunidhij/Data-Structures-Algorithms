#include <iostream>
using namespace std;

bool isPrime(int n){
    int count=0;
    for(int i = 2 ; i*i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if (count == 0){
        return false;
    }
    else {
        return true;
    } 
}

int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    //write your code here
    for(int i = low; i<=high; i++){
        bool x= isPrime(i);
        if(x == false){
            cout<<i<<endl;
        }
    }
}
