class Solution {
    public:
      
    unsigned int countSetBits(unsigned int n)
    {
      unsigned int count = 0;
      while (n) {
          count += n & 1;
          n >>= 1;
      }
      return count;
  }
    
      int is_bleak(int n) {
          
          for(int x=max(0,n-32);x<n;x++){
              if(x+countSetBits(x)==n){
                  return 0;
              }
          }
          return 1;
        
      }
  };


  
  
  