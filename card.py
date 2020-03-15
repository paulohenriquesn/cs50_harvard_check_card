def helper(number):
    mem = str(number)
    return len(mem)

def main():
  first_digits = str(creditCard)[0] + str(creditCard)[1]
  if (creditCard<0):
     print("error")
     return 1
  else:
    counter = 0
    lista_rest = []
    lista = []
    _ = []
    strInt = str(creditCard)
    for i in range(helper(creditCard)):
      if((counter % 2) == 0):
        lista.append(int(strInt[i]))
      else:
          lista_rest.append(int(strInt[i]))
      counter = counter +1
    for i in range(len(lista)):
      lista[i] = lista[i]*2
    for i in range(len(lista)):
      str_i = str(lista[i])
      if (len(str_i) == 2):
        for j in range(len(str_i)):
          _.append(int(str_i[j]))
      else:
        _.append(int(str_i))
    first_value = sum(_)
    second_value = sum(lista_rest)
    result = (first_value + second_value)
    if (str(result)[1] == "0"):
      if (first_digits in ["40","41"]):
        print("VISA")
      elif(first_digits in ["55","51"]):
         print("MASTERCARD")
      elif(first_digits in ["37","36"]):
        print("AMEX")
    else:
      print("INVALID")
    return 0

creditCard = int(input("Card: "))
main()

  
