#include<string.h>
#include<ctype.h>           
           
bool isPalindrome(char* s) {
    int i=0,j=strlen(s)-1,mid=(i+j)/2;
    while(i<j){
           if(!isalnum(s[i])){
            i++;}
             else if(!isalnum(s[j])){
                 j--;
             }            
              else if(j>=mid && i<=mid){
                if(tolower(s[i])==tolower(s[j])){
                i++,j--;
                 }
              }               
                else 
                return false;
    }
    return true;
}