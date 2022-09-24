import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
import serial

GPIO.setwarnings(False)
arduino= serial.Serial('/dev/ttyUSB0', 9600)






try:
        res=input('deseja registrar um novo sinal ecg?')
        if res=='s':
            with open('ecg_arthur.txt', 'w+') as file:
                while True:
                    file.seek(0)
                    valor_recebido= arduino.readline()
                    valor_recebido=str(valor_recebido)
                    #valor_recebido= valor_recebido.decode("utf-8")
                    print(valor_recebido)
                    file.write(valor_recebido)
            
        else:
            with open('ecg_arthur.txt', 'a+') as file:
                file.seek(0)
                print(file.read())
except KeyboardInterrupt:
		print("DESLIGANDO")
		GPIO.cleanup()
