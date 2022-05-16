import time

st = "ABCDEFGHIJKLMNOPQRSTUVWXYZ2345679"

start = time.time()

for i in st:
    for j in st:
        for k in st:
            for l in st:
                for m in st:
                    print(i+j+k+l+m)

end = time.time()
print(end-start)