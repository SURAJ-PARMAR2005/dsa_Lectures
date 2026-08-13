class Solution {
public:
    double minPrice(vector<int>& price, vector<int>& discounts) {
        sort(price.begin(),price.end());
        sort(discounts.begin(),discounts.end());
        int n = price.size();
        int m = discounts.size();
        int i = n-1;
        int j = m-1;
        double ans = 0;
        while(j>=0 && i>=0){
            double currPrice = (double)price[i];
            double currDiscount = (double)discounts[j];
            double afterDiscountPrice = (currPrice * (100-currDiscount))/100;
            // cout<<afterDiscountPrice<<endl;
            ans += afterDiscountPrice;
            i--;
            j--;
        }
        cout<<"i = "<<i<<endl;

        while(i >=0){
            ans += (double)price[i];
            // cout<<ans<<endl;
            i--;
        }

        return ans;
    }
};