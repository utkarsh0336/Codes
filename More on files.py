f = open("Utkarsh.txt")
#print(f.tell())     #This f.tell function tells about the position of the pointer.
print(f.readline())
f.seek(10)      #f.seek function resets the position of the pointer to the passed argument.
#print(f.tell())
print(f.readline())
#print(f.tell())

f.close()