#include<stdio.h>
int main(int argc,char**argv)
{
    printf("�{�b�� argc�O:%d\n",argc);
    for(int i=0;i<argc;i++){
        printf("argv[%d]�O:%s\n",i,argv[i]);
    }
}
