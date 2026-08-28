class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrunk = numBottles;
        int emptyBottles = numBottles;
        
        while (emptyBottles >= numExchange) {
            
            int newBottles = emptyBottles / numExchange;
            int remainingEmpty = emptyBottles % numExchange;
            totalDrunk += newBottles;
            emptyBottles = newBottles + remainingEmpty;
        }
        
        return totalDrunk;
    }
};