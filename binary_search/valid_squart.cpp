
//https://leetcode.com/problems/valid-perfect-square/submissions/

// class Solution {
// public:
//     bool isPerfectSquare(int num) {
//         long long low=1,high=num,ans=-1;
//         while(low<=high)
//         {
//             long long mid=low+(high-low)/2;
//             long long msq=mid*mid;
//             if(msq==num)
//                 return true;
//             else if(msq>num)
//                 high=mid-1;
//             else if(msq<num)
//                 low =mid+1;
//             else return false;
//         }
//         return 0;
      
//     }
// };