  int n = arr.size();

    long long positive = 0;
    long long negative = 0;
    long long zeros = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0) zeros++;
        else if(arr[i] > 0) positive++;
        else negative++;
    }

    // correct division (float)
    float ratio_pos = (float)positive / n;
    float ratio_neg = (float)negative / n;
    float ratio_zero = (float)zeros / n;

    // HackerRank style output (6 decimal places)
    cout << fixed << setprecision(6);
    cout << ratio_pos << endl;
    cout << ratio_neg << endl;
    cout << ratio_zero << endl;