class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        nums.sort()
        dic={}
        list1=set()
        for i in nums:
            if i not in list1:
                list1.add(i)
        for num in nums:
            dic[num] = dic.get(num, 0) + 1
        dic1 = dict(sorted(dic.items(), key=lambda x: x[1],       reverse=True))
        keys = list(dic1.keys())
        list2=[]
        for i in range(0,k):
            list2.append(keys[ i])
        return list2
                