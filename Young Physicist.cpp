#include <iostream>
using namespace std;
int main() {
int arr[3][3];
    int x;
    cin>>x;
int sum1=0;
    int sum2=0;
    int sum3=0;
for(int i=0;i<x;i++) {
    int c,d,e;
    cin>>c>>d>>e;
    sum1+=c;
    sum2+=d;
    sum3+=e;


}
    if (sum1==0 && sum2==0 && sum3==0) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }




}