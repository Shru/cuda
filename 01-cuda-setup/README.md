CUDA Setup
========

This setup is based on Ubuntu 24.04 and CUDA version 12.6.1 which can be found [here](https://developer.nvidia.com/cuda-downloads). 

1. Select your target platform to pick the correct CUDA Toolkit Installer. The one selected in this setup is: 

 - Linux

 - x86_64

 - Ubuntu

 - 24.04

 - runfile(local)


2. Follow the `cuda-install-script.sh` to install CUDA. <ins>Note</ins>: Make sure to update the script with your version of installation instructions based on your choice of target platform.

3. Once the installation is complete without errors, test the setup with your first CUDA code. 

    For this, create a folder called `cuda-setup-test` in your `/home/[your username here]` folder. Create a file called `main.cu`

4. Write your test program in `main.cu`:

``` cpp
#include <cuda_runtime.h>
#include <iostream>
using namespace std;

int main(){
        cout << "hello world." << endl;
}
```

5. Compile the code using Nvidia CUDA Compiler:
    `nvcc -o main main.cu`

6. Run the code:
    `./main`

7. This is give you the output `hello world.` error free. 