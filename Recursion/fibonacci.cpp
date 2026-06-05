#include<bits/stdc++.h>
int fib(int n){

    //Base case;
    if(n==0) return 0;
    if(n==1) return 1;

    //one more case works here that is n<=1

    //Recurive calls
    return fib(n-1) + fib(n-2);
}

int main(){
    cout<<fib(21);
    return 0;
}