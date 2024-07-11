
int nullCheck(const char *input)
{
 // if(*input == '0'||input !=NULL)  need to write 
  if(*input == '0')
  {
    returnval = 0;
  }
  else
  {
    returnval = -1;
  }
}




int add(const char *input)
{
  int returnval = -1;
  int Str_len = 0;
  Str_len = strlen(input);
  returnval = nullCheck(input)


  return returnval;
}
