void prinArray(int a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
int swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

    int n,x;
    cin >> n;
    int indexMin = 0;
    int indexMax = 0;
    int a[100];
    for (int i = 0; i < n; i++){
		cin >> a[i];
        if(a[indexMin] > a[i]){
            indexMin = i;
        }
        if(a[indexMax] <= a[i]){
            indexMax = i;
        }
            // cout << indexMin;
    // cout << indexMax;
    int temp = a[indexMin];
    a[indexMin] = a[indexMax];
    a[indexMax] = temp;
    //swap(a[indexMin],a[indexMax]);
    prinArray(a,n);