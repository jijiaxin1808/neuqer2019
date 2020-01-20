def frog(step):
    if step < 1:
        return "输入错误"
    if step == 1 or step == 2:
        return step
    else:
        return frog(step-1) + frog(step-2)


n=input()
an=frog(int(n))
print(an)

