import os
import sys
import socket

#os.system("clear")
try:
 host = str(sys.argv[1]);
 port = int(sys.argv[2]);

 s = socket.socket(socket.AF_INET, socket.SOCK_STREAM);

 def portscan(h, p):
  if s.connect_ex((h, p)):
   print("Your port " + str(p) + " " + "is close!")
  else:
   print("Your port " + str(p) + " " + "is open!")
   os.system("./tools/file tools/result.txt " + str(p) + ", ")

 portscan(host, port)

except:
 exit()
