long dequy(int a, int b){
if(b == 0){
    return 1;
}
return a * dequy(a,b-1);
}

  int a, b;
    cin >> a >> b;
    cout << dequy(a, b);