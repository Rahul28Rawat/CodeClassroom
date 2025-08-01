#Write a program to check wether the entered password is correct or not.

# psd="123ABCDEF"
# E_PSD=input("Enter the Password: ")

# if E_PSD==psd:
#     print("Access Granted")
# else:
#     print("Access Denied")


#Write a program to create a simple ATM simulation.



psd="VIHAAN2010"
E_PSD=input("Enter the Password: ")

if E_PSD==psd:
    print("Access Granted")
    balance=2000
    print("BALANCE =",balance)
    
    choice=int(input("Enter 1 for Deposit or Enter 2 for Withdrawal: "))
    if choice==1:
        amtchoice=int(input("Enter the Amount you wish to Deposit: "))
        
        if 0>=amtchoice:
             print("Enter Correct Amount")
        
        else:
            balance=balance+amtchoice
            print("New Balance= ",balance)
    
    
    elif choice==2:
         amtchoice=int(input("Enter the Amount you wish to Withdraw: "))
         
         if amtchoice>balance:
             print("Insufficient Balance")
         
         else:
            balance=balance-amtchoice
            print("New Balance =",balance)
    
    else: 
        print("Please Enter a Valid Number")

else:
    print("Access Denied")

    



