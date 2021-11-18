#dilution

import numpy as np
import cv2
import copy

img = cv2.imread("/Users/yousufalam/Documents/img processing/dilation.jpg",0)

out_x = img.copy()
out_y = img.copy()

(thresh, im_bw) = cv2.threshold(img, 128, 255, cv2.THRESH_BINARY | cv2.THRESH_OTSU)
cv2.imshow("im_bw",im_bw)
(thresh, out_bw) = cv2.threshold(out_y, 128, 255, cv2.THRESH_BINARY | cv2.THRESH_OTSU)
        
kernel_e = [[0,255,0],[255,255,255],[0,255,0]]
for i in range(1, im_bw.shape[0]-1):
    for j in range(1, im_bw.shape[1]-1):
        flag = False
        for s in range(-1,2):
            for t in range(-1,2):
                if kernel_e[s+1][t+1]!=0 and  kernel_e[s+1][t+1] == im_bw.item(i+s,j+t):
                  flag = True
        if flag == True:
          out_bw.itemset((i,j),255)
        else:
          out_bw.itemset((i,j),0)
          
cv2.imshow("dilation",out_bw)

for i in range(0, im_bw.shape[0]):
    for j in range(0, im_bw.shape[1]):
      w = out_bw.item(i,j) - im_bw.item(i,j)
      out_y.itemset((i,j), w)
      
cv2.imshow("edge",out_y)



cv2.waitKey(1000)
cv2.destroyAllWindows()



#scharr


import numpy
import cv2
import math
#%%

img = cv2.imread('/Users/yousufalam/Documents/img processing/lena.jpg',0)
import numpy as np
import cv2


image_gray = cv2.imread('/Users/yousufalam/Documents/img processing/lena.jpg',0)


cv2.imshow("input",image_gray)


rows, columns = np.shape(image_gray)

scharr_filtered_image = np.zeros(shape=(rows, columns))

scharr_filtered_x = np.zeros(shape=(rows, columns))
scharr_filtered_y = np.zeros(shape=(rows, columns))


scharr_y = np.array([[3, 10, 3],
                    [0, 0, 0], 
                    [-3, -10, -3]])

scharr_x = np.array([[-3, 0, 3],
                    [-10, 0, 10],
                    [-3, 0, 3]])




for i in range(rows - 2):
    for j in range(columns - 2):
        gx = np.sum(np.multiply(scharr_x, image_gray[i:i + 3, j:j + 3]))     
        scharr_filtered_x[i+1,j+1]=gx                                       
        gy = np.sum(np.multiply(scharr_y, image_gray[i:i + 3, j:j + 3]))   
        scharr_filtered_y[i+1,j+1]=gy                                        
        scharr_filtered_image[i + 1, j + 1] = np.sqrt(gx ** 2 + gy ** 2)     


cv2.normalize(scharr_filtered_x, scharr_filtered_x, 0, 255, cv2.NORM_MINMAX)
cv2.normalize(scharr_filtered_y, scharr_filtered_y, 0, 255, cv2.NORM_MINMAX)
cv2.normalize(scharr_filtered_image, scharr_filtered_image, 0, 255, cv2.NORM_MINMAX)
        

scharr_filtered_x = np.round(scharr_filtered_x).astype(np.uint8)
scharr_filtered_y = np.round(scharr_filtered_y).astype(np.uint8)
scharr_filtered_image = np.round(scharr_filtered_image).astype(np.uint8)
print(scharr_filtered_image)

cv2.imshow("scharr x",scharr_filtered_x)
cv2.imshow("scharr y",scharr_filtered_y)


cv2.imshow("scharr",scharr_filtered_image)
cv2.waitKey()
cv2.destroyAllWindows()

#erosion


import numpy as np
import cv2
import copy

img = cv2.imread("/Users/yousufalam/Documents/img processing/dilation.jpg",0)

out_x = img.copy()
out_y = img.copy()

(thresh, im_bw) = cv2.threshold(img, 128, 255, cv2.THRESH_BINARY | cv2.THRESH_OTSU)
cv2.imshow("im_bw",im_bw)
(thresh, out_bw) = cv2.threshold(out_y, 128, 255, cv2.THRESH_BINARY | cv2.THRESH_OTSU)
        
kernel_e = [[0,255,0],[255,255,255],[0,255,0]]
for i in range(1, im_bw.shape[0]-1):
    for j in range(1, im_bw.shape[1]-1):
        flag = False
        match = 0
        for s in range(-1,2):
            for t in range(-1,2):
                if kernel_e[s+1][t+1]!=0 and  kernel_e[s+1][t+1] == im_bw.item(i+s,j+t):
                  flag = True
                  match += 1
        if flag == True and match != 5:
          out_bw.itemset((i,j),0)
        elif flag == True and match == 5:
          out_bw.itemset((i,j),255)
        elif flag == False:
          out_bw.itemset((i,j),0)
         
cv2.imshow("erosion",out_bw)


for i in range(0, im_bw.shape[0]):
    for j in range(0, im_bw.shape[1]):
      w = im_bw.item(i,j) - out_bw.item(i,j)
      out_y.itemset((i,j), w)
      
cv2.imshow("edge",out_y)



cv2.waitKey(1000)
cv2.destroyAllWindows()
