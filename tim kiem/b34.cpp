    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            count ++;
        }
    }
    cout << count;