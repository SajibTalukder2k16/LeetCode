/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low =1;
        int high = n;
        int mid;
        int guessVal;
        while(high>=low){
            mid = low+(high-low)/2;
            guessVal=guess(mid);
            if(guessVal==0){
                return mid;
            }
            else if(guessVal ==-1){
               high = mid-1; 
            }
            else
                low = mid+1;
        }
        return mid;
    }
};