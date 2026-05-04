#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout << "Enter the number of rows = ";
    if(!(cin >> n)) return 0;
    cout << "Enter the number of columns = ";
    if(!(cin >> m)) return 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}