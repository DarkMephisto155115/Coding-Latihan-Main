import utils
import model
from datetime import datetime
import locale
import your_function

locale.setlocale(locale.LC_ALL, '')

# login screen


def login_screen():
    utils.render_screen(True, "APLIKASI PENJUALAN",
                        "Silahkan Login Terlebih Dahulu", "Username: ", "Password: ")
    username = input("Input your username: ")
    password = input("Input your password: ")
    if model.users.get(username) is not None and model.users[username]["password"] == password:
        model.current_login["username"] = username
        ttm = datetime.now()
        model.current_login["login_time"] = utils.convert_time_to_local(ttm)
        home_screen()
    else:
        failed_login_screen()

# failed login screen


def failed_login_screen():
    utils.render_screen(True, "APLIKASI PENJUALAN", "username dan password yg anda masukkan salah",
                        "Ketik 1 kemudian enter untuk mencoba kembali login", "Ketik lainnya kemudian enter untuk keluar dari aplikasi")
    command = input("Pilih: ")
    if command == "1":
        login_screen()


def home_screen():
    utils.render_screen(False, "APLIKASI PENJUALAN", "", "",
                        "BARANG > 1", "TRANSAKSI PENJUALAN > 2", "KELUAR > 9")
    command = input("Pilih: ")
    if command == "1":
        main_product_screen()
    elif command == "2":
        transaksi_screen()
    elif command == "9":
        utils.exit_apps()
    else:
        home_screen()


def main_product_screen():
    utils.render_screen(False, "APLIKASI PENJUALAN - BARANG", "", "", "INPUT > 1",
                        "LIHAT/HAPUS/EDIT/CARI > 2", "Home Screen > 8", "KELUAR > 9")
    command = input("Pilih: ")
    if command == "1":
        product_input_screen()
    elif command == "2":
        product_show_screen()
    elif command == "8":
        home_screen()
    elif command == "9":
        utils.exit_apps()
    else:
        main_product_screen()


def product_input_screen():
    utils.render_screen(False, "APLIKASI PENJUALAN - BARANG - INPUT", "", "", "Masukkan data barang pada bagian input",
                        "ID barang tidak perlu diinputkan, karena akan digenerate secara otomatis")
    # this is list comprehension, if you are confused about it just google
    current_max_id_barang = max(
        [int(x.removeprefix("barang_")) for x in model.products.keys()], default=1)
    # id_barang_new is current max id_barang + 1 (increment from the current max)
    id_barang_int_new = current_max_id_barang + 1
    id_barang_new = "barang_"+str(id_barang_int_new)
    print("ID barang: "+id_barang_new)
    nama_barang = input("Nama barang: ")
    harga_barang = float(input("Harga barang dalam decimal : "))
    is_okay = input(
        "Submit data barang? Ketik 1 jika iya, Ketik 2 jika mengulang, Ketik lainnya utk kembali ke halaman utama barang: ")
    if is_okay == "1":
        # ------------------------ TUGAS < buat implementasi dari fungsi addProduct untuk menginputkan data product baru[DONE]
        your_function.addProduct(
            model.products, id_barang_new, nama_barang, harga_barang)
        # ------------------------ TUGAS >
        product_show_screen()
    elif is_okay == 2:
        # ------------------------ TUGAS < panggil fungsi product_input_screen() disini / ganti pass dibawah dengan memanggil fungsinya [DONE]
        product_input_screen()
        # ------------------------ TUGAS >
    else:
        # ------------------------ TUGAS < panggil fungsi main_product_screen() disini / ganti pass dibawah dengan memanggil fungsinya [DONE]
        main_product_screen()
        # ------------------------ TUGAS >


