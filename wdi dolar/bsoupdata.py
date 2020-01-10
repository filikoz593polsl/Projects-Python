import requests
from bs4 import BeautifulSoup

def get_dolar():
    url = "https://transferwise.com/pl/currency-converter/usd-to-pln-rate"
    answer = requests.get(url)
    soup = BeautifulSoup(answer.text, "html.parser")
    mySpans = soup.findAll("span", class_='text-success')
    value = mySpans[0].get_text()
    val = value.replace(',', '.')
    dolar_course = float(val)
    return dolar_course


