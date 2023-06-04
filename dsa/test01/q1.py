# Move Zeroes
# Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

# Note that you must do this in-place without making a copy of the array.

# Example 1:
# Input: nums = [0,1,0,3,12]
# Output: [1,3,12,0,0]

# Example 2:
# Input: nums = [0]
# Output: [0]

# Constraints:
# a. 1 <= nums.length <= 10^4
# b. -2^31 <= nums[i] <= 2^31 - 1

# Note: Create a GitHub file for the solution and add the file link the the answer section below.

nums = [0,1,0,3,12]
n=len(nums)
j=0
for i in range(n):
    if nums[i]!=0:
        t=nums[i]
        nums[i]=nums[j]
        nums[j]=t;
        j+=1
for i in nums:
    print(i,end=" ")
