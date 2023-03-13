import numpy as np

A = np.array([[1, -2], [4, 2], [-1, 1]])

B = np.array([[-3, 4], [-2, 1], [3, 6]])

print("\nMatriks A dan B : \n")
print("     A\n", A)
print("\n     B\n", B)


print("\nMatriks A + B")
print(A + B)

print("\nMatriks A - B")
print(A - B)

print("\nMatriks A x B")
print("Tidak Bisa Karena Kedua Matriks (3,2)")

print("\nMatriks A/B")
print(np.divide(A, B))

print("\nMatriks Invers A")
print(A.transpose())

print("\nMatriks Invers B")
print(B.transpose())
