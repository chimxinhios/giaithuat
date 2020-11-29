    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool check = false;
    for(int i = 0; i < n; i++){
        if(i%2 == 0 && a[i]%2 ==1){
            cout << a[i] << " ";
            check = true;
        }
    }
    if(check == false){
        cout << "NULL";
    }