    int a[10];
    int n, k;
    cin >> n;
    	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> k;
	for (int i = k; i < n; i++){
		a[i] = a[i+1];
	}
	n--;
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}