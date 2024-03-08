// Online C compiler to run C program online
    #include <stdio.h>
    
    char * StrCpy(char *dest ,char *src)
    {
         char *res = dest;
        if(dest == NULL || src  == NULL || src[0] == 0)
        return NULL;
       
       // src[0]='B';
        printf(" StrCpy: src=[%x],dest=[%x]\n ",src, dest);
        while  ( *src)
        {
            *dest = *src;
            dest++;
            src++;
        }
        printf("StrCpy:src=[%x],dest=[%x]\n ",src, dest);
        return res;
    }
    
    int main() {
        // Write C code here
        printf("Hello world\n");
        
        char dest[10]={};
        char src[10]={};
        printf("src=[%x],dest=[%x] \n",src, dest);
        
        
        printf("Dest : [%s], res=[%s] \n",dest,StrCpy(dest, src));
        
        
        return 0;
    }