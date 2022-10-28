import random
import string

for x in range(50):
    print("".join(random.choices("ATCG", k=15))+",")
