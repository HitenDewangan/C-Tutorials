
            int p = 1;
            for(int j=0; j<count; j++){
                p = p*d; 
            }
            sum += p;
            m = m/10;
    }

    if(sum == num){
        printf("It is an ARMSTRONG number.");
    }
    else{
        printf("NOT an Armstrong number.");
    }

}