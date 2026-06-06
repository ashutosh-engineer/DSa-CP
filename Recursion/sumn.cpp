//Sum of n natural numbers using the recursion;
#include<bits/stdc++.h>
using namespace std;

int add_natural(int n){

    //Base case 
    if(n==0) return 0;

    //Recursive case;
    return n + add_natural(n-1);
}

int main(){
    cout<<add_natural(5);
    return 0;
}

/*
Base case is case where recursion stops;
it is necessary becauxse ot preveents teh cases of infinite recursion helps us to prevent stack overflow;
Need in production grade system;

stack overflow;
it is where call stack got full so  after compillation of propgram the error is 
no known as stack overfolw;

when recursion goes infinite that called as infinite recursion it usually happens
when there is no base cases;

Every recursion must have base cases as well as it ask to function which calle dearlier in call stack;


output will be 15;
it is adding like this
n=5 = 5+4=9;
9+3=12
12+2=14
14+1=15;

after that base cases comes;

--Bug finding
voids function cant return anything;

Base case should be written aboove and should cehck earlier before execution of recusrsion;
NO return statement in the mian function;

Section 5
As i am inaware of calculate time and space complexity of recursion but
according to me
sc=Big O(1)--As it is not taking any extra space;
tc=Big O(n)--.

*/
