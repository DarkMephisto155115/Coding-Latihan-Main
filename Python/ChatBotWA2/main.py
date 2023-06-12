from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.chrome.options import Options
import time

# Inisialisasi WebDriver
chrome_options = Options()
# Mode headless (tanpa jendela browser terbuka)
# chrome_options.add_argument("--headless")
# Ganti dengan path sesuai lokasi Chrome WebDriver Anda
driver = webdriver.Chrome(
    'C:\\Users\\Dark_Mephisto\\Downloads\\chromedriver_win32')

# Membuka WhatsApp Web
driver.get('https://web.whatsapp.com')
time.sleep(10)  # Tunggu 10 detik untuk memindai kode QR

# Pilih kontak yang akan diajak chat
search_box = driver.find_element_by_xpath(
    '//div[@contenteditable="true"][@data-tab="3"]')
search_box.click()
search_box.send_keys('Nama Kontak atau Grup')
time.sleep(2)
search_box.send_keys(Keys.ENTER)
time.sleep(2)

# Kirim pesan
chat_box = driver.find_element_by_xpath(
    '//div[@contenteditable="true"][@data-tab="6"]')
chat_box.send_keys('Halo, ini pesan dari chatbot Python!')
chat_box.send_keys(Keys.ENTER)

# Tutup browser setelah selesai
driver.quit()
