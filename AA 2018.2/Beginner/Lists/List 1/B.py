A, B, C = map(float, raw_input().split())

isTriangle = False

if (A + B > C and
    A + C > B and
    B + C > A): isTriangle = True

if (isTriangle):
    P = A + B + C
    print "Perimetro = %.1f" % (P)
else:
    A = ((A + B) * C) / 2.0
    print "Area = %.1f" % (A)


