#include <iostream>
using namespace std;
// int main() {
//     double a,m,n;
//     cin>>m>>n>>a;
//     double w=m/a;
//     double h=n/a;
//     int w2=int(w);
//     int h2=int(h);
//
//     if(w>w2 && h>h2) {
//         w=w2+1;
//         h=h2+1;
//         cout<<w*h<<endl;
//
//
//     }
//     else if (w>w2){
//     w=w2+1;
//
//     cout<<w*h<<endl;}
//     else if (h>h2) {
//         h=h2+1;
//         cout<<h*w<<endl;
//
//     }
//     else {
//         cout<<w*h<<endl;
//     }
//
//
//
//
// }
int main() {
 int n,m,a;
 cin>>n>>m>>a;

 if (n%a!=0 && m%a!=0) {
    int result=(n/a)+1;
     int result2=(m/a)+1;
     cout<<result*result2<<endl;
 }
 else if (n%a!=0) {
    int result=(n/a)+1;
     int result2=(m/a);
     cout<<result*result2<<endl;
    }
 else if (m%a!=0) {
     int result=(m/a)+1;
     int result2=(n/a);
     cout<<result*result2<<endl;
 }
    else {
       int result=m/a;
        int result2=(n/a);
        cout<<result*result2;
    }
}