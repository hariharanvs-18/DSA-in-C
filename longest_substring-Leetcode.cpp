int lengthOfLongestSubstring(char* s) {
    int lastseen[256];
    for(int i=0;i<256;i++){
        lastseen[i]=-1;
    }
    int l=0,max=0;
 
    for(int r=0;r<strlen(s);r++){
        char ch=s[r];
         if(lastseen[ch]>=l){
            l=lastseen[ch]+1;
         }
         lastseen[ch]=r;
         int cur=r-l+1;
          if(cur>max){
            max=cur;
          }
    }
    return max;
}