class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        dul=False
        list1=set()
        for i in nums:
            if i not in list1:
                list1.add(i)
            elif i in list1:
                dul=True
                break
        return dul
