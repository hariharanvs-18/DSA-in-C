int cmp(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}

bool isAnagram(char* s, char* t) {
  int len1=strlen(s);
  int len2=strlen(t);
   if(len1!=len2){
    return false;
   }
   qsort(s,len1,sizeof(char),cmp);
   qsort(t,len2,sizeof(char),cmp);
    
  return strcmp(s,t)==0;
}