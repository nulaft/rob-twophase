#ifdef _WIN32
  #include <intrin.h>

  inline int find_first_set(unsigned long long i)
  {
    unsigned long index;
    if (_BitScanForward64(&index, i))
      return index;
    return 0;
  }
  
  inline int find_first_set(unsigned long i)
  {
    unsigned long index;
    if (_BitScanForward(&index, i))
      return index;
    return 0;
  }

  inline int find_first_set(unsigned int i)
  {
    return find_first_set(static_cast<unsigned long>(i));
  }
#else
  #include <cstring>

  inline int find_first_set(unsigned long long i)
  {
    return ffsll(i) - 1;
  }
  
  inline int find_first_set(unsigned long i)
  {
    return ffsl(i) - 1;
  }

  inline int find_first_set(unsigned int i)
  {
    return ffs(i) - 1;
  }
#endif
