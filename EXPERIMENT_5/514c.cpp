#include <iostream>
#include <set>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    set<string> db;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        db.insert(s);
    }
    for(int i = 0; i < m; i++) {

        string q;
        cin >> q;

        bool found = false;
        for(int j = 0; j < q.length(); j++) {

            char original = q[j];
            for(char ch : {'a', 'b', 'c'}) {

                if(ch == original) continue;

                q[j] = ch;

                if(db.count(q)) {
                    found = true;
                    break;
                }
            }
            q[j] = original;

            if(found) break;
        }

        if(found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}