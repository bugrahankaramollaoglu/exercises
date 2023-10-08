""" this program will separate asd@hotmail.com as asd and hotmail.com """

# take input from user which you'll have stripped of whitespaces and store it in email variable
email = input("Enter Your Email: ").strip()

# username olarak en baştan @ işaretine kadar olan kısmı al
username = email[:email.index("@")]

# domain name olarak @ işaretinden sona kadar olan kısmı al (0 değil de +1 diyerek @ işaretini katmıyoruz)
domain_name = email[email.index("@") + 0:]

format_ = f"Your user name is '{username}' and your domain is '{domain_name}'"
print(format_)
