# '3601_image+pixel.png' => It has 3 x 4 x 3 Matrix.
#  It is 3-Dimensional Matrix with Colour-Combination
#   as Vertical Dimension.
# 
# Image => Combination of pixels in Matrix.
#  Pixel have three colours [B:G:R] => [Blue: Green: Red],
#   for colour combination, which each have there Strength 
#   values range [0, 255], to make all colours.
# 
#  White => Blue + Green + Red => [255, 255, 255].












import cv2 # pyright: ignore

array = cv2.imread("3601_01_image.png")
print(array.shape) # => (3, 4, 3), 3-colour Combination & 4x3 Matrix.
#           => It is 3-Dimensional.

print(array) # => Gives us Same Matrix from '3601_02_image+pixel.png'

print(type(array)) # => <class 'numpy.ndarray'> 
#           (↑) => But works with the help of 'opencv-python' Package.

