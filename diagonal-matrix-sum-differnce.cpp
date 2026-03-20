int diagonalDifference(vector<vector<int>> arr) {
    int n=arr.size();
    
    int left_diagonal=0;
    int right_diagonal=0;
    
    for(int i=0; i<n; i++){
        left_diagonal+=arr[i][i];
        right_diagonal+=arr[i][n-i-1];
    }
    long long difference=left_diagonal-right_diagonal;
    return abs(difference);
}