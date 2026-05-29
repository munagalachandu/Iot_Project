import dht
from machine import Pin
import time

sensor = dht.DHT22(Pin(15))

while True:
    sensor.measure()

    temp = sensor.temperature()
    hum = sensor.humidity()

    print("Temperature:", temp, "°C")
    print("Humidity:", hum, "%")
    print("----------------")

    time.sleep(2)
