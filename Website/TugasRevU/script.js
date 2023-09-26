
function convertCelcius() {
  var celciusInput = document.getElementById("input");
  var result = document.getElementById("hasil");

  
  if (celciusInput.value === "" || isNaN(celciusInput.value)) {
    alert("Masukkan temperature Celcius yang valid");
    resetFields();
    return;
  } else {
    
    var celcius = parseFloat(celciusInput.value);
    var fahrenheit = (celcius * 9) / 5 + 32;

    
    result.textContent = "Hasil : " + celcius + "°C = " + fahrenheit + "°F";
    rumus.textContent =
      "Rumus : " + fahrenheit + "°F = " + celcius + "°C * (9/5) + 32 ";
  }
}

function reverseButtonC() {
  
  location.reload();
}


function reverseButtonF() {
  resetButton();
  var fahrenheitInput = document.getElementById("input");
  var label = document.querySelector('label[for="input"]');
  var convertButton = document.querySelector(
    'button[onclick="convertCelcius()"]'
  );
  var reverseButtonF = document.querySelector(
    'button[onclick="reverseButtonF()"]'
  );

  
  label.textContent = "Fahrenheit:";
  fahrenheitInput.placeholder = "Masukkan temperature dalam Fahrenheit";

  
  convertButton.setAttribute("onclick", "convertFahrenheit()");
  reverseButtonF.setAttribute("onclick", "reverseButtonC()");
}


function convertFahrenheit() {
  var fahrenheitInput = document.getElementById("input");
  var result = document.getElementById("hasil");
  var logic = document.getElementById("rumus");

  
  if (fahrenheitInput.value === "" || isNaN(fahrenheitInput.value)) {
    alert("Masukkan temperature Farenheit yang valid");
    return;
  }

  
  var fahrenheit = parseFloat(fahrenheitInput.value);
  var celcius = ((fahrenheit - 32) * 5) / 9;

  
  result.textContent = "Hasil = " + fahrenheit + "°F = " + celcius + "°C";
  logic.textContent =
    "Rumus = " + celcius + "°C = (" + fahrenheit + "°F - 32) * 5/9";
}


function resetButton() {
  var Input = document.getElementById("input");
  var result = document.getElementById("hasil");
  var logic = document.getElementById("rumus");

  Input.value = "";
  result.textContent = "";
  logic.textContent = "";
}
