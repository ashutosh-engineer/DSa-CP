#include<bits/stdc++.h>
using namespace std;

int add_digits(int n){

    //Base cases;
    //In these cases there is nothing to add within the numbers;
    if(n==0) return 0;
    // if(n == 1) return 1;

    //Recursive calling;
    return n%10 + add_digits(n/10);
}

int main(){
    cout<<add_digits(1234);
    return 0;
}