#    *        
#   ***      
#  *****     
# *******
#*********

print("enter a number ",end=": ")
n=int(input())#row=5

for i in range(1,n+1):
    for j in range(n-i+1,1,-1):
        print(" ",end="")
    for k in range(1,i*2):
        print("*",end="")
    print("")
