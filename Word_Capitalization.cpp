#include <iostream>
using namespace std;
int main() {
cout <<"enter word =<10"<<endl;
    string word;

    cin>>word;
    if (word.length()<=10){
    for (int i=0;i<word.length();i++) {
        if (i==0) {
            word[i]=toupper(word[0]);
        }
        else if (i!=0) {
            word[i]=tolower(word[i]);
        }
    }
    cout<<word<<endl;}
    else {
        cout<<"wrong input "<<endl;
    }





    return 0;
}