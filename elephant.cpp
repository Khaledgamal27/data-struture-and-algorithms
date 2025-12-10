//
#include <iostream>
using namespace std;
int main() {

    int point_eleph2;
    cin >>  point_eleph2;
  int step=0;
    while (point_eleph2>0 && point_eleph2<=1000000){
        if (point_eleph2>5) {
            point_eleph2=point_eleph2-5;
        step++;}
        else {
            point_eleph2-=point_eleph2;
            step++;
        }



}
    cout << step;



}