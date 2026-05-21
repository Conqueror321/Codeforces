The main idea is to use prefix sums.
At first, I tried several approaches, but they caused a time limit error because I was recalculating the sum from l to r for every query. (it's very long, because imagine if l = 1 r = n, time complexity would be O(n))
Prefix sums allow us to get old sum from l to r in O(1).
For each query, we calculate the new total sum using the formula:
    formula = total - old_segment_sum + (r - l + 1) * k