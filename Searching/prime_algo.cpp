// A fast an accurate to find if a number is prime
//All prime numbers are of the form 6k+1 or 6k-1 except 2 and 3
int isprime(n)
{
    if(n==2)
        return 1;
    if(n==3)
        return 1;
    if(n%2 == 0)
        return 0;
    if (n%3 == 0)
        return 0;
    int i = 5,w=2;
    while ((i * i) <= n)
    {
         if(n%i==0)
            return 0;
        i += w;
        w=6-w;
    } 
    return 1;
}
    