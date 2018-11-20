import matplotlib.pyplot as plt
import matplotlib.image as mpimg
import numpy as np
import sys

<<<<<<< HEAD
=======
##Programa para graficar
<<<<<<< HEAD
>>>>>>> b2c964b0ee4ef7b082f9d66da1a6ac475c4b6c5d
=======
>>>>>>> a7c3b37938983be9522c00be35561c0a23771bb1
>>>>>>> f20532a1850798a480ff2cf587e9d954cf0ad0f7
for i in range(1,len(sys.argv)):
    file=sys.argv[i]
    plt.clf()
    data_img=np.loadtxt(file)
    plt.imshow(data_img)
    plt.colorbar()
<<<<<<< HEAD
plt.savefig(file+'.png')
=======
    plt.savefig(file+'.png')
<<<<<<< HEAD
>>>>>>> b2c964b0ee4ef7b082f9d66da1a6ac475c4b6c5d
=======
>>>>>>> a7c3b37938983be9522c00be35561c0a23771bb1
>>>>>>> f20532a1850798a480ff2cf587e9d954cf0ad0f7
