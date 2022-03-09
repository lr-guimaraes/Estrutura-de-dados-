class Stack:
    def __init__(self):
        self.__stack = [], self.cont = 0
        self.capacity = 1000
    
    def push(self, str):
        self.cont += 1
        self.__stack.append(str,0)

    def pop(self):
        self.__stack.append(str)

    def empty(self):
        if self.__stack is None:
            print("A pilha está vazia")
        else:
            print ("A pilha não está vazia")

    def full(self):#arrumar 
        if len(self.__stack) < 1000:
            print("A lista não está cheia")
        else:
            print("A pilha esta cheia")
            
    def lenght(self):
        return len(self.__stack)

    def capacit(self):
        print(self.capacity)


opcao = input("1 - Adicionar item no inicio \n2 - Adicionar item no final \n3 - Verificar se a pilha possui strings \n4 - Verificar se a pilha está cheia \n5 - Tamanho da pilha \n6 - Capacidade da pilha \n Opção:")
if opcao == 1:
    for i in range(1, 1001):
        Stack.push(i)
        print(Stack.lenght())
elif opcao == 2:
    Stack.pop()
elif opcao == 3:
    Stack.empty()
elif opcao == 4:
    Stack.full()
elif opcao == 5:
    Stack.lenght()
elif opcao == 6:
    Stack.capacit()

'''
from operator import length_hint
from os import popen
from numpy import append
from pytz import InvalidTimeError
from tkinter import S

'''