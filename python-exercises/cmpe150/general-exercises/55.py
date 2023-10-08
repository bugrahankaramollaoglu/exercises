p = True
q = False
r = False

statement_1 = ((not (p and q)) or r) and not r
statement_2 = (p and q) or r
statement_3 = (r or p) and (r or q)
print(statement_1)
print(statement_2)
print(statement_3)
