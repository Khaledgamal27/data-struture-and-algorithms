#include <iostream>
using namespace std;
int main() {
int w ;//count_banana
    int k;//price_banana;
    int n;//money;
    int soldier = 0;
    int money=0;
cin >> k>> n >> w;
if (1<=w && w<=1000 && 1<=k && k<=1000 && 0<=n && n<=1000000000) {
    for (int i=1;i<=w;i++) {
        money=money+(k*i);
    }
    if (money>n) {
        soldier=money-n;
    }

}
cout << soldier;







    return 0;
}