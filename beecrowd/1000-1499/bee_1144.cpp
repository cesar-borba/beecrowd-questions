#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define print(x) cout << x << "\n"

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() { _

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cout << fixed << setprecision(0) << i << " " << pow(i, 2) << " " << pow(i, 3) << endl << i << " " << pow(i, 2)+1 << " " << pow(i, 3)+1 << endl;
    return 0;
}