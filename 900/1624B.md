The topic is: Arithmetic Progression
The main property is: 2 * b = a + c
Evidence: a1 a2 a3
a1 = a1
a2 = a1 + d
a3 = a1 + 2d

if a1 + a3 = 2a1 + 2d = 2(a1 + d)
But we know that a1 + d is a2, so we can conclude: a1 + a3 = 2 * a2
------------------------------------
Based on the property: 2 * b = a + c 
a' = 2 * b - c
b' = (a + c) / 2
c' = 2 * b - a

we just need to check if (a' > 0 && a' % a == 0) || (b' > 0 && b % b == 0) || (c' > 0 && c' % c == 0) -> True
otherwise False
Why a', b', c' > 0?
Based on the problem, it's said that m is positive
For example: 10 5 30
a' = 10 - 30 = -20  -20 / 5 = -4(m), but it is negative.
