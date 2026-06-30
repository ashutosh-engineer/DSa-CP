#include <bits/stdc++.h>
using namespace std;

long long max_sum_subarray(int arr[], int k, int n) {
    long long sum = 0;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    long long maxsum = sum;

    for (int i = k; i < n; i++) {
        sum += arr[i];
        sum -= arr[i - k];
        maxsum = max(maxsum, sum);
    }

    return maxsum;
}

int main() {
    int arr[] = {2,4,6,8,10,12,14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << max_sum_subarray(arr, k, n);

    return 0;
}