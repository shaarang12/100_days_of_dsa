// #include<stdio.h>
// int bestTime(int* stock, int size){
//     int profit = 0;
//     for(int i = 0; i < size - 1; i ++){
//         for(int j = i + 1; j < size; j ++){
//             if(stock[j] - stock[i] > profit)
//             profit = stock[j] - stock[i];
//         }
//     }
//     return profit;
// }
// void main(){
//     int stock[] = {5,4,3,2,1};
//     int profit = bestTime(stock, sizeof(stock)/4);
//     printf("Max Profit: %d\n", profit);
// }

#include<stdio.h>
int bestTime(int* stock, int size){
    int profit = 0;
    int buyDay = stock[0];
    for(int i = 1; i < size; i ++){
        if(stock[i] < buyDay)
        buyDay = stock[i];

        int currentPrice = stock[i] - buyDay;
        if(currentPrice > profit)
        profit = currentPrice;
    }
    return profit;
}
void main(){
    int stock[] = {5,4,3,2,1,7,0,8};
    int profit = bestTime(stock, sizeof(stock)/4);
    printf("Max Profit: %d\n", profit);
}