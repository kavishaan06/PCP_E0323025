bool canThreePartsEqualSum(int* arr, int arrSize){
    int sum=0;
    for(int i=0;i<arrSize;i++){
        sum=sum+arr[i];
    }
    if(sum%3!=0){
        return false;
    }
    int msum=0;
    int mcount=0;
    int average=sum/3;
    for (int i=0;i<arrSize;i++){
        msum+=arr[i];
        if (msum==average){
            ++mcount;
            msum=0;
        }
    }
    return mcount>=3;
}

int main(){
    
}