    string s;
    getline(cin,s);
    stack<char> st;
    string str;
    char count = '1';
    for(int i =0;i<s.length();i++){
        if(s[i] != s[i+1]){
            str += s[i];
            str += count;
            count = '1';
        }
        else {
            count++;
        }
    }
    cout << str;