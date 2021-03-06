void strrev(char *s)
{
  char *e;               
  int left=0;                        /* Count of characters left to swap */
  char temp;                         /* For swap */

  /* If length of string is less than 2, don't bother.
   * Note short-circuiting here---it's VERY IMPORTANT.
   * If s has length 0, so that s[0] == '\0', it's ESSENTIAL that the
   * computer does NOT go and try to look at s[1] anyway, because that's
   * off the end of the array. */
  if (s[0] == '\0' || s[1] == '\0')
    return;
  
  /* e starts at string end, s at beginning.  We march s forward
     and e backwards, simultaneously, swapping the characters that
     e and s point to.  Thus the first character swaps with the last, 
     the second with the next-to-last, and soforth. */

  /* First, point e at end of s and compute length of s: */

  for (e=s; *e != '\0'; e++)
    left++;
  /* e now points to NUL character at end of s. left is the number of 
     characters we have to swap. */

  e--;        
  /* e now points at last character in s. */


  while (left > 1) {            /* If there's only one character left, 
                                   it's in the middle of the string anyway,
                                   so stop. */
    

    temp = *s; *s = *e; *e = temp; /* Swap characters at beginning and end */
    s++; e--;                      /* Move towards middle of string  */
    left -= 2;                     /* two fewer characters to swap. */
  }

}
