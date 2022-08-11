double myPow(double x, long n) {
        if(n == 0){
            return 1;
        }
        
        double pow = myPow(x, n/2);
        if(n%2 == 0){
            return pow*pow;
        }
        else{
            if(n>0){
                return pow*pow*x;
            }
            else{
                return pow*pow/x;
            }
        }
        
    }
