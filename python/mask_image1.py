import os

import matplotlib.pyplot as plt
import numpy as np
from skimage import io
photo_data=io.imread('./sd-3layers.jpg')
total_y,total_x,total_value=photo_data.shape
X, Y=np.mgrid[: total_x, : total_y]

radius=total_y/2

center_x=int(total_x/2)
center_y=int(total_y/2)

X=(X-center_x)*(X-center_x)
Y=(Y-center_y)*(Y-center_y)
result=X+Y-radius*radius
mask=result[:,:]>0
mask=np.transpose(mask)
photo_data[mask]=255
plt.imshow(photo_data)
plt.show()
