// TODO

#include<iostream>
#include<queue>
#include<vector>
 
#define endl "\n"
#define MAX 1000 + 1
using namespace std;
 
int N;
queue<int> Q;
vector<int> V;
 
void Input() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        Q.push(i);
    }
 
    if (Q.size() == 1) {
        cout << 1 << endl;
        exit(0);
    }
}
 
void Solution() {
    int Remainder;
    while (true) {
        V.push_back(Q.front());
        Q.pop();
 
        if (Q.size() == 1)
        {
            Remainder = Q.front();
            break;
        }
        Q.push(Q.front());
        Q.pop();
    }
 
    for (int i = 0; i < V.size(); i++) {
        cout << V[i] << " ";
    }
    cout << Remainder << endl;
}
 
void Solve() {
    Input();
    Solution();
}
 
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}
