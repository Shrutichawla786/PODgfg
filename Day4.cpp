Q.Three way partitioning
code-->    void swap(vector<int>& array , int i , int j){
        int temp = array[j];
        array[j]= array[i];
        array[i]=temp;
    }
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int start=0;
        int mid=0;
        int last= array.size()-1;
        while(mid<=last){
            if(array[mid]<a){
                swap(array , mid , start);
                mid++;
                start++;
            }
            else if(array[mid]>b){
                swap(array , mid , last);
                last--;
            }
            else{
                mid++;
            }
        }
    }
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
