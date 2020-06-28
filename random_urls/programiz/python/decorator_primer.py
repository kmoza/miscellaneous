def make_pretty(func):
    def inner():
        print("I got decorated")
        func()
    return inner

def ordinary():
    print("I am ordinary")

ordinary()
pretty = make_pretty(ordinary)
pretty()

#using decorator syntax
@make_pretty
def oridinary2():
    print("I am ordinary2")

oridinary2()