class Solution(object):
    def hasDuplicate(self, nums):
        if len(set(nums)) == len(nums):
            return False
        else:
            return True