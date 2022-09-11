#include<bits/stdc++.h>
using namespace std;
//------------------------------------------------------------
typedef long long ll;
//--------------------------------------------------------------

//---------------------------------------------------------------------------------------
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define INF INT_MAX
#define INFF LLONG_MAX
#define EPS INT_MIN
#define EPSS LLONG_MIN
#define mod 1e9+7
#define mod1 998244353 // it also can written as (119<<23)+1
#define pb push_back
#define ff first
#define ss second
#define cntOnes(n)  __builtin_popcount(n)
#define cntLzeros(n) __builtin_clz(n) // count leading zeros 00000000111
#define cntTzeros(n) __builtin_ctz(n) // count trailing zeros 10000000
#define pai acos(-1.0)
#define mk make_pair(ll,ll)
#define mem(a,b) memset(a,b,sizeof(a))
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define precision(n) fixed << setprecision(n) // using for precision set up for floating numbers
//-------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------
const int sz = 2e5+100;
//-------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------
// find gcd of a and b
ll GCD(ll a, ll b) {if(b == 0) return a; else return GCD(b, a%b);}
// find extended gcd, here arr[0] = gcd of a and b, arr[1] = multiplicative modulo inverse of a under modulo b, arr[2] = multiplicative modulo inverse of B under modulo A
void extendGCD(ll a, ll b, ll arr[]) {if(b == 0) {arr[0] = a; arr[1] = 1; arr[2] = 0;} else {extendGCD(b, a%b, arr); ll temp = arr[1]; arr[1] = arr[2]; arr[2] = temp - (a/b)*arr[2];} }
// find (a^b) % m
ll modExp(ll a, ll b, ll m) {ll res = 1; a = a % m; if(a==0) return 0; while (b > 0) {if (b & 1)res = (res * a) % m; a = (a * a) % m; b = b >> 1;} return res;}
// here a and m should be co prime. It will return (1/a) that means, multiplicative modulo inverse of a under modulo m
ll modInverse(ll a, ll m) {ll arr[3]; extendGCD(a, m, arr); return (arr[1]%m+m)%m;} //for non prime m
// here m must be a prime. It will return (1/a) that means, multiplicative modulo inverse of a under modulo m
ll modInversePrime(ll a, ll m) {return modExp(a, m-2, m);}  // for prime m
// find (a+b) % m
ll modAdd(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
// find (a*b) % m
ll modMul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
// find (a-b) % m
ll modSub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
// find (a/b) % m. It works only if m is a prime.
ll modDiv(ll a, ll b, ll m) {a = a % m; b = b % m; return (modMul(a, modInversePrime(b, m), m) + m) % m;}  //only for prime m
// find (a/b) % m. it works only if b and m are co prime (GCD(b, m) == 1).
ll modDiv2(ll a, ll b, ll m) {a = a % m; b = b % m; return (modMul(a, modInverse(b, m), m) + m) % m;}
// find total number of digits
ll numOfDigits(ll n) {return floor(log10(n)+1);}
// find n is a power of 2 or not.
bool powerOfTwo(ll n) {return n && (!(n & (n-1)));}
//------------------------------------------------------------------------------------------------------------------------------------
void solve()
{

}

int main()
{
    fastio();
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}


