# OpenCv-Nvidia-GPU-Configuration-Checks
Application to test OpenCV and Nvidia GPU'S Installation and Configuration Details
# Compilation Step
g++ NvidiaConfigTest.cpp -o NvidiaConfigTest `pkg-config --cflags --libs opencv`

g++ NvidiaDeviceCheck.cpp -o NvidiaDeviceCheck `pkg-config --cflags --libs opencv`

