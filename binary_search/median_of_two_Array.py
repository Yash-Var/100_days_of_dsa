# https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        re=[]
        n=len(nums1)+len(nums2)
        j,k=0,0
        for i in range(n):
            if i<len(nums2):
                re.append(nums2[i])
                i+=1
            else:
                re.append(nums1[j])
                j+=1
        
        re.sort()
        if n%2!=0:
            mid=int(n/2)
            return re[mid]
        else:
            mid1=int(n/2)
            mid2=int(n/2)-1
            nn=(re[mid1]+re[mid2])/2
            return nn