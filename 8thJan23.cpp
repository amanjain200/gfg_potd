/*
149. Max Points on a Line

Given an array of points where points[i] = [xi, yi] represents a point on 
the X-Y plane, return the maximum number of points that lie on the same straight line.

Example 1:

Input: points = [[1,1],[2,2],[3,3]]
Output: 3
Example 2:

Input: points = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]
Output: 4

Constraints:

1 <= points.length <= 300
points[i].length == 2
-104 <= xi, yi <= 104
All the points are unique.
*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxCount = 0;

        map<float, int> mp;

        int size = points.size();

        for(int i=0; i<size-maxCount; i++){
            int temp = 0;
            for(int j=i+1; j<size; j++){
                float slope = 0;
                if(points[i][1] == points[j][1]){
                    slope = 10000001;
                    mp[slope]++;
                }
                else{
                    slope = ((float)points[i][0] - points[j][0])/((float)points[i][1] - points[j][1]);
                    mp[slope]++;
                }
                if(mp[slope] > temp){
                    temp = mp[slope];
                }
            }
            mp.clear();
            maxCount = max(maxCount, temp);
        }

        return maxCount+1;
    }
};

