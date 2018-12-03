from math import ceil

T = int(raw_input())

for test in range(T):
    N, X, Y, D = map(int, raw_input().split())
    par = lambda x: x % 2 == 0
    can_reset = False

    if X == Y: answer = 0
    else:
        if (X > 1 or X < N): can_reset = True

        if (X + D) == Y or (X - D) == Y: answer = 1

        elif (X + D) > N and Y == N: answer = 1

        elif (X - D) < 1 and Y == 1: answer = 1

        elif (abs(Y - X) % D == 0): answer = abs(Y - X) / D

        elif can_reset:
            can_from_lower = False
            can_from_upper = False
            from_lower = 999999999
            from_upper = 999999999
            if (Y-1) % D == 0:
                from_lower = (Y / D) + ceil(float(X) / D)
                can_from_lower = True

            if (N - Y) % D == 0:
                from_upper = ((N - Y) / D) + ceil(float(N - X) / D)  
                can_from_upper = True

            if can_from_upper or can_from_lower: answer = min(from_lower, from_upper)
            else: answer = -1
        else: answer = -1

    print int(answer)
    