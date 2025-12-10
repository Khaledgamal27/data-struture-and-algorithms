#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string arr[n];
    string color;
    int s=0;
// int count;
    for (int i=0;i<n;i++) {
        cin>>color;
        arr[i]=color;

    }
    if (color=="R" || color=="B" || color=="G") {
        for (int i=0;i<n;i++) {
            if (i>0) {
                if (arr[i] == arr[i-1]) {
                    s++;
                }
            }

        }
        cout<<s;

    }
    else {
        cout<<"Not Found color";
    }
}

