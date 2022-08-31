#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define el "\n";
#define Invincible ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
typedef long long ll;
bool isPrime(ll n)
{
    if(n==2)  return true;
    if(n<2 || n%2==0)  return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0) 
            return false;
    }
    return true;
}
int main()
{
    Invincible
    cout<<"Hello GitHub"<<el
    cout<<isPrime(13)<<el
}