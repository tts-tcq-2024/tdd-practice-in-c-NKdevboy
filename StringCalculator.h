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
    return 0xff;
   }
}

int isCharNumNotvalid(int IsInvalidVal)
{
   if(IsInvalidVal == 0xff)
   {
      return 0;
   }
   else
   {
      return IsInvalidVal;
   }
}

int IslengthLessThanOne(const char *inStr,int StrLen,int *OutVal)
{
  if(StrLen <= 1)
  {
    // *OutVal = CharToInt(*inStr);
     *OutVal = isCharNumNotvalid(CharToInt(*inStr));
      return 1;
  }
  else 
  {
    return 0;
  }
}

int AdditionMain(const char *inStr)
{

   
}
int NoNumCharInStr(const char * input)
{
   for(int i=0;input[i] != NULL ;i++)
   {
      if(0xff != CharToInt(input[i]))
      {
         return 0;
      }
   }
   return 1;
}
int add(const char *input)
{
  int Str_len = 0;
  int returnval = 0;
  Str_len = strlen(input);
  if(IslengthLessThanOne(input,Str_len,&returnval) || NoNumCharInStr(input))
  {
   return (returnval);
  }
  else
  {
     AdditionMain(input);
     return 0;
  }
}
