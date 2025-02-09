#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N_Caelum;
    cin >> N_Caelum;

    vector<int> A_Oralex(N_Caelum);
    for (int i = 0; i < N_Caelum; ++i) {
        cin >> A_Oralex[i];
    }

    unordered_map<int, int> sumCaelumCount;
    int maxCodexDoubleChunks = 0;

    int i = 0;
    while (i < N_Caelum - 1) {
        int doubleChunkSum = A_Oralex[i] + A_Oralex[i + 1];

        if (i < N_Caelum - 2 && A_Oralex[i + 1] + A_Oralex[i + 2] == doubleChunkSum) {
            sumCaelumCount[doubleChunkSum]++;
            i += 2;
        } else {
            sumCaelumCount[doubleChunkSum]++;
            i++;
        }
    }

    for (auto &entry : sumCaelumCount) {
        maxCodexDoubleChunks = max(maxCodexDoubleChunks, entry.second);
    }

    cout << maxCodexDoubleChunks << endl;

    return 0;
}
