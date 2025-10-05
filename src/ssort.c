void selectionsort(int a[],int len){
        int min;
        for(int i=0;i<len;i++){
                min=i;
                for(int j=i+1;j<len;j++){
                        if(a[min]>a[j]){
                                min=j;
                        }
                }
		int temp=a[min];
        	a[min]=a[i];
        	a[i]=temp;
        }
}
