class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0;
        int j=n-1;
        int max_area=0;
        while(i<j)
        {
            max_area=max(max_area, area(i,j,heights));
            if(heights[i]<=heights[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return max_area;
        
    }
    int area(int i, int j, const vector<int> &heights)
    {
        int min_height=min(heights[j], heights[i]);
        return (j-i)*min_height;
    }
};
