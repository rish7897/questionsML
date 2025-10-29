# Read a 6x6 matrix from input
vectors = []
for _ in range(6):
    row = list(map(float, input().split()))
    vectors.append(row)

lossf = 0.0
lossg = 0.0

for i in range(6):
    err_f = vectors[i][4] - (2 * vectors[i][0]) + (0.5 * vectors[i][2])
    err_g = vectors[i][5] - vectors[i][0] - (2 * vectors[i][2])

    lossf += err_f * err_f
    lossg += err_g * err_g

lossf /= 6.0
lossg /= 6.0

print("lossf :", lossf)
print("lossg :", lossg)
