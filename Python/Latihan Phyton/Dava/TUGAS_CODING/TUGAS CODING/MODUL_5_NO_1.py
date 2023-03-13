print("===DIVIDING CALCULATOR===")
input_1 = input("Insert the number : ")
input_2 = input("Insert the dividers : ")
try:
    result = int(input_1)/int(input_2)
    if (result.is_integer() == True):
        print(f"The result is {int(result)}")
    else:
        print(f"The result is {result}")
except ValueError:
    print("\nInputted data should be in integer!")
except ZeroDivisionError:
    print("\nCan't divide a number by 0!")