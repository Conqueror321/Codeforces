This task is pretty easy. (Div. 3 A)

x + 2x + 4x + ... + 2^(k - 1) * x = n
x * (1 + 2 + 4 + 2^(k - 1)) = n
It's a geometric progression with q = 2, b1 = 1
Formula: Sn = (b1 * (q^n - 1)) / (q - 1)
In our case: Sk = (1 * (2^k - 1)) / (2 - 1) = 2^k - 1
We have: x * (2^k - 1) = n
We need to find x: x = n / (2^k - 1)
But we don't know what k is. How to find it?
We know that n <= 10^9 <= 1,000,000,000
In terms of k > 1: 2^30 = 1,073,741,824 
So, k is not bigger than 30.
Go from 2 to 30, then check if n % (2^i - 1) == 0
If true: then print n / (2^i - 1)
