print("program mendeteksi nilai indeks huruf mahasiswa")
a = int(input("masukkan nilai : "))
if (a > 100):
    print ("NILAI DILUAR JANGKAUAN")
elif(a >= 80):
    print ("NILAI A")
elif(a >= 70):
    print ("NILAI AB")
elif(a >= 60):
    print ("NILAI B")
elif(a >= 50):
    print ("NILAI BC")
elif(a >= 40):
    print ("NILAI C")
elif(a >= 30):
    print ("NILAI D")
elif(a >= 0):
    print ("NILAI E")
elif(a < 0):
    print ("NILAI DILUAR JANGKAUAN")