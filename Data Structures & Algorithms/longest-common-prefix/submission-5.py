class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        a = strs[0]
        b = ""
        for i in range(0,len(a)):
            for j in strs:
                if(len(j)<=i):
                    return b
                elif(a[i]!=j[i]):
                    return b   
            b+=a[i]
        return b
