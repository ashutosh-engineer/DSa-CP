void staircase(int n) {
    for(int i = 1; i <= n; i++){
        
        // spaces
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        
        // stars (#)
        for(int j = 1; j <= i; j++){
            cout << "#";
        }
        
        cout << endl;
    }
}