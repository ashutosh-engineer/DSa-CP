long aVeryBigSum(vector<long> ar) {

int n=ar.size();
long long sum=0;
for(int i=0; i<n ;i++){
    sum+=ar[i];
}
return sum;

}