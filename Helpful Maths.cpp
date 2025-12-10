// #include <iostream>
// using namespace std;
//  int main() {
//      cout<<"enter sum (1 or 2 or3) "<<endl;
//     string num;
//      cin>>num;
//      int x=0;
//      for (int i=0;i<num.length();i++) {
//          if (num[i]==1 or num[i]==2 or num[i]==3) {
//              x++;
//          }
//      }
//
//      int arr[x];
//      int c1=0;
//      int arr2[x];
//      int c2=0;
//      int arr3[x];
//      int c3=0;
//      for (int i=0;i<num.length();i++) {
//         if (num[i]==1 or num[i]==2 or num[i]==3) {
//              if (num[i]=="1") {
//                  arr[c1]=1;
//                  c1++;
//              }
//              if (num[i]=="2") {
//                  arr2[c2]=2;
//                  c2++;
//              }
//              if (num[i]==3) {
//                  arr3[c3]=3;
//                  c3++;
//              }
//          }
//      }
//
//  }

#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
cout<<"enter (1,2,3)"<<endl;
    string num;
    cin>>num;
    int x=0;
    for (int i=0;i<num.length();i++) {
        if (num[i]=='1' || num[i]=='2' || num[i]=='3') {
            x++;
        }
    }
   vector <int> arr1(x);
    int c1=0;
    vector <int> arr2(x);
    int c2=0;
    vector <int> arr3(x);
    int c3=0;
    string print1;
    string print2;
    string print3;
    for (int i=0;i<num.length();i++) {
        if (num[i]=='1') {
            arr1[c1]=1;
            c1++;

        }

        if (num[i]=='2') {
            arr2[c2]=1;
            c2++;
        }
        if (num[i]=='3') {
            arr3[c3]=1;
            c3++;
        }
    }
    for (int i=0;i<c1;i++) {
        if (i==0) {
            print1+="1";
        }
        else {
            print1+="+1";
        }
    }
    for (int i=0;i<c2;i++) {
        if (i==0) {
            print2+="2";
        }
        else{
            print2+="+2";
        }
    }
    for (int i=0;i<c3;i++) {
        if (i==0) {
            print3+="3";
        }
        else{
            print3+="+3";
        }
    }
    //
    // if (print1.length()==0) {
    //      cout<<print2<<"+"<<print3;
    //
    //  }
    // else if (print2.empty() && print1=="") {
    //     cout<<print3;
    // }
    // else if (print1.empty() && print3.empty()) {
    //     cout<<print2;
    // }
    // else if (print2.empty()) {
    //     cout<<print1<<"+"<<print3;
    // }
    // else if (print2.empty() && print3.empty()) {
    //     cout<<print1;
    // }
    // else {
    //     cout<<print1<<"+"<<print2<<"+"<<print3;
    // }

    if (print1=="" && print2=="") {
        cout<<print3;
    }
    else if (print1=="" && print3=="") {
        cout<<print2;
    }
   else if (print2=="" && print3=="") {
        cout<<print1;
    }
    else if (print1=="") {
        cout<<print2<<"+"<<print3;
    }
    else if (print2=="") {
        cout<<print1<<"+"<<print3;
    }
    else if (print3=="") {
        cout<<print1<<"+"<<print2;
    }
    else if (print1!="" && print2!="" && print3!="") {
        cout<<print1<<"+"<<print2<<"+"<<print3;
    }
return 0;}