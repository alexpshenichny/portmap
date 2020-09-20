import os
import sys
import socket

try:
 host = str(sys.argv[1]);
 port = int(sys.argv[2]);

 s = socket.socket(socket.AF_INET, socket.SOCK_STREAM);

 def portscan(h, p):
  if s.connect_ex((h, p)):
   print("Your port " + str(p) + " " + "is close!")
   s.close()
  else:
   print("Your port " + str(p) + " " + "is open!")
   os.system("./tools/file tools/result.txt " + str(p) + ", ")
   s.close()

 portscan(host, port)

except:
 print("\nBye\n")
 exit()
