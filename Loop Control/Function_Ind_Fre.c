 #include<stdio.h>

void how(){
    printf("\nHow are you ????");
}
void indian(){
    printf("NAMASTE");
    how();                    //function inside function
}
void french(){
    printf("BONJOUR");
    how();
}

int main(){
    char a;                //i-indian  f-french
    printf("enter f-french & i-indian :");
    scanf("\n%c",&a);

    if (a=='i'){
        indian();
    }
    else{
        french();
    }
    return 0;
}