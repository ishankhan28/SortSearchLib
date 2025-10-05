int lomutoAlgo(int* a,int low ,int high){
        int pivot=high;
        int i=-1;
        for(int j=0;j<=high;j++){
                if(a[j]<a[pivot]){
                        i++;
			int temp=a[i];
        		a[i]=a[j];
        		a[j]=temp;
                }
        }
        i++;
	int temp=a[i];
	a[i]=a[pivot];
	a[pivot]=temp;
        return i;
}
void quicksort(int* a,int low,int high){
        if(low<high){
                int pivot=lomutoAlgo(a,low,high);
                quicksort(a,low,pivot-1);
                quicksort(a,pivot+1,high);
        }
}