def product_show_screen(id_barang=None):
    sentences_list = [
        "APLIKASI PENJUALAN - BARANG - LIHAT/HAPUS/EDIT/CARI",
        "",
    ]

    if len(model.products) == 0:
        sentences_list.append("Barang kosong, silahkan isi terlebih dahulu")
        sentences_list.append("")
        sentences_list.append("Ketik 3 untuk input data barang")
    else:
        id_barang = id_barang if id_barang is not None else "barang_" + \
            str(min([int(x.removeprefix("barang_"))
                for x in model.products.keys()]))
        sentences_list.append("Data Barang")
        sentences_list.append("")
        sentences_list.append("ID Barang: "+id_barang)
        sentences_list.append(
            "Nama Barang: "+model.products[id_barang]["nama_barang"])
        sentences_list.append(
            "Harga Barang: "+locale.currency(model.products[id_barang]["harga_barang"], grouping=True))
        sentences_list.append("")
        sentences_list.append(
            "Jumlah data "+str(len(model.search_products))+", Ketik < dan > utk pindah page data")
        sentences_list.append("Ketik 1 untuk hapus data barang")
        sentences_list.append("Ketik 2 untuk edit data barang")
        sentences_list.append("Ketik 3 untuk input data barang")
        sentences_list.append("Ketik 4 untuk cari data barang")
        sentences_list.append(
            "Ketik lainnya untuk kembali halaman barang utama")
    utils.render_screen(False, *sentences_list)
    command = input("Pilihan: ")
    if command == ">":
        id_barang_int_next = min([int(x.removeprefix("barang_")) for x in model.products.keys(
        ) if int(x.removeprefix("barang_")) > int(id_barang.removeprefix("barang_"))], default=-1)
        if id_barang_int_next == -1:
            product_show_screen(id_barang=id_barang)
        else:
            product_show_screen(id_barang="barang_"+str(id_barang_int_next))
    elif command == "<":
        id_barang_int_prev = max([int(x.removeprefix("barang_")) for x in model.products.keys(
        ) if int(x.removeprefix("barang_")) < int(id_barang.removeprefix("barang_"))], default=-1)
        if id_barang_int_prev == -1:
            product_show_screen(id_barang=id_barang)
        else:
            product_show_screen(id_barang="barang_"+str(id_barang_int_prev))
    elif command == "1":
        is_okay = input(
            "Anda yakin akan menghapus data diatas?, Ketik y jika iya: ")
        if is_okay == "y":
            # ------------------------ TUGAS < hapus product yang memiliki id tertentu dari dictionary model.products menggunakan variable id_barang [DONE]
            model.products.pop(id_barang)
            # ------------------------ TUGAS >
            product_show_screen()
        else:
            product_show_screen(id_barang=id_barang)
    elif command == "2":
        nama_barang = input(
            "Nama barang (sebelumnya "+model.products[id_barang]["nama_barang"]+"): ")
        harga_barang = float(input("Harga barang dalam decimal (sebelumnya "+locale.currency(
            model.products[id_barang]["harga_barang"], grouping=True)+"): "))
        is_okay = input(
            "Update data barang? Ketik 1 jika iya, Ketik 2 jika mengulang, Ketik lainnya utk kembali ke halaman utama barang")
        if is_okay == "1":
            model.products[id_barang]["nama_barang"] = nama_barang
            model.products[id_barang]["harga_barang"] = harga_barang
            product_show_screen(id_barang)
    elif command == "3":
        product_input_screen()
    elif command == "4":
        keyword = input("Ketik keyword: ")
        model.search_products = {k: v for (k, v) in model.products.items() if (
            keyword in v["id_barang"]) or (keyword in v["nama_barang"]) or (keyword in str(v["harga_barang"]))}
        product_search_screen()
    else:
        main_product_screen()


def product_search_screen(id_barang=None):
    sentences_list = [
        "APLIKASI PENJUALAN - BARANG - HASIL PENCARIAN",
        "",
    ]

    if len(model.search_products) == 0:
        sentences_list.append(
            "Data Barang berdasarkan keyword yang dimasukkan tidak dapat ditemukan")
        sentences_list.append("")
        sentences_list.append("Ketik 3 untuk input data barang")
    else:
        id_barang = id_barang if id_barang is not None else "barang_" + \
            str(min([int(x.removeprefix("barang_"))
                for x in model.search_products.keys()]))
        sentences_list.append("Data Barang")
        sentences_list.append("")
        sentences_list.append("ID Barang: "+id_barang)
        sentences_list.append(
            "Nama Barang: "+model.products[id_barang]["nama_barang"])
        sentences_list.append(
            "Harga Barang: "+locale.currency(model.products[id_barang]["harga_barang"], grouping=True))
        sentences_list.append("")
        sentences_list.append("Jumlah data pencarian "+str(
            len(model.search_products))+", Ketik < dan > utk pindah page data")
        sentences_list.append("Ketik 3 untuk input data barang")
        sentences_list.append("Ketik 4 untuk cari data barang")
        sentences_list.append(
            "Ketik lainnya untuk kembali halaman barang utama")
    utils.render_screen(False, *sentences_list)
    command = input("Pilihan: ")
    if command == ">":
        id_barang_int_next = min([int(x.removeprefix("barang_")) for x in model.search_products.keys(
        ) if int(x.removeprefix("barang_")) > int(id_barang.removeprefix("barang_"))], default=-1)
        if id_barang_int_next == -1:
            product_search_screen(id_barang=id_barang)
        else:
            product_search_screen(id_barang="barang_"+str(id_barang_int_next))
    elif command == "<":
        id_barang_int_prev = max([int(x.removeprefix("barang_")) for x in model.search_products.keys(
        ) if int(x.removeprefix("barang_")) < int(id_barang.removeprefix("barang_"))], default=-1)
        if id_barang_int_prev == -1:
            product_search_screen(id_barang=id_barang)
        else:
            product_search_screen(id_barang="barang_"+str(id_barang_int_prev))
    elif command == "3":
        product_input_screen()
    elif command == "4":
        keyword = input("Ketik keyword: ")
        model.search_products = {k: v for (k, v) in model.products.items() if (
            keyword in v["id_barang"]) or (keyword in v["nama_barang"]) or (keyword in str(v["harga_barang"]))}
        product_search_screen()
    else:
        main_product_screen()


