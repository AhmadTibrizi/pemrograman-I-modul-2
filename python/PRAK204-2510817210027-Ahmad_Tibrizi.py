jari = float(input("Masukkan jari-jari: "))
tinggi = float(input("Masukkan tinggi: "))
pi = 22/7
volume = pi * jari * jari * tinggi
luas = 2 * pi * jari * (jari + tinggi)
keliling = 2 * pi * jari

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")