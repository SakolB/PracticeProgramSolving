#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long total_sum = static_cast<long long>(n) * (n + 1) / 2;

    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        long long target_sum = total_sum / 2;
        vector<int> first_set, second_set;

        for (int i = n; i > 0; i--) {
            if (i <= target_sum) {
                first_set.push_back(i);
                target_sum -= i;
            } else {
                second_set.push_back(i);
            }
        }

        cout << first_set.size() << endl;
        for (int i : first_set) {
            cout << i << " ";
        }
        cout << endl;

        cout << second_set.size() << endl;
        for (int i : second_set) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}