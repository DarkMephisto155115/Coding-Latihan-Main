import numpy as np

C = np.array([[8, -8, 8, -8], [2, 4, 3, -1], [1, 3, 7, 0], [-3, 1, 4, 1]])

D = np.array([[2, -1, 5, 11], [2, 8, 9, 8], [4, -11, -10, -7], [-2, 4, 7, 6]])

print("\nMatriks C dan D : \n")
print("\tC\n", C)
print("\n\tD\n", D)

print("\nMatriks C + D")
print(C + D)

print("\nMatriks C - D")
print(C - D)

print("\nMatriks C x D")
print(C.dot(D))

print("\nMatriks C / D")
print(np.divide(C, D))

print("\nMatriks Invers C")
print(C.transpose())

print("\nMatriks Invers D")
print(D.transpose())
