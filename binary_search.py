def binary_search (ls, start, end, val):
if end >= start:
   mid = start + (end- start)//2
   if ls[mid] == val:
      return mid
   elif ls[mid] > val:
      return binary_search(ls, start, mid-1, val)
   else:
      return binary_search(ls, mid+1, end, val)
   else:
      return -1
