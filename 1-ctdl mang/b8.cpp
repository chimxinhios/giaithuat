    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool check1 = true; 
    bool check2 = true; 
    for (int i = 1; i < n; i++){
        if (a[i] <= a[i-1]) check1 = false;
        if (a[i] >= a[i-1]) check2 = false;
    }
    if (check1 || check2) cout << "YES";
    else cout << "NO";