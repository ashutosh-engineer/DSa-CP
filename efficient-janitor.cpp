int efficientJanitor(vector<float> weight) {
    sort(weight.begin(), weight.end());
    
    int i = 0, j = weight.size() - 1;
    int trips = 0;
    
    while(i <= j) {
        if(weight[i] + weight[j] <= 3.0) {
            i++;
            j--;
        } else {
            j--;
        }
        trips++;
    }
    
    return trips;
}