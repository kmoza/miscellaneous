class NetworkError(RuntimeError):
    def __init__(self,arg):
        self.args = arg

try:
    raise NetworkError("Bas Hostname")
except NetworkError as e:
    print e.args
