class Animal():
    __name= None
    __sound = None

    def __init__(self, name , sound):
        self.__name= name
        self.__sound = sound 
        
    def ToString(self):
        print ("The {} has the sound{}".format(self.__name , self.__sound))


cat = Animal('Tiger' , 'roars')
cat.ToString()


class Panther(Animal):
    __owner = None

    def __init__(self , name ,sound ,owner):
        self.__owner = owner
        super(Panther ,self).__init__(name, sound)
        def ToString(self):
            print(self.__owner)
            print(self.__name) 


leopard = Panther('Leopard' , 'roars' , 'Senegal')
leopard.ToString()
