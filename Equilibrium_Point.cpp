class Solution{
  public:
  // Function to find equilibrium point in the array.
  // a: input array
  // n: size of array
  int equilibriumPoint(10ng long a[], int n) 
  {
    long long int rsum=0;
    long long int Isum=0;
    for(int i=0;i<n;i++)
    {
      rsum += a[i];
    }
    for(int i=0;i<n;i++)
    {
       rsum -= a[i];
       if(rsum == lsum)
       {
         retrun i+1;
        }
       lsum += a[i];
    }
     return -1;
   }
}


