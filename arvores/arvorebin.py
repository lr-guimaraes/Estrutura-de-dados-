class Node:
    def __init__(self,data):
        self.__data = data
        self.__left = None
        self._right = None

    def __str__(self):
        return self(self.__data)

class BinaryTree:
    def __init__(self,data):
        if data:
            self.__node = Node(data) #raiz
            self.__root = self.__node
        else:
            self.__root = None

if __name__ == '__main__':

    tree = BinaryTree
    n1 = Node("a")
    n2 = Node("b")
    n1 = Node("a")
    n2 = Node("b")
    n1 = Node("a")
    n2 = Node("b")
    n1 = Node("a")
    n2 = Node("b")
 