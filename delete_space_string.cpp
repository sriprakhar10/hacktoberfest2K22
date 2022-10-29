/*  C++ Program to Delete or Remove Spaces from a String  */

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char str[80],str1[80];
        int i=0, len, j;
        cout<<"\nEnter any string :: ";
        gets(str);

        strcpy(str1,str);

        len=strlen(str);

        for(i=0; i<len; i++)
        {
                if(str[i]==' ')
                {
                        for(j=i; j<len; j++)
                        {
                                str[j]=str[j+1];
                        }
                len--;
                }
        }
        cout<<"\nString [ "<<str1<<" ] after removing spaces = "<<str<<"\n";

        return 0;
}
