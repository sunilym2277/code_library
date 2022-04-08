void compute(char str[],int n)
{
    int len,i,j,k;
    for(len=1;len<=n;len++)
    {
        for(i=0;i<=n;i++)
        {
            j=i+len-1;
            for(k=0;k<=j;k++)
            {
                printf("%c",str[k]);
            }
            printf("\n");
        }
    }
}

int main()
{
    char str[]="abc";
    compute(str,strlen(str));
}
