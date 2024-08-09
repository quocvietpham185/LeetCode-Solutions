class Solution {
public:
    int pivotInteger(int n) {
        
        
        int a=0;
        for(int i=1;i<=n;i++){
            a=a+i;
            }  
            int trai=0;
           int  phai=a;
        for(int i=1;i<=n;i++){
                phai=phai-i;
                if(trai!=phai){
                    trai=trai+i;
                } else {return i;}
            
        }
        return -1;
    }
};