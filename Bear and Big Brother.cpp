//weight limak =a weight bob=b  start-> a<=b  change in year(a->3a,b->2b)   we want count year to a>b;
#include <iostream>
using namespace std;

// void solve(int x, int y) {
//     int a=x;
//     int b=y;
//     for (int i=1; x>y;i++) {
//         a=a*3;
//         b=b*2;
//         if (a>b) {
//             cout<<i;
//             break;
//         }
//
//     }




int main() {

    int a;
    int b;
    cin >> a >> b;
    int count_year=0;
    while (a <= b) {
        a=a*3;
        b=b*2;

             count_year++;







    }
    cout<<count_year;
    return 0;
}


