void miniMaxSum(vector<int> arr) {
    long long total = 0;
    int smallest = arr[0];
    int largest = arr[0];

    for(int i = 0; i < arr.size(); i++){
        total += arr[i];

        if(arr[i] < smallest) smallest = arr[i];
        if(arr[i] > largest) largest = arr[i];
    }

    long long minSum = total - largest;
    long long maxSum = total - smallest;

    cout << minSum << " " << maxSum;
}