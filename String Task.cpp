#include<iostream>
#include<string>
# define  x 1000

using namespace std;
int main() {
    string input;
    cin>>input;
    string arr[x];
    string removing[x];
    int remov=0;
    int top=0;
    for (int i=0;i<input.length();i++) {
        if (input[i]=='A' ||input[i]=='O' || input[i]=='Y' || input[i]=='E' || input[i]=='U' || input[i]=='I' || input[i]=='a' || input[i]=='o' || input[i]=='y' || input[i]=='e' || input[i]=='u' || input[i]=='i') {
            // input[i]=input[--i];
            removing[remov]=input[i];
        }
        else {

            arr[top]=tolower(input[i]);
            top++;

        }
    }
    for (int i=0;i<top;i++) {
        cout<<"."+arr[i];
    }
}