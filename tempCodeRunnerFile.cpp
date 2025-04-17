 /*
    WAP to print the following pattern: 
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
  */
  int n=4;
  for(int i=0; i<4; i++)
  {
    //for spaces:
    for(int j=n-i-1; j<n-i-2; j--)
    {
      cout << " ";
    }
    //numbers:
    for(int j=1; j<=i+1; j++)
    {
      cout << j;
    }
  }