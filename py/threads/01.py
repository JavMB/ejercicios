# importamos threading
import threading

def hilo3():
	print("Soy hilo 3 y último")

def hilo2():
	print("Soy el hilo 2")
	t3 = threading.Thread(target=hilo3)
	t3.start()
	t3.join()

if __name__ == "__main__":
	print("Soy el Hilo 1 y primero")
	t2 = threading.Thread(target=hilo2)
	t2.start()
	t2.join()
