<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Word Counter - MultiTools</title>
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
  <link href="/assets/css/style.css" rel="stylesheet">
</head>
<body>
  <div id="header-container"></div>

  <main class="container my-5">
    <div class="row">
      <div class="col-md-8">
        <h2>Word Counter</h2>
        <textarea id="inputText" class="form-control" rows="8" 
                  placeholder="Enter your text here..."></textarea>
        <div class="results mt-3">
          <p>Words: <span id="wordCount">0</span></p>
          <p>Characters: <span id="charCount">0</span></p>
        </div>
      </div>
      <div class="col-md-4">
        <div class="ad-sidebar">Advertisement</div>
      </div>
    </div>
  </main>

  <div id="footer-container"></div>

  <script src="/assets/js/main.js"></script>
  <script>
    // Word Counter Logic
    const inputText = document.getElementById('inputText');
    const wordCount = document.getElementById('wordCount');
    const charCount = document.getElementById('charCount');

    inputText.addEventListener('input', updateCounts);

    function updateCounts() {
      const text = inputText.value.trim();
      const words = text ? text.split(/\s+/).length : 0;
      wordCount.textContent = words;
      charCount.textContent = text.length;
    }
  </script>
</body>
</html>