# First Unique Character in a String

# Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

# Example 1:
# Input: s = "leetcode"
# Output: 0

# Example 2:
# Input: s = "loveleetcode"
# Output: 2

# Example 3:
# Input: s = "aabb"
# Output: -1

# Constraints:
# a. 1 <= s.length <= 10^5
# b. s consists of only lowercase English letters.

# Note: Create a GitHub file for the solution and add the file link the the answer section below.

s="leetcode"
fre=[0]*26
for i in range(len(s)):
    fre[ord(s[i])-ord('a')]+=1
check=0
for i in range(len(s)):
    if(fre[ord(s[i])-ord('a')]==1):
        print(i)
        check=1
        break
if check==0:
    print(-1)