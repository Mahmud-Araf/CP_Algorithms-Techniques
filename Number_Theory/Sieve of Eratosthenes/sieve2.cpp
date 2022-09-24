//implementation of sieve of eratosthenes

/* Sieve of Eratosthenes is the algorithm to precalculate prime numbers upto  any number n effectively

Time Complexity:O(n)
*/

const long long int N=100001;
vector<long long int>prime,spf(N);
vector<bool>is_prime(N,true);

void sieve()
{
    is_prime[0]=is_prime[1]=false;

    for(int i=0;i<N;i++)
    {
        if(is_prime[i])
        {
            prime.push_back(i);
            spf[i]=i;
        }
        for(int j=0;j<prime.size() && i*prime[j]<N && prime[j]<=spf[i];j++)
        {
            is_prime[i*prime[j]]=false;
            spf[i*prime[j]]=prime[j];
        }
    }
    for(auto i:prime)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}