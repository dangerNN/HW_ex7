#include <string>
#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    string S = "hello world. hello step. hello it.";
    string S0 = "hello";
    int count = 0; 

    size_t pos = S.find(S0);

    while (pos != string::npos) {
        count++;
        pos = S.find(S0, pos + S0.length());
    }

    cout <<S<< endl;
    cout << "Количество слов hello: " << count << endl;

    return 0;
}