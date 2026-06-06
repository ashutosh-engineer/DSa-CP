#include<bits/stdc++.h>
using namespace std;
int powerxn(int x, int n){
    //BAse case;
    if (n==0) return 1;
    // if(n==1) return 1;

    //Recursion case;
    return x * powerxn(x,n-1);

}
int main(){
    cout<<powerxn(2,3);

    return 0;
}