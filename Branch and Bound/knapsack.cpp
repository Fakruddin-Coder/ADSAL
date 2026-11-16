#include <iostream>
#include <algorithm>
using namespace std;

int n, W;
int weight[20], profit[20], bestProfit = 0;

void knapsack(int i, int w, int p) {
    if (w > W)
        return;

    if (p > bestProfit)
        bestProfit = p;

    if (i == n)
        return;


    int bound = p;
    int totalWeight = w;

    for (int j = i; j < n; j++) {
        if (totalWeight + weight[j] <= W) {
            totalWeight += weight[j];
            bound += profit[j];
        }
    }

    
    if (bound <= bestProfit)
        return;


    knapsack(i + 1, w + weight[i], p + profit[i]);

    knapsack(i + 1, w, p);
}

int main() {
    cout << "Enter number of items: ";
    cin >> n;

    cout << "Enter weight and profit of each item:\n";

    for (int i = 0; i < n; i++)
        cin >> weight[i] >> profit[i];

    cout << "Enter knapsack capacity: ";
    cin >> W;

    knapsack(0, 0, 0);

    cout << "Maximum Profit = " << bestProfit << endl;

    return 0;
}
