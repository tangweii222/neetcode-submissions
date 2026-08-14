/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        int i=0;
        int j=i+1;
        while(i<intervals.size()){
            while(j<intervals.size()){
                int l1 = intervals[i].start;
                int l2 = intervals[j].start;
                int l,r;
                if(l1<=l2){
                    l = l2;
                    r = intervals[i].end;
                }
                else{
                    l = l1;
                    r = intervals[j].end;
                }
                if(l<r){
                    return false;
                }
                j++;
            }
            i++;
            j=i+1;
        }
        return true;

    }
};
