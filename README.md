# 🚦 Density-Based Traffic Light Control System

**Revolutionize urban traffic flow with intelligence-driven traffic signals!**  
Our smart system uses **real-time video processing, YOLOv5 object detection, and Arduino-based control** to dynamically adjust signal timings based on vehicle density, ensuring smoother commutes and reduced congestion.

---

## 📌 Project Overview

Traditional traffic systems rely on fixed signal timings, leading to inefficiencies and congestion. This project introduces an intelligent traffic management system that:

- 🚗 Detects real-time traffic density using cameras.
- 🎥 Processes video feeds to count vehicles using a **YOLOv5 custom-trained model**.
- 💡 Controls traffic lights dynamically via an **Arduino board** to prioritize high-density lanes.
- 🛑 Skips empty lanes to reduce unnecessary wait times.

---

## 🛠️ Tech Stack

- **Python**, **OpenCV**, **YOLOv5**
- **Roboflow** (for data labeling)
- **Google Colab** (for training)
- **Arduino IDE**
- **cvzone** (for Python-Arduino communication)

---

## ⚙️ Workflow

### 1. 🚗 Vehicle Detection using YOLOv5
- Labeled custom dataset with **Roboflow**.
- Trained a YOLOv5 model on Google Colab.
- Model detects cars, bikes, trucks, buses, and rickshaws.

### 2. 🎥 Real-time Video Analysis
- Camera feeds are processed with OpenCV (`image_detection.py`).
- Vehicle counts per lane are computed in real time.

### 3. 💡 Signal Control Logic
- Lane with **highest density** gets longer green signal.
- **Empty lanes are skipped**.
- Arduino executes signal logic from Python via serial communication using **cvzone**.

---

## 📂 Repository Structure

| File/Folder             | Description                                                                 |
|-------------------------|-----------------------------------------------------------------------------|
| `image_detection.py`    | Real-time vehicle detection using YOLOv5.                                   |
| `video_processing.py`   | Test script for analyzing sample traffic videos.                            |
| `model.pt`              | YOLOv5 trained model file.                                                  |
| `traffic_lights.ino`    | Arduino code to control LED-based signals.                                  |
| `videos/`               | Sample traffic videos for testing.                                          |

---

<h3 align="center">Sample Results</h3>

<p align="center">
  <img src="https://github.com/user-attachments/assets/4d8019be-eeb2-4fea-8fbd-d216c7b7d5c9" height="320" width="45%" alt="Before Detection"/>
  &nbsp; &nbsp; &nbsp;
  <img src="https://github.com/user-attachments/assets/889bebcd-088a-4dbe-bebe-c7f499f850b5" height="320" width="45%" alt="After Detection"/>
</p>

<p align="center"><b>Figure:</b> Original image (left) vs. detection output with bounding boxes (right).</p>

*Figure: Original image vs. detection output with bounding boxes.*

---

## 🚀 Getting Started

### 🔧 Requirements

- Python 3.x  
- OpenCV, PyTorch  
- Arduino IDE  
- YOLOv5 repo cloned  
- `cvzone` Python package

### 🛠 Setup Steps

1. Clone the repo and install Python dependencies.
2. Prepare dataset and train YOLOv5 using Roboflow and Google Colab.
3. Upload `traffic_lights.ino` to Arduino and connect LEDs as instructed.
4. Run `image_detection.py` for real-time detection and traffic light control.

---

## 📈 Results & Highlights

- ✅ Adaptive signal timing based on actual traffic
- ✅ Skips signals with no traffic
- ✅ Real-time detection with high accuracy
- ✅ Scalable for smart city applications


