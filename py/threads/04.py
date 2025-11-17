import threading
import time
import random

Done = False
i = 1
j = 1

def tareaUno():
  global Done
  global i
  if not Done:
    print("Tarea %d realizada\n" % i,flush=True)
    Done = True
  else :
    print ("tarea %d NO REALIZADA\n"  % i,flush=True)
  i +=1
  return

def tareaDos():
  global Done
  global j
  Done = False
  print("----- %d tareaDos\n" % j,flush=True)
  j+=1
  return

if __name__ == '__main__':
    hilos = list()
    for i in range(50):
      t = threading.Thread(target=tareaUno)
      if (i % 5) == 0:
        t = threading.Thread(target=tareaDos)
      # hilos.append(t)
      t.start()
      # time.sleep(0.01)

    time.sleep(5)