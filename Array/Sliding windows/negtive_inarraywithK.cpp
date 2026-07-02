//. First Negative in Every Window
//Test it on this input: arr = [-8, 2, 3, -6, 10, -15, 4, 7], k=2
//Expected output: -8 0 -6 -6 -15 -15 0

//Negative in the arrays;
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// }

deque<int> dq;
int n=arr.size();

for(int i=0; i<n; i++){
    if(arr[i] < 0){
        dq.push_back(i); //As told by my teacher claude that always insert from back and pop from front;
    }

    //Now check for leaving the window;
    if(!dq.empty() && dq.front() <= i - k){
         dq.pop_front();
    }
    if(i >= k-1){
    if(dq.empty()) cout << 0 << " ";
    else cout << arr[dq.front()] << " ";
}

}