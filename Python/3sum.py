# Leetcode Problem Link: https://leetcode.com/problems/3sum/
# Name: Sarah Solarin
# Github ID: Tu-code
# File extension: .py

class Solution:
    # def threeSum(self, nums: List[int]) -> List[List[int]]:
    def threeSum(self, nums):
        ans = []
        nums.sort()

        for i, n in enumerate(nums):
            if i > 0 and n == nums[i - 1]:
                continue

            l, r = i + 1, len(nums) - 1
            while l < r:
                threeSum = n + nums[l] + nums[r]
                if threeSum > 0:
                    r -= 1
                elif threeSum < 0:
                    l += 1
                else:
                    ans.append([n, nums[l], nums[r]])
                    l += 1
                    while nums[l] == nums[l - 1] and l < r:
                        l += 1
        return ans
