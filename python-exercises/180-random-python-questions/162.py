import re

""" Assuming that we have some email addresses in the ”username@companyname.com”
format, please write program to print the user name of a given email address.
Both user names and company names are composed of letters only. use regex """

emails = "bugra@hotmail.com kara@yahoo.com molla@gmail.com"

regexPattern = "(\w+)@\w+.com"

""" (\w+): This part is used to match one or more word characters
	(letters, digits, or underscores) before the '@' symbol.
 	The parentheses () are used for grouping, and the + sign
  	means one or more occurrences of the preceding pattern.

    @: This matches the '@' symbol literally, which is a required character in an email address.

    \w+: This matches one or more word characters after the '@' symbol,
    representing the domain name. It will match any combination of letters,
    digits, or underscores.

    \.com: This matches the ".com" domain extension literally.
    The backslash \ is used to escape the dot (.) since it is a
    special character in regular expressions that matches any
    character. By using \. we specifically match the dot character. """

answer = re.findall(regexPattern, emails)

print(answer)  # ['bugra', 'kara', 'molla']
