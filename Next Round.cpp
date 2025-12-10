#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int scores[50];  // حسب الشرط: n ≤ 50
    
    // قراءة الدرجات
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    
    // درجة الحد الأدنى للتأهل
    int cutoff_score = scores[k - 1];  // لأن المصفوفة تبدأ من 0
    
    // عد المتأهلين
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff_score && scores[i] > 0) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}