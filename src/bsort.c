void bubblesort(int* a,int len){
        int flag=0;
        for(int i=1;i<len;i++){
                flag=0;
                for(int j=1;j<len+1-i;j++){
                        if(a[j]<a[j-1]){
                                flag=1;
				int temp=a[j];
        			a[j]=a[j-1];
        			a[j-1]=temp;
                        }
                }
                if(flag==0) break;
        }
}
