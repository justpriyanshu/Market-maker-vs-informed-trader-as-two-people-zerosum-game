/*
╔═══════════════════════════════════════════════════════════╗

              ~*PRIYANSHU3011*~

╚═══════════════════════════════════════════════════════════╝
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define pii pair<ll,ll>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define f(i,a,b) for (ll i = a; i < b; i++)
#define fe(itr,a) for(auto itr:a) 
#define fr(i,n) for(ll i=n;i>=0;i--)
#define all(v) v.begin(), v.end()
#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define W(t) ll t; cin>>t; while(t--)
#define inip 3.141592653589793238462643383279
#define mii map<ll,ll>
#define mll map<ll , ll>
#define inp(v,n) for(ll i=0;i<n;i++){ll xty; cin>>xty; v.pb(xty);}
#define in(x) cin>>x
const ll MOD = 1e9 + 7;

#include "GameSolver.h"

/* main */
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n;
    cin >> n;

    double** A = new double*[n];
    f(i, 0, n)
    {
        A[i] = new double[n];
        f(j, 0, n)
        {
            cin >> A[i][j];
        }
    }

    void* game = Game_new(A, n, n);
    Game_solve(game);

    double* strat1 = new double[n];
    double* strat2 = new double[n];

    Game_optstrat(game, true, strat1);  // Player I
    Game_optstrat(game, false, strat2); // Player II

    cout << "Player I strategy: ";
    f(i, 0, n) cout << strat1[i] << " ";
    cout << endl;

    cout << "Player II strategy: ";
    f(i, 0, n) cout << strat2[i] << " ";
    cout << endl;

    cout << "Value of the game: " << Game_value(game, true) << endl;

    Game_delete(game);
    delete[] strat1;
    delete[] strat2;
    f(i, 0, n) delete[] A[i];
    delete[] A;

    return 0;
}
