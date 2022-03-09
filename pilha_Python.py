class Stack:
    def __init__(self):
        self.__stack = [] 
        self.cont = 0
        self.capacity = 1000
    
    def push(self, str):
        self.cont += 1
        self.__stack.append(str)
    def pop(self):
        self.__stack.pop()

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
 while True:
    pilha = Stack()
    if opcao == 1:
        for i in range(1, 1001):
            pilha.push(i)
            print(pilha.lenght())
        pilha.pop()
    elif opcao == 2:
        pilha.pop()
        print(pilha.lenght())
    elif opcao == 3:
        pilha.empty()
    elif opcao == 4:
        pilha.full()
    elif opcao == 5:
        pilha.lenght()
    elif opcao == 6:
        pilha.capacit()

    question = (input("Deseja continuar? {S/N}: "))
    if (question.upper() == "N"):
        False
    elif (question.upper() != "S" or != "N"):
        print("Resposta inexistente")

        
    
        