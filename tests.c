
int test_bitAnd(int x, int y)
{
  return x&y;
}

int test_getByte(int x, int n)
{
    unsigned char byte;
    switch(n) {
    case 0:
      byte = x;
      break;
    case 1:
      byte = x >> 8;
      break;
    case 2:
      byte = x >> 16;
      break;
    default:
      byte = x >> 24;
      break;
    }
    return (int) (unsigned) byte;
}

int test_logicalShift(int x, int n) {
  unsigned u = (unsigned) x;
  unsigned shifted = u >> n;
  return (int) shifted;
}


int test_allEvenBits(int x) {
  int i;
  for (i = 0; i < 32; i+=2)
      if ((x & (1<<i)) == 0)
   return 0;
  return 1;
}

int test_bang(int x)
{
  return !x;
}

int test_tmax(void) {
  return 0x7fffffff;
}

int test_fitsBits(int x, int n)
{
  int TMin_n = -(1 << (n-1));
  int TMax_n = (1 << (n-1)) - 1;
  return x >= TMin_n && x <= TMax_n;
}

int test_divpwr2(int x, int n)
{
    int p2n = 1<<n;
    return x/p2n;
}

int test_negate(int x) {
  return -x;
}

int test_isPositive(int x) {
  return x > 0;
}

int test_isLessOrEqual(int x, int y)
{
  return x <= y;
}
