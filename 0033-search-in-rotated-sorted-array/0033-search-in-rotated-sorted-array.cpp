class Solution {
public:
    int search(vector<int>& a, int tar) {
        int l =0 ;
        int r = a.size()-1;
        int mid = 0;
        while(l<=r){
            mid = l+(r-l)/2;
            if(a[mid] == tar) return mid;

            if(a[l] <= a[mid]){
                if(a[l] <= tar && tar <=a[mid]) r =mid-1;
                else l =mid+1;
            }
            else if(a[mid] <= a[r]){
                if(a[mid] <= tar && tar <= a[r] ) l =mid+1;
                else r =mid-1;
            }
          

        }
        return -1;

    }
};