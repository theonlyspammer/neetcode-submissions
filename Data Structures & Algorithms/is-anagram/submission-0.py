class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
            g=sorted(s)
            f=sorted(t)
            if (g == f):
                return True
            return False
