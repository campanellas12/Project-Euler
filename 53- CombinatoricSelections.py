#How many,not necessarily distinct, values of the binomial coefficient of n
#for(0<n<101) are greater than one-million?


import math

count = 0

for n in range (1,101):
    r = 1
    while(r <= n):
        a = math.factorial(n)
        b = math.factorial(r)
        c = math.factorial(n-r)
        check = a/(b*c)
        if (check > 1000000):
            count +=1
        r+=1

print(count)
