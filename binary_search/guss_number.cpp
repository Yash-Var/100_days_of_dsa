// /** 
//  * Forward declaration of guess API.
//  * @param  num   your guess
//  * @return 	     -1 if num is higher than the picked number
//  *			      1 if num is lower than the picked number
//  *               otherwise return 0
//  * int guess(int num);
//  */

// class Solution {
// public:
    
//         int guessNumber(int n) {
//         if(guess(n) == 0){
//             return n;
//         }
//         int start = 1, end = n, mid;
//         while(start <= end){
//             mid = start + (end - start) / 2;
//             if(guess(mid) == 0){
//                 break;
//             }else if(guess(mid) == 1){
//                 start = mid;
//             }else if(guess(mid) == -1){
//                 end = mid;
//             }
//         }
//         return mid;
//     }
    
// };