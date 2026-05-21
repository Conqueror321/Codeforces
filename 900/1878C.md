Given: n, k, x
from [1, n] we need k distinct numbers, their sum must be equal to x

We need to determine when it's not possible:
    1. x is too large
        max < x
    2. x is too small
        min > x

min = 1 + 2 + 3 + ... + k
Sk = k * (a1 + an) / 2 = k * (1 + k) / 2
if Sk > x -> NO

max = n - k + 1 + n - k + 2 + ... + n
Sk = k * (a1 + an) / 2 = k * (n - k + 1 + n) / 2 = k * (2n - k + 1) / 2
if Sk < x -> NO

else:
    YES
Since numbers are chosen from a continuous range [1, n], every sum between min and max is achievable.
