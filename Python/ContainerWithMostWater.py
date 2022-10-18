# Leetcode Problem Link: https://leetcode.com/problems/container-with-most-water/
# Name: Sarah Solarin
# Github ID: Tu-code
# File extension: .py

class Solution:
    # def maxArea(self, height: List[int]) -> int:
    def maxArea(self, height):
        l, r = 0, len(height) - 1
        res = 0

        while l < r:
            res = max(res, min(height[l], height[r]) * (r - l))
            if height[l] < height[r]:
                l += 1
            elif height[r] <= height[l]:
                r -= 1
        return res