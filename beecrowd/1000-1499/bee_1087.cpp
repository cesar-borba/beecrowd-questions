#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

//Nome: Dama
//Assunto: Ad hoc
//Competição/criador: Fábio Dias Moreira Brasil
//https://judge.beecrowd.com/pt/problems/view/1087

using namespace std;

int main() { _
    
    int x1, x2, y1, y2;

    while(cin >> x1 >> y1 >> x2 >> y2, x1 != 0) {
        
        if(x1==x2 && y1==y2) {
            cout << "0" << endl;
        }

        else if(abs(x1-x2)==abs(y1-y2) || x1==x2 || y1==y2) {
            cout << "1" << endl;
        }

        else {
            cout << "2" << endl;
        }

    }
    
    return 0;
}