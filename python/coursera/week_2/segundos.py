segundos_str = int(input("Por favor, entre com o número de segundos que deseja converter: "))
total_segs = int(segundos_str)

dias = total_segs // 86400
segs_restantes = total_segs % 86400
horas = segs_restantes // 3600
segs_restantes_2 = total_segs % 3600
minutos = segs_restantes_2 // 60
segs_restante_final = segs_restantes % 60

a = dias
b = horas
c = minutos
d = segs_restante_final

print(a, "dias,", b, "horas,", c, "minutos e", d, "segundos.")
# segundos_str, "correspondem a ",