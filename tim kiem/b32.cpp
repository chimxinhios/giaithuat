	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> x;
	cout << search(a, n, x);

int search(int a[], int n, int x){
	for (int i = 0; i < n; i++){
		if (a[i] == x){
			return i;
		}
	}
	return -1;
}