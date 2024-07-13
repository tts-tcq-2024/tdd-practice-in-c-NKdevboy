int CharToInt(const char CutChar)
{
   int value = 0xff;
   value = (CutChar - '0');
   if((value >= 0) && (value <= 9))
   {
    return value;
   }
   else
   {
    return 0;
   }
}

int IslengthLessThanOne(const char *inStr,int StrLen,int *OutVal)
{
  if(StrLen <= 1)
  {
     *OutVal = CharToInt(*inStr);
      return 1;
  }
  else 
  {
    return 0;
  }
}

int add(const char *input)
{
  int Str_len = 0;
  int returnval = 0xFF;
  Str_len = strlen(input);
  if(1==IslengthLessThanOne(input,Str_len,&returnval))
  {
   return returnval;
  }
  else
  {
   return 3;
  }
}
