class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> p , n ;
        int sz = arr.size() ;   

        for(int i=0 ; i<sz ; i++){
            if(arr[i]>0) p.push_back(arr[i]) ;
            else n.push_back(arr[i]);
        }

        for(int j=0 ; j<p.size() ; j++){
            arr[2*j] = p[j] ; arr[2*j+1] = n[j];
        }

        return arr ;
    }
};