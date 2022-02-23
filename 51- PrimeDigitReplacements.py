import math

def SieveOfEratosthenes(n):
    
    # Create a boolean array "prime[0..n]" and initialize
    # all entries it as true. A value in prime[i] will
    # finally be false if i is Not a prime, else true.
    prime = [True for i in range(n + 1)]
    p = 2
    while (p * p <= n):
        
        # If prime[p] is not changed, then it is a prime
        if (prime[p] == True):
            
            # Update all multiples of p
            for i in range(p ** 2, n + 1, p):
                prime[i] = False
        p += 1
    prime[0]= False
    prime[1]= False
    # Print all prime numbers
    for p in range(n + 1):
        if prime[p]:
                primes.append(p)

SieveOfEratosthenes(19000)
primes = []

for i in primes:
    for z in combinatoric(i-1):
        
        
    
    a = math.factorial(n)
    b = math.factorial(r)
    c = math.factorial(n-r)
    check = a/(b*c)
    

