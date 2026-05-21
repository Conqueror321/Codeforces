The condition says that the string must consist of lowercase Latin letters.

So, we can create a string with alphabet letters.

First, we need exactly `b` distinct letters, so we take the first `b` different letters from the alphabet.

Then we need a pattern of length `a`. At this moment, our pattern has length `b`, so we add the first character until the pattern length becomes `a`.

Now we have a pattern of length `a` with exactly `b` distinct letters.

To build the final string of length `n`, we repeat this pattern cyclically:

```cpp
res += pattern[i % a];
