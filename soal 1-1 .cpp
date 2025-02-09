#include <iostream>
#include <string>
using namespace std;

string simplifyWord(string word) {
    string result;
    int len = word.size();
    
    for (int i = 0; i <= len; i++) {  
        if (word[i] == 'c') {
            if (i + 1 < len) {
                if (word[i + 1] == 'h') {
                    result += 'c';
                    i++; 
                } else if (word[i + 1] == 'e' || word[i + 1] == 'i' || word[i + 1] == 'y') {
                    result += 's';
                } else {
                    result += 'k';
                }
            } else {
                result += 'k'; 
            }
        } else {
            result += word[i]; 
        }
    }
    return result;
}

int main() {
    int N;
    cin >> N;
    string word;
    
    for (int i = 0; i < N; i++) {
        cin >> word;
        cout << simplifyWord(word) << endl;
    }
    
    return 0;
}
