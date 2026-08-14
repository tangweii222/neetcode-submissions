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
        // sort by start
        sort(intervals.begin(), intervals.end(), 
            [](Interval& a, Interval& b)
                {
                    return a.start<b.start;
                }
        );

        // 因為sort過 只要比較前後就好 我理街應該是後就好
        for(int i=0; i+1<intervals.size(); i++){
            int r = intervals[i].end;
            int l = intervals[i+1].start;
            if(l<r) return false;
        }
        return true;
    }
};
