// Sample Unit Converter Logic (length-converter.js)
function initLengthConverter() {
  const units = {
    meter: 1,
    kilometer: 1000,
    centimeter: 0.01,
    inch: 0.0254,
    foot: 0.3048
  };

  const fromUnit = document.getElementById('fromUnit');
  const toUnit = document.getElementById('toUnit');
  const inputValue = document.getElementById('inputValue');
  const result = document.getElementById('result');

  function convert() {
    const value = parseFloat(inputValue.value) || 0;
    const fromFactor = units[fromUnit.value];
    const toFactor = units[toUnit.value];
    result.textContent = (value * fromFactor / toFactor).toFixed(4);
  }

  inputValue.addEventListener('input', convert);
  fromUnit.addEventListener('change', convert);
  toUnit.addEventListener('change', convert);
}