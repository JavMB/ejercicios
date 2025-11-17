import threading
import random
import time

def hilo1():
    time.sleep(random.uniform(0, 1.5))
    print("Soy el Hilo 1 y primero")

def hilo2():
    time.sleep(random.uniform(0, 1.5))
    print("Soy el hilo 2")

def hilo3():
    time.sleep(random.uniform(0, 1.5))
    print("Soy el hilo 3 y último")

if __name__ == "__main__":
    t1 = threading.Thread(target=hilo1)
    t2 = threading.Thread(target=hilo2)
    t3 = threading.Thread(target=hilo3)
    t1.start()
    t2.start()
    t3.start()
    t1.join()
    t2.join()
    t3.join()