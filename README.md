# smart-intrusion-detection-system
# Smart Intrusion Detection System

A smart security system that detects human motion using a PIR sensor connected to an ESP32 microcontroller. When motion is detected, a real-time push notification is sent via the Blynk IoT platform to alert the user, making it ideal for restricted areas or homes.

---

## 📌 Aim

To develop a smart intrusion detection system using ESP32 and PIR sensor that sends real-time alerts to security personnel via the Blynk IoT cloud platform.

---

## 📖 Problem Statement

Simulate a smart intrusion detection system that:
- Continuously detects human movement in a restricted area using a PIR sensor.
- Provides real-time alerts to security personnel via the cloud when motion is detected, indicating unauthorized access.

---

## 🔍 Scope of the Solution

This system can be applied in:
- Homes
- Banks
- Server rooms
- Warehouses
- Any area requiring intrusion monitoring

It helps reduce response time in the event of a security breach by sending immediate notifications to the user.

---

## ⚙️ Components Used

### 🛠️ Hardware:
- ESP32 Dev Module
- PIR Motion Sensor
- USB Cable
- Jumper Wires
- Breadboard (optional)

### 🧠 Software:
- Arduino IDE
- Blynk IoT Platform (New Blynk 2.0)
- Wokwi Simulator (for virtual circuit demo)

### ☁️ Cloud Services:
- Blynk Cloud (for notifications and device management)
- 
## 💻 Code
- the complete code for the given program is given the motiondetection file uploaded
   
## 🧪 Circuit Diagram

- The PIR sensor's OUT pin is connected to **GPIO 4** of the ESP32.
- VCC to 3.3V, GND to GND.
- The circuit is simulated and tested using [Wokwi](https://wokwi.com).
![image](https://github.com/user-attachments/assets/90cfa1cd-b9b8-49ec-b9f9-797b9d09e22b)



## 📲 Working Demo

### ✔️ Features:
- Motion is detected by PIR sensor.
- ESP32 sends log event to Blynk.
- Blynk triggers push notification to user's phone/email
 

## 📅 Project Info

- Course: Internet of Things
- Project: Smart Intrusion Detection System




