# IoT and 5G Lab Activities

This repository contains 5 IoT-based projects developed as part of the Internet of Things and 5G course. The projects demonstrate sensor interfacing, real-time monitoring, automation, and basic TinyML concepts using Arduino, ESP32, STM32, and Raspberry Pi Pico.

---

## Activity 1: Motion Detection System using Arduino

### Description
A motion detection system built using an Arduino Uno and a PIR sensor. The system detects human movement and triggers an LED alert.

### Components
- Arduino Uno
- PIR Motion Sensor
- LED

### Features
- Real-time motion detection
- Visual alert using LED
- Serial monitor status messages

### Source Code
[`motion_detection_arduino.ino`](motion_detection_arduino.ino)

### Simulation Link
https://www.tinkercad.com/things/1F2gf7Qakvg-munagala-chandu

---

## Activity 2: Automatic Light Control using ESP32

### Description
An automated lighting system that uses an LDR sensor to measure ambient light and control an LED accordingly.

### Components
- ESP32
- LDR Sensor
- LED

### Features
- Automatic light control
- Energy-efficient operation
- Real-time light intensity monitoring

### Source Code
[`esp32_ldr_light_control.ino`](esp32_ldr_light_control.ino)

### Simulation Link
https://wokwi.com/projects/461373913268265985

---

## Activity 3: Gas Leakage Detection using STM32

### Description
A safety monitoring system that detects gas leakage using an MQ-2 gas sensor and generates alerts through an LED and buzzer.

### Components
- STM32 Nucleo C031C6
- MQ-2 Gas Sensor
- LED
- Buzzer

### Features
- Real-time gas monitoring
- LED warning indication
- Audible buzzer alert

### Source Code
[`stm32_gas_detection.ino`](stm32_gas_detection.ino)

### Simulation Link
https://wokwi.com/projects/461375937572056065

---

## Activity 4: Temperature and Humidity Monitoring using Raspberry Pi Pico

### Description
A real-time environmental monitoring system using a DHT22 sensor and Raspberry Pi Pico.

### Components
- Raspberry Pi Pico
- DHT22 Sensor

### Features
- Temperature monitoring
- Humidity monitoring
- Serial output display

### Source Code
[`pico_dht22_monitor.py`](pico_dht22_monitor.py)

### Simulation Link
https://wokwi.com/projects/461385917995395073

---

## Activity 5: TinyML Distance Classification System

### Description
A TinyML-inspired project that uses an ultrasonic sensor to classify object distance into categories such as Very Close, Near, and Far.

### Components
- Arduino Uno
- HC-SR04 Ultrasonic Sensor

### Features
- Distance measurement
- Distance classification
- Simulated TinyML inference
- Confidence score prediction

### Source Code
[`tinyml_distance_classifier.ino`](tinyml_distance_classifier.ino)

### Simulation Link
https://wokwi.com/projects/461389991923891201

---

## Repository Structure

```text
IoT-5G-Lab/
│
├── motion_detection_arduino.ino
├── esp32_ldr_light_control.ino
├── stm32_gas_detection.ino
├── pico_dht22_monitor.py
├── tinyml_distance_classifier.ino
└── README.md
