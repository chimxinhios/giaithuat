	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		if (isPrime(a[i])){
			cout << a[i] << " ";	
		}
	}

bool isPrime(int n){
	if (n < 2) return false;
    int count = 0;
	for (int i = 1; i <= n; i++){
		if (n%i == 0){
			count++;
		}
	}
    if(count == 2){
        return true;
    }
	return false;
}