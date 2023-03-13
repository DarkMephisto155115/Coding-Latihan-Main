# current_login data in dictionary
# key is word string of "username" and "login_time", value is the value of username and login_time
# { username: username, login_time: login_time }
current_login = {
    "username": None,
    "login_time": None, 
}

# users data in dictionary
# key is the username, value is the data of the user
# { the_username: {username: '', password: '', nama: '', role: 'admin'} }
users = {
    "admin": {
        "username": "admin",
        "password": "administrator",
        "nama": "Admin Aplikasi Penjualan",
        "role": "admin",
    }
}

# products data in dictionary
# key is the id_barang, value is the data of the product
# { the_id_barang: {id_barang: '', nama_barang: '', harga_barang: 0.0} }
products = {
    "barang_1": {
        "id_barang": "barang_1",
        "nama_barang": "Faster Ballpoint C600",
        "harga_barang": 22000.0,
    }
}

# search_products in dictionary
search_products = {

}

# transactions data in dictionary
# key is the id_transaksi, value is the data of the transaction
# { the_id_transaksi: {id_transaksi: '', total_harga: 0.0} }
transactions = {
    "transaksi_1": {
        "id_transaksi": "transaksi_1",
        "total_harga": 44000.0,
    }
}

# detail_transactions data in dictionary
# key is the id_transaksi-id_barang (combination of id_transaksi dan id_barang with dash symbol for the delimiter), value is the data of the detail transaction for each product
# { the_id_transaksi-id_barang: {id_transaksi: '', id_barang: '', jumlah_barang: 0, sub_total_harga: 0} }
detail_transactions = {
    "transaksi_1-barang_1": {
        "id_transaksi": "transaksi_1",
        "id_barang": "barang_1",
        "jumlah_barang": 2,
        "sub_total_harga": 22000.0,
    }
}

temporary_transaction = {
    
}