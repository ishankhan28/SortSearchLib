void insertionsort(int* a,int len){
        int temp,j;
        for(int i=1;i<len;i++){
                temp=a[i];
		j=i-1;
                while(temp<a[j] && j>=0){
                	a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
        }
}
