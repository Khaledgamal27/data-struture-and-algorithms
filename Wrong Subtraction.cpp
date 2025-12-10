#include <iostream>
using namespace std;


int main() {
    int n;//الرقم
    int k;//عدد العمليات
    cin>>n>>k;
    string word=to_string(n);
for (int i=1;i<=k;i++) {
    if (word[word.length()-1]=='0') {
        n=n/10;
        word=to_string(n);

    }
    else {
        n=n-1;
        word=to_string(n);
    }
}

    //or
    // for (int i = 0; i < k; i++) {
    //     if (n % 10 == 0) {
    //         n /= 10;
    //     } else {
    //         n -= 1;
    //     }
    // }
    cout<<n;



    return 0;
}
