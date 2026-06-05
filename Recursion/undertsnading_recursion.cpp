#include<bitsstd/c++.h>
int main(){

    int factorial(int nums){
        //Base case
        if(n<=1) return 1; //what if someone  added 0 

        //factorial
        return n * factorial(n-1);
    }

    int main(){
        cout<<"Factorial :"<<factorial(4);

        return 0;
    }
}
