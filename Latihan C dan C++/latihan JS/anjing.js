<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Tes</title>
  </head>
  <body>
    <script>
      function index_nilai() {
        var inputEl_nilai = document.getElementById("input-el").value;
        if (inputEl_nilai >= 80 && inputEl_nilai <= 100) {
          document.getElementById("display-hasil").innerText = "A";
        } else if (inputEl_nilai >= 70 && inputEl_nilai <= 79) {
          document.getElementById("display-hasi").innerText = "AB";
        } else if (inputEl_nilai >= 60 && inputEl_nilai <= 69) {
          document.getElementById("display-hasil").innerText = "B";
        } else if (inputEl_nilai >= 50 && inputEl_nilai <= 59) {
          document.getElementById("display-hasil").innerText = "BC";
        } else if (inputEl_nilai >= 40 && inputEl_nilai <= 49) {
          document.getElementById("display-hasil").innerText = "C";
        } else if (inputEl_nilai >= 30 && inputEl_nilai <= 39) {
          document.getElementById("display-hasil").innerText = "D";
        } else if (inputEl_nilai >= 0 && inputEl_nilai <= 29) {
          document.getElementById("display-hasil").innerText = "E";
        }
      }
    </script>
    <h1>Masukkan Angka</h1>
    <input type="number" id="input-el" />
    <button id="input-btn" onclick="index_nilai()">Ok</button>
    <h2 id="display-hasil"></h2>
  </body>
</html>
