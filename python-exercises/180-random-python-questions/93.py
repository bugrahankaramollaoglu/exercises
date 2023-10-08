import speedtest
st = speedtest.Speedtest()

option = int(input("""hangi hızı ölçmek istiyorsunuz:
1) indirme hızı (download)
2) yükleme hızı (upload)
3) ping
seçiniz:"""))

if option == 1:
    print(st.download()/(1025*1025) , "mb/sn")
if option == 2:
    print(st.upload()/(1025*1025), "mb/sn")
elif option == 3:
    servername = []
    st.get_servers(servername)
    print(st.results.ping)
else:
    print("please enter valid choice")