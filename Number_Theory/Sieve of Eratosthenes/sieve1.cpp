//implementation of sieve of eratosthenes

/* Sieve of Eratosthenes is the algorithm to precalculate prime numbers upto  any number n effectively

Time Complexity:O(nlog(log(√n)))
*/
bool is_prime[1000001];
void sieve(int n)
{
    fill(is_prime,is_prime+n+1,true);
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                is_prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(is_prime[i])
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

}
