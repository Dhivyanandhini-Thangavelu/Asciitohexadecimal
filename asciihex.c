#include<stdio.h>
#include<string.h>

void string2hexString(char* input, char* output)
{
    int loop;
    int i; 
    
    i=0;
    loop=0;
    
    while(input[loop] != '\0')
    {
        sprintf((char*)(output+i),"%02X", input[loop]);
        loop+=1;
        i+=2;
    }
   
    output[i++] = '\0';
}

int main(){
    int sum;
    char ascii_str[100] = "";
    printf("Enter your name:");
    scanf("%s",ascii_str);

    int len = strlen(ascii_str);
    char hex_str[(len*2)+1];
    
   
    string2hexString(ascii_str, hex_str);
    
    printf("ascii_str: %s\n", ascii_str);
    printf("hex_str:0x %s\n", hex_str);
    sum=sum+hex_str;
    printf("sum:%x",sum);
    return 0;
}

