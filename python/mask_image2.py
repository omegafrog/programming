import os

import matplotlib.pyplot as plt
import numpy as np
from skimage import io

while True:
        filepath=input("Enter the name of file(file must be in this directory):")
        if filepath in os.listdir('./'):
            photo_data=io.imread(filepath)
            break
        else:
            print("No exist file. try again.")
total_y,total_x,total_value=photo_data.shape
X, Y=np.mgrid[: total_x, : total_y]

radius=total_y/2
center_x=int(total_x/2)
center_y=int(total_y/2)
X=(X-center_x)*(X-center_x)
Y=(Y-center_y)*(Y-center_y)
result=X+Y-radius*radius
mask=result[:,:]>0
mask1=np.transpose(mask)
plt.figure(figsize=(15,15))
plt.subplot(121)
photo_data[mask1]=0
plt.imshow(photo_data)
plt.subplot(122)
mask[:, center_y:]=False
mask2=np.transpose(mask)
photo_data[mask2]=255
plt.imshow(photo_data)
plt.show()