def transaksi_screen():
    utils.render_screen(False, "APLIKASI PENJUALAN - TRANSAKSI PENJUALAN", "", "",
                        "INPUT TRANSAKSI > 1", "LIHAT DATA TRANSAKSI > 2", "Home Screen > 8", "KELUAR > 9")
    command = input("Pilih: ")
    if command == "1":
        transaksi_input_screen()
    elif command == "2":
        transaksi_show_screen()
    elif command == "8":
        home_screen()
    elif command == "9":
        utils.exit_apps()
    else:
        transaksi_screen()


def transaksi_input_screen(is_new=True):
    utils.render_screen(False, "APLIKASI PENJUALAN - TRANSAKSI PENJUALAN - INPUT", "", "", "Masukkan data barang pada bagian input transaksi",
                        "ID transaksi tidak perlu diinputkan, karena akan digenerate secara otomatis", "Barang yang ada di transaksi ini : "+str(len(model.temporary_transaction))+" jenis")

    if is_new:
        model.temporary_transaction = {}
        # this is list comprehension, if you are confused about it just google
        current_max_id_transaksi = max(
            [int(x.removeprefix("transaksi_")) for x in model.transactions.keys()], default=1)
        id_transaksi_int_new = current_max_id_transaksi + 1
        id_transaksi_new = "transaksi_"+str(id_transaksi_int_new)
    else:
        id_transaksi_new = list(model.temporary_transaction.keys())[
            0].split("-")[0]
    print("ID transaksi: "+id_transaksi_new)
    id_barang = input("ID barang: ")
    if model.products.get(id_barang) is None:
        input("ID barang yang anda input tidak dapat ditemukan, cek kembali data... ")
        if len(model.temporary_transaction) > 0:
            transaksi_input_screen(False)
        else:
            transaksi_input_screen()
        return
    jumlah_barang = int(input("Jumlah barang: "))
    sub_total = float(jumlah_barang*model.products[id_barang]["harga_barang"])
    print("Subtotal: "+locale.currency(sub_total, grouping=True))
    model.temporary_transaction[id_transaksi_new+"-"+id_barang] = {
        "id_transaksi": id_transaksi_new,
        "id_barang": id_barang,
        "jumlah_barang": jumlah_barang,
        "sub_total_harga": sub_total,
    }
    total = 0.0
    # learn about this assignment expression in python, just google about assignment expression with := operator
    [total := total + x["sub_total_harga"]
        for x in model.temporary_transaction.values()]
    # ------------------------ TUGAS < buat implementasi dari fungsi calculateTotalPriceAfterDiscount untuk menginputkan data product baru[DONE]
    total_after_discount = your_function.calculateTotalPriceAfterDiscount(
        total)
    # ------------------------ TUGAS >
    print("Total harga: "+locale.currency(total_after_discount, grouping=True))
    print("Diskon: "+locale.currency(total-total_after_discount, grouping=True))
    option = input(
        "Ketik 1 untuk tambah barang lain untuk transaksi ini, atau Ketik 2 untuk selesai input transaksi: ")
    if option == "1":
        transaksi_input_screen(False)
    else:
        model.transactions.update({f'{id_transaksi_new}': {
            'id_transaksi': f'{id_transaksi_new}', 'total_harga': total_after_discount}})
        model.detail_transactions.update(model.temporary_transaction)
        model.temporary_transaction = {}
        transaksi_show_screen()


