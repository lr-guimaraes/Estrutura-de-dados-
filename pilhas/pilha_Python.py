import time

class Stack:
    def __init__(self):
        self.__stack = [] 
        self.cont = 0
        self.capacity = 10 
  
    def push(self, str):
        self.cont += 1
        self.__stack.insert(0,str)
        
    def pop(self):
        print(self.__stack)

    def empty(self):
        if self.__stack is None:
            print("The stack is empty")
        else:
            print ("The stack is not empty")

    def full(self):#arrumar 
        if len(self.__stack) < 10:
            print("The stack is not full")
        else:
            print("the stack is full")
            
    def lenght(self):
        return len(self.__stack)

    def capacit(self):
        print(self.capacity)

    def TimeSum(self):
        start = time.time()
        sum(self.__stack)
        end = time.time()
        print("Sum: ",sum(self.__stack))
        print("Runtime: ", end - start, "second")
        
class Fist_InOut:
    def __init__(self):
        self.__io = [] #io -> In Out
        self.cont = 0
        self.capacity = 10
    
    def push(self, str):
        self.cont += 1
        self.__io.append(str)
    
    def pop(self):
        print(self.__io)
        

    def empty(self):
        if self.__io is None:
            print("The list is empty")
        else:
            print ("The list is not empty")

    def full(self):#arrumar 
        if len(self.__io) < 10:
            print("The list is not full")
        else:
            print("The list is full")
            
    def lenght(self):
        return len(self.__io)

    def capacit(self):
        print(self.capacity)

    def TimeSum(self):
        start = time.time()
        sum(self.__io)
        end = time.time()
        print("Sum: ", sum(self.__io))
        print("Run time:" ,end - start, "second")

def main():

    list = Fist_InOut()
    pilha = Stack()
    i= 0
    for i in range(10):
        list.push(i)
        pilha.push(i)

    print("=====Stack=====")
    pilha.pop()
    pilha.TimeSum()
    print("====First in First out ====")
    list.pop()
    list.TimeSum()

if __name__ == "__main__":
    main()