N = int(input("Enter N: "))

# Task 1: Sieve algorithm
prime = [i for i in range(N + 1)]

prime[0] = 0
if N >= 1:
    prime[1] = 0

for p in range(2, int(N**0.5) + 1):
    if prime[p] != 0:
        for i in range(p * p, N + 1, p):
            prime[i] = 0


found_primes = []
for i in range(2, N + 1):
    if prime[i] != 0:
        found_primes.append(prime[i])

print("\n Task 1 Results ")
print("Prime numbers found:", found_primes)

# Task 2:
only_primes = [0] + found_primes 

print("\n Task 2 Results ")
print("Value:", " ".join(map(str, only_primes[1:])))
print("Index:", " ".join(map(str, range(1, len(only_primes)))))