int maxProfit(int* prices, int pricesSize) {
   int min=prices[0],p=0;
    for(int i=0;i<pricesSize;i++){
        if(min>prices[i]){
            min=prices[i];
        }
        else if(prices[i]-min > p){
            p=prices[i]-min;
        }
    }
    return p;
    return 0;
}