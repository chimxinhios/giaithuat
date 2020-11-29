long long giaiThua(int n){
	if (n == 0) return 1;
	return n * giaiThua(n-1);
}
	int n;
	cin >> n;
	cout << giaiThua(n);