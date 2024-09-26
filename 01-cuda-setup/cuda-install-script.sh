# install CUDA, relevant tools and libraries 

sudo apt update && sudo apt upgrade -y
sudo apt install wget curl git
sudo apt install python3-pip
wget https://developer.download.nvidia.com/compute/cuda/12.6.1/local_installers/cuda_12.6.1_560.35.03_linux.run
sudo sh cuda_12.6.1_560.35.03_linux.run

# at this point, follow the instructions, uncheck drivers and click install

# open the bashrc file to include the path
vim ~/.bashrc

# enter the path for CUDA binaries and the LD Library as shown below
# export CUDA_HOME=/usr/local/cuda-12.6
# export PATH=$CUDA_HOME/bin${PATH:+:${PATH}}
# export LD_LIBRARY_PATH=/usr/local/cuda-12.6/lib64\ {LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
# save and quit vim editor

# source the bashrc file. Note, this needs to be done everytime you restart.
source ~/.bashrc

# check if the CUDA toolkit, complier divers are installed correctly. 
nvcc --version

# check out the GPU stats
nvidia-sim