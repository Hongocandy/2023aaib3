#week11-2.py Leetcode 2461. Maximum Sum of ...
nums = [1,1,1,2,3] #��J���
from collections import Counter
counter = Counter() #����p�g�A�k��j�g
for num in nums:
  counter[num] +=1

print(counter)
