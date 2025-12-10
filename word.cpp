#include <iostream>
using namespace std;

int main() {
string word;
    cin>>word;
     string word2;
    int count_capatal=0;
    int count_lower=0;
    for (int i=0;i<word.length();i++) {

        if (word[i]==toupper(word[i])) {
            count_capatal++;
        }
        else if (word[i]==tolower(word[i])) {
            count_lower++;
        }

    }
    if (count_capatal>count_lower) {
        for (int i=0;i<word.length();i++) {
            word[i]=toupper(word[i]);
            word2+=word[i];//     لازم علشان اشاور علي مكان في نص لازم لايكون فارغ علشان كدا لما تبق فاضيه لازم نستخدم + وليس الايندكس لانه مش ارراي
        }
    }
    else{
    // else if (count_capatal==count_lower || count_lower>count_capatal) {
        for (int i=0;i<word.length();i++) {
            word[i]=tolower(word[i]);
            word2+=word[i];
        }
    }
    cout<<word2<<endl;





}