#include<iostream>
using namespace std;
bool isPrime(long long n)
{
    if(n==2)  return true;
    if(n<2 || n%2==0)  return false;
    for(int i=3; i*i<=n; i++)
    {
        if(n%i==0)  return false;
    }
    return true;
}
int main()
{
    cout<<isPrime(25)<<endl;
}