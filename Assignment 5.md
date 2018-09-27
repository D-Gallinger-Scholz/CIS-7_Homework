Part 1

```
Show that the square root of 2 is irrational.
```

Contradiction:

Irrational numbers are any numbers that cannot be expressed as a ratio of two integers, so assume that √2 is rational.

- √2 = p/q
- 2 = (p/q)^2
- 2 = p^2/q^2
- 2q^2 = p^2
- 2q\*q = p\*p
- 2(2q) = 2p
- 4q = 2p
- 2q = p

Now substitute p = 2q back into √2 = p/q:

- √2 = 2q/q
- √2 = 2

The statement "√2 = 2" is false, so √2 is not rational. Therefore the negation of this statement is true and √2 is irrational.

```
If n = 25, 100, or 169, then n is a perfect square and is the sum of two perfect squares.
```
 
Exhaustive:

- When n = 25, √n = 5 and n can be written as the sum of 16 (4^2) and 9 (3^2)
- When n = 100, √n = 10 and n can be written as the sum of 64 (8^2) and 36 (6^2)
- When n = 169, √n = 13 and n can be written as the sum of 144 (12^2) and 25 (5^2)

```
The sum of two odd integers is even.
```

Assume the Antecedent:

Let there be two odd integers, x = 2m + 1 and y = 2n + 1:
- x + y = 2m + 2n + 2
- x + y = 2(m + n + 1)
- m + n + 1 is still an integer, so let m + n + 1 = k
- x + y = 2k
- 2k is even, so x + y is even.

```
The sum of an even integer and it's square is even
```

Assume the Antecedent:

Let there be one integer, x = 2m:
- x + x^2 = 2m + (2m)^2
- x + x^2 = 2m + 4m^2
- x + x^2 = 2m + 4(m\*m)
- x + x^2 = 2m + 4(2m)
- x + x^2 = 2m + 8m
- x + x^2 = 2(5m)
- 5m is still an integer, so 5m = k
- x + x^2 = 2k
- 2k is even, so x + x^2 is even

```
If n squared is odd, then n is odd
```

Contrapositive law:

Prove the contraposition (E'): "If n is not odd (i.e. even), then n squared is not odd (i.e. even)":
- let n = 2m
- n^2 = (2m)^2
- n^2 = 4(m^2)
- n^2 = 4(m\*m)
- n^2 = 4(2m)
- n^2 = 2(4m)
- 4m is still an integer, so 4m = k
- n^2 = 2k
- 2k is even, so n^2 is even

Since the contraposition E' is true, the original statement must also be true.

Part 2

```
Prove by induction that 1 + 5 + 9 + ... + (4n-3) = n(2n-1)
```

1) Base case: n = 1; 4\*1 - 3 = 1, 1(2\*1 - 1) = 1(1) = 1
2) Test for n + 1: 
 - n(2n - 1) + (4(n + 1) - 3) = (n + 1)(2(n + 1) - 1)
 - 2n^2 - n + 4n + 4 - 3 = (n + 1)(2n + 1)
 - 2n^2 +3n + 1 = 2n^2 + 3n + 1
3) Therefore every n is true.

```
Prove that for any positive integer number n, n^3 + 2n is divisible by 3
```

1) Base case: n = 1; 1^3 + 2(1) = 1 + 2 = 3, which is divisible by 3
2) Test for n + 1: n^3 + 2n = 3m
 - (n + 1)^3 + 2(n + 1) = 3m
 - (n + 1)(n + 1)(n + 1) + 2n + 2 = 3m
 - (n^2 + 2n + 1)(n + 1) + 2n + 2 = 3m
 - n^3 + n^2 + 2n^2 +2n + n + 1 + 2n + 2 = 3m
 - n^3 + 3n^2 + 5n + 3 = 3m
 - 3n^2 + 3n + 3 + n^3 +2n = 3m
 - n^3 + 2n = 3m, so 3n^2 + 3n + 3 + 3m = 3m
 - 3(n^2 + n + 1 + m) = 3m
 - n^2 + n + 1 + m is still an integer, so n^2 + n + 1 + m = k
 - 3(k) = 3m
 - Both sides are divisible by 3
3) Therefore every n is true.

```
Prove that for n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers
```

1) Base case: n = 1; (9^1) - 1 = 9 - 1 = 8, which is divisible by 8
2) Test for n + 1: 9^n - 1 = 8m
 - 9^(n + 1) - 1 = 8m
 - because x^(y + z) = x^y(x^z): 9(9^n) - 1 = 8m
 - because 9^n = 8m + 1: 9(8m + 1) - 1 = 8m
 - 72m + 8 = 8m
 - 8(9m + 1) = 8m
 - 9m + 1 is still an integer, so 9m + 1 = k
 - 8(k) = 8m
 - Both sides are divisible by 8
3) Therefore every n is true.