def transaksi_show_screen(id_transaksi=None, id_barang=None):
    global id_transaksi_int_next
    global id_transaksi_int_prev
    sentences_list = [
        "APLIKASI PENJUALAN - TRANSAKSI PENJUALAN - LIHAT REPORT",
        "",
    ]

    if len(model.transactions) == 0:
        sentences_list.append("Data transaksi penjualan tidak kosong")
        sentences_list.append("")
        sentences_list.append("Ketik 3 untuk input data transaksi penjualan")
    else:
        id_transaksi = id_transaksi if id_transaksi is not None else "transaksi_" + \
            str(min([int(x.removeprefix("transaksi_"))
                for x in model.transactions.keys()]))
        list_id_barang_int = [int(key.split("-")[1].removeprefix("barang_"))
                              for key in model.detail_transactions.keys() if id_transaksi in key]
        total = 0
        [total := total + value["sub_total_harga"]
            for value in model.detail_transactions.values() if id_transaksi == value["id_transaksi"]]
        total_after_discount = your_function.calculateTotalPriceAfterDiscount(
            total)
        if id_barang is None:
            id_barang = "barang_"+str(min(list_id_barang_int, default=0))
        sentences_list.append("Data Transaksi Penjualan")
        sentences_list.append("")
        sentences_list.append("ID Transaksi: "+id_transaksi)
        sentences_list.append("Total transaksi setelah diskon: "+locale.currency(
            model.transactions[id_transaksi]["total_harga"], grouping=True))
        sentences_list.append(
            "Diskon: "+locale.currency(total - total_after_discount, grouping=True))
        sentences_list.append("")
        sentences_list.append("Detail Transaksi")
        sentences_list.append("")
        sentences_list.append(
            "Id Barang: "+model.detail_transactions[id_transaksi+"-"+id_barang]["id_barang"])
        sentences_list.append(
            "Jumlah Barang: "+str(model.detail_transactions[id_transaksi+"-"+id_barang]["jumlah_barang"]))
        sentences_list.append("Subtotal: "+locale.currency(
            model.detail_transactions[id_transaksi+"-"+id_barang]["sub_total_harga"], grouping=True))
        sentences_list.append("")
        sentences_list.append(
            "Jumlah data detail transaksi "+str(len(list_id_barang_int)))
        sentences_list.append(
            "Ketik < dan > utk pindah data detail transaksi, Ketik << dan >> untuk pindah data transaksi")
        sentences_list.append("Ketik 3 untuk input data transaksi penjualan")
        sentences_list.append(
            "Ketik lainnya untuk kembali halaman transaksi utama")
    utils.render_screen(False, *sentences_list)
    command = input("Pilihan: ")
    if command == ">":
        id_barang_int_next = min([x for x in list_id_barang_int if x > int(
            id_barang.removeprefix("barang_"))], default=-1)
        if id_barang_int_next == -1:
            transaksi_show_screen(
                id_transaksi=id_transaksi, id_barang=id_barang)
        else:
            transaksi_show_screen(id_transaksi=id_transaksi,
                                  id_barang="barang_"+str(id_barang_int_next))
    elif command == "<":
        id_barang_int_prev = max([x for x in list_id_barang_int if x < int(
            id_barang.removeprefix("barang_"))], default=-1)
        if id_barang_int_prev == -1:
            transaksi_show_screen(
                id_transaksi=id_transaksi, id_barang=id_barang)
        else:
            transaksi_show_screen(id_transaksi=id_transaksi,
                                  id_barang="barang_"+str(id_barang_int_prev))
    elif command == ">>":
        id_transaksi_int_next = min([int(x.removeprefix("transaksi_")) for x in model.transactions.keys(
        ) if int(x.removeprefix("transaksi_")) > int(id_transaksi.removeprefix("transaksi_"))], default=-1)
        if id_transaksi_int_next == -1:
            transaksi_show_screen(
                id_transaksi=id_transaksi, id_barang=id_barang)
        else:
            transaksi_show_screen(
                id_transaksi="transaksi_"+str(id_transaksi_int_next))
    elif command == "<<":
        id_transaksi_int_prev = max([int(x.removeprefix("transaksi_")) for x in model.transactions.keys(
        ) if int(x.removeprefix("transaksi_")) < int(id_transaksi.removeprefix("transaksi_"))], default=-1)
        if id_transaksi_int_prev == -1:
            transaksi_show_screen(
                id_transaksi=id_transaksi, id_barang=id_barang)
        else:
            transaksi_show_screen(
                id_transaksi="transaksi_"+str(id_transaksi_int_prev))
    elif command == "3":
        transaksi_input_screen()
    else:
        transaksi_screen()
