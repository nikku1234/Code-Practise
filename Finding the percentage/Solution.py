if __name__ == '__main__':
    t = int(input())
    student = {}

    for i in range (0,t):
        name,maths,physics,chemistry = input().split(" ")
        student[name]=(float(maths)+float(physics)+float(chemistry))/3

    name = input()
    if(name in student):
        print("%.2f" % student[name])
    else:
        print("No")
