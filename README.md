# Hand Gesture Controlled LED Brightness

This project demonstrates how to control the brightness of an LED using hand gestures captured by a camera. The system uses the MediaPipe library for hand tracking and communicates with an Arduino to adjust the LED brightness based on the distance between two fingers.

## Table of Contents

- [Overview](#overview)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Code Explanation](#code-explanation)

## Overview

This project consists of three main parts:
1. **Python Script for Hand Tracking**: Captures hand gestures and calculates the distance between two specific points (fingers) to adjust the LED brightness.
2. **Arduino Code**: Receives brightness values from the Python script and adjusts the LED brightness accordingly.
3. **Communication**: Uses serial communication to send data between the Python script and the Arduino.

## Requirements

- Python 3.x
- OpenCV
- MediaPipe
- NumPy
- cvzone
- Arduino IDE
- Arduino UNO
- LED and a resistor

### Python Libraries

To install the required Python libraries, use pip:

```bash
pip install opencv-python mediapipe numpy cvzone
```

## Installation

### Python Script

1. Clone this repository to your local machine:

    ```bash
    git clone https://github.com/sponge-24/LedBrightnessControl
    cd LedBrightnessControl
    ```

2. Make sure you have installed the required Python libraries (see [Requirements](#requirements)).

### Arduino Code

1. Open the Arduino IDE.
2. Copy and paste the Arduino code provided into a new sketch.
3. Upload the sketch to your Arduino board.

## Usage

1. Connect the LED to the Arduino and ensure it is correctly wired.
2. Run the Python script:

    ```bash
    python hand_gesture_control.py
    ```

3. The script will open a webcam window and start detecting hand gestures.
4. Move your hand and adjust the distance between your thumb and index finger. The distance will be used to control the LED brightness.

## Code Explanation

### Python Code

- **handDetector Class**: Handles hand tracking using MediaPipe and provides methods for detecting hands and finding hand landmarks.
- **Main Function**: Captures video from the webcam, detects hand landmarks, calculates the distance between two fingers, and sends this data to the Arduino.
- **Brightness Control**: Uses the distance between the thumb and index finger to control the LED brightness.

### Arduino Code

- Reads brightness values from the serial port.
- Adjusts the LED brightness using PWM (Pulse Width Modulation).
