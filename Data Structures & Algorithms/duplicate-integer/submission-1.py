class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hs = set(nums)
        nl = len(nums)
        hl = len(hs)
        return nl != hl