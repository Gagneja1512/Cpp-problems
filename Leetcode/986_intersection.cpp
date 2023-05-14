class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans ;

        int n = firstList.size() , m = secondList.size();
        int i=0 , j=0;
        while(i<n && j<m){
            if(firstList[i][1] >= secondList[j][1]){
                if(firstList[i][0] <= secondList[j][1]){
                    int start = max(firstList[i][0] , secondList[j][0]);
                    int end = secondList[j][1] ;

                    vector<int> t ;
                    t.push_back(start) , t.push_back(end);
                    ans.push_back(t);
                }

                j++ ;
            }else{
                if(firstList[i][1] >= secondList[j][0]){
                    int start = max(firstList[i][0] , secondList[j][0]);
                    int end = firstList[i][1] ;

                    vector<int> t ;
                    t.push_back(start) , t.push_back(end);
                    ans.push_back(t);
                }

                i++ ;
            }
        }

        return ans ;
    }
};