#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int m, n, p;
    cin >> m;

    for (int i=0; i<m; i++) {
        cin >> n;
        cout << n << " " << n*n << " " << n*n*n << "\n";
    }
}