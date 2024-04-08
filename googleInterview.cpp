bool binarySearchOnMatrix(int matrix[][], int start ,int end,int target){
    if(start <= end){
        int mid = (start+end)/2;
        int row = mid/matrix[0].size();
        int col = mid%matrix[0].size();

        if(matrix[row][col]==target ){
            return true;
        }
        if(matrix[row][col] <target){
            return binarySearchOnMatrix(matrix,mid+1,end,target);
        }
        else{
            return binarySearchOnMatrix(matrix,start,mid-1,target);
        }

    }
    return false;
}
