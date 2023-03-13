def addProduct(products, id_barang_new, nama_barang, harga_barang):
    # this function doesn't need return value
    products.update(
        {f'{id_barang_new}': {'id_barang': f'{id_barang_new}', 'nama_barang': f'{nama_barang}', 'harga_barang': harga_barang}})
    # modify this pass with your own implementation
# [DONE]


def calculateTotalPriceAfterDiscount(totalPrice):
    # this function need return value
    if (totalPrice >= 500000):
        diskon = totalPrice*0.25
        totalPrice = totalPrice - diskon
    elif (totalPrice >= 150000):
        diskon = totalPrice*0.1
        totalPrice = totalPrice - diskon
    else:
        pass
    # modify this return with your own implementation (consider if else threshold for the discount)
    return totalPrice
# [DONE]
