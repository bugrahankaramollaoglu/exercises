# class yaratalim

class Person():
    isim = ''
    soyisim = ''
    yetenekler = list()
    yas = 0


# instantiation (örnekleme) işlemiyle bu sınıfın bir alt örneğini oluşturduk
ben = Person()

ben.isim = 'bugrahan'
ben.yetenekler = ['c', 'cpp', 'cs']
ben.yetenekler.append('javascript')

print(ben.isim)
print(ben.yetenekler)
