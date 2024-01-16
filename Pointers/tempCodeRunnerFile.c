int main(){
    char a[] = "quiz";

    int *p;
    int len = strlen(a);

    p = &len;

    printf("%c\n",a[*p+2]);
}