# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    all from yazbel python                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    										        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 23:22:45 by bkaramol          #+#    #+#              #
#    										          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# generators

""" generatorlar fonksiyon gibi tanımlanırlar fakat
return yerine yield anahtar kelimesi kullanırlar. böylece
döndürecekleri şeyleri biriktirip tek seferde gönderebilirler
normalde fonksiyonda return görünce bilgisayar fonksiyonu sonlandırır
ve yerel değişkenleri siler. yield'de ise saklanır.
"""

""" generatorlarle sık kullanılan next() built-in fonksiyonu vardır
"""


def fun():
    yield "merhaba"
    yield "zalim"
    yield "dünya"


a = fun()
print(next(a))  # merhaba
print(next(a))  # zalim
print(next(a))  # dünya


def fun2():
    for i in range(1, 20):
        yield i


b = fun2()
print(next(b))  # 1
print(next(b))  # 2
print(next(b))  # 3
