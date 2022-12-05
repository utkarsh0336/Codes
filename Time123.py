import time

initial = time.time( )

k = 0
while(k<45):
    print("This is Harry Bhai")
    time.sleep(2)
    k+=1
    print("While loop ran in ", time.time() - initial, "Seconds")
initial2 = time.time()
for i in range(45):
    print("This is Harry Bhai")
    print("For loop ran in ", time.time() - initial2, "Seconds")
# localtime = time.asctime(time.localtime(time.time()))  #Gives Present day date time and year.
# print(localtime)    #time.time gives the tick value.
                    #time.localtime converts it into local time to represent.
                    #time.localtime returns a tuple.So, asctime converts the tuple into presentable time format.
