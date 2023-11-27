"""The Caesar cipher, also known as the shift cipher, is one of the simplest and most
well-known encryption techniques. It was named after Julius Caesar, who is believed
to have used this cipher to protect his military messages.
In this method, each letter is shifted n number of places in the alphabet. Example:
PYTHON, n = 3
P -> S (P, Q, R, S)
Y -> B (Y, Z, A, B)
T -> W (T, U, V, W)
H -> K (H, I, J, K)
O -> R (O, P, Q, R)
N -> Q (N, O, P, Q)

PYTHON becomes SBWKRQ when n = 3.

Write a program that prompts the user to enter a string then an integer, then Caesar
ciphers the string by shifting it by the input number. Return the encoded message.
You may assume that the given string will consist of only spaces and lowercase
English letters. For instance: “python”, 3 --> “sbwkrq”      """


def caesar(str, num):
    encodedStr = []
    alphabet = [chr(i) for i in range(ord("a"), ord("z") + 1)]
    for i in range(len(str)):
        if ord(str[i]) + num > 122:
            offset = 122 - ord(str[i])
            encodedStr.append(chr(ord("a") + offset))
        else:
            encodedStr.append(chr(ord(str[i]) + num))
    return "".join(encodedStr)


def main():
    inp = input("enter a string & integer: ")
    inp = inp.split()

    str = inp[0]
    num = int(inp[1])

    encoded = caesar(str, num)

    print(encoded)


if __name__ == "__main__":
    main()
