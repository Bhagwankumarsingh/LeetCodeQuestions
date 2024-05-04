class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size=flowerbed.size();
         for (int i = 0; i < size && n > 0; ++i) {
            if (flowerbed[i] == 0) {
                // Check previous and next plot availability
                bool emptyPrev = (i == 0 || flowerbed[i-1] == 0);
                bool emptyNext = (i == size-1 || flowerbed[i+1] == 0);

                if (emptyPrev && emptyNext) {
                    // Plant a flower
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
        return n <= 0;
    }
};