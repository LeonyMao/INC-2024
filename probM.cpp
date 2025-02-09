#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N_Caelum;
    cin >> N_Caelum;

    vector<int> skillOralex(3 * N_Caelum);
    for (int i = 0; i < 3 * N_Caelum; ++i) {
        cin >> skillOralex[i];
    }

    sort(skillOralex.begin(), skillOralex.end());

    int minCodexMedian = 101000;
    for (int i = N_Caelum; i < 3 * N_Caelum; i += 2) {
        if (minCodexMedian > skillOralex[i]) {
            minCodexMedian = skillOralex[i];
        }
    }

    cout << minCodexMedian << endl;
    return 0;
}
