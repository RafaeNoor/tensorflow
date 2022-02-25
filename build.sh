# We recommend building a virtual environment for python specific requirements



echo "conda create --name tlx_xla"
conda create --name tlx_xla



echo "conda activate tlx_xla"
conda activate tlx_xla



echo "pip3 install numpy==1.8.5 keras-preprocessing"
pip3 install numpy==1.8.5 keras-preprocessing



echo "python3 setup_tlx.py"
python3 setup_tlx.py
