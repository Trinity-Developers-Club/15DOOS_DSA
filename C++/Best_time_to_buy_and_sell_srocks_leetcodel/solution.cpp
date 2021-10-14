//Brute Force - O(n^2)

public int maxProfit(int[] prices) {
  int l=prices.length;
  int maxProfit = 0;

  for(int i=0; i<l-1; i++) {
    for(int j=i+1; j<l; j++) {
      int diff = prices[j] - prices[i];
      if (diff > maxProfit) {
        maxProfit = diff;
      }
    }
  }
  
  return maxProfit;
}

/////////////////////////////////////////////////////////////////////////////
//Better Solution - O(n)
public int maxProfit(int[] prices) {
  int l=prices.length;

  int maxProfit = 0;
  int minPrice = prices[0];
  for(int i=1; i<l; i++) {
    maxProfit = Math.max(maxProfit, prices[i]-minPrice);
    minPrice = Math.min(minPrice, prices[i]);
  }

  return maxProfit;
}
