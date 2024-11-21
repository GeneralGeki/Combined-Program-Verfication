int binsearch(int x)
{
  int a[16];
  signed low = 0, high = 16;

  while(low < high)
  {
    signed middle = low + ((high - low) >> 1);

    if(a[middle] < x)
      high = middle;
    else if(a[middle] > x)
      low = middle + 1;
    else // a[middle]==x
      return middle;
  }

  return -1;
}

/* cbmc binsearch.c --function binsearch --unwind 6 --bounds-check --unwinding-assertions 
leaving --unwind 6 out woulrd result in an endlessly running verifier
(not sure if metaphorically or litterally)
*/