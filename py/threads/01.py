import threading


def Hilo2():
  print ('Soy el hilo 2\n')
  t3 = threading.Thread(target=Hilo3)
  t3.start()

def Hilo3():
  print ('Soy el hilo 3  y último\n')

t2 = threading.Thread(target=Hilo2)

t2.start()
print ("Soy el Hilo 1 y primero\n")