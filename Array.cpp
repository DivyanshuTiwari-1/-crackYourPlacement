//find duplicates in array
#include<stdio.h>
#include<vector>
using namespace std;
int findDuplicates(vector <int>& nums){
     int left= 0;
     int right= nums.size()-1;
     while (left<right){

        int mid =left+(right-left)/2;
        int count=0;
        for (int num:nums){
            if (count<=mid){
                count++;
            }
        }

        if (count>mid){
            right=mid;
        }
        else left=mid-1;
     }
     return left;
}


// sort color -------------------------------------
class Solution {
public:
    
   
    void sortColors(vector<int>& nums) {
       unordered_map<int,int>seen;
       for (int i=0;i<nums.size();i++){
        if (nums[i]==0||nums[i]==1|| nums[i]==2){
            seen[nums[i]]++;
        }
       }
       int j=0;
       for (int i=0;i<3;i++){
         while (seen[i]>0){
         nums[j]=i;
         j++;
         seen[i]--;

       }
       }
      
    }
};

// kuch nhi ka karna bus 0,1,2 k count store kar lo map ke under phir nums ko replace kardo sorted way me bus
-------------------------------
     class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
---------------------------------
         int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
--------------------------------
       int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        
        int totalprofit=0;
        for (int i=1;i<prices.size();i++){
            if(prices[i]<=buy){
                buy=prices[i];
            }
            else if(prices[i]-buy>0){
                
                totalprofit+=prices[i]-buy;
                buy=prices[i];
            }
        }
        return totalprofit;
    }
------------------------------------
      void moveZeroes(vector<int>& nums) {
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }        
    }
---------------------------
