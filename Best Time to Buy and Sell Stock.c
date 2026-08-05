int maxProfit(int* prices, int pricesSize) {
    int min = *prices;
    int maxProf = 0;

 
    for(int i = 0; i < pricesSize; i++){
    
        if(prices[i] - min > maxProf){
            maxProf = prices[i] - min;
        }
        if(prices[i] < min){
            min = prices[i];
        }
    }
    return maxProf;
}
