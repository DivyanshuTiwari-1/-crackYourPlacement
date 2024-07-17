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
