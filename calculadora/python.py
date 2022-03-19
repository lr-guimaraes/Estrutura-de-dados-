import re


class Operation:    
    def __init__(self, value, result, operation):
        self.value = value 
        self.result = result
        self.__operation = operation
  
    def operation(self):
        if self.__operation =="+":
            self.result = self.result + self.value
        elif self.__operation =="-":
            self.result = self.result -self.value
        elif self.operation =="*":
            self.result = self.result * self.value
            return self.result
        elif self.operation =="/":
            try:
                self.result = self.result / self.value
            except ValueError:
                print("It is not possible to divide by 0")
        return self.result
    


x = float(input("Value: ")) 
while True:
    inp = float(input("Value: "))
    op = str(input("Operation: "))
    result = Operation(inp,x, op)
    x = result.operation()
    print(x)
    resp = str(input("Continue {Y/N}: "))
    if resp.upper() == "N":
       break

