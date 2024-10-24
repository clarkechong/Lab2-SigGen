import math
import string
f = open("sinerom.mem","w")
for i in range(256):
    # one time period is i = 256
    # 2*3.1416*i/256 splits one time period into segments of i
    # *127 + 127 makes it [127:0] for finer integer precision
    v = int(math.cos(2*3.1416*i/256)*127+127) 
    if (i+1)%16 == 0:
        s = "{hex:2X}\n" # new line after 16 entries
    else:
        s = "{hex:2X} "
    f.write(s.format(hex=v))

f.close()