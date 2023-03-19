produkti = {}
while True:
    add = str(input("Enter what product you want to exist in the shop: "))
    if add == 'stop':
        break
    count = int(input("How many of this product: "))
    produkti[add] = count
    print("To stop adding products type stop in products.")

while True:
    isk = str(input("Enter what product you want: "))
    if isk == "stop":
        print("Thank you for comming!\n")
        exit()
    if isk in produkti:
        n = int(input("How many " + isk + " do you want: "))
        if n < produkti[isk]:
            produkti[isk]-=n
            print("Successfully purchased!")
        else:
            print("Not enough from this product")
    else:
        print("No such product\n")
    print("To stop purchasing type 'stop' in product.\n")