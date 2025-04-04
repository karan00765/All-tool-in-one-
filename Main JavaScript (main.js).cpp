// Load common components
function loadComponents() {
  fetch('header.html').then(r => r.text()).then(html => {
    document.getElementById('header-container').innerHTML = html;
    initializeSearch();
  });
  fetch('footer.html').then(r => r.text()).then(html => {
    document.getElementById('footer-container').innerHTML = html;
  });
}

// Tool data - Expand this to 100+ entries
const tools = [
  {
    category: 'Text Tools',
    name: 'Word Counter',
    path: '/tools/text-tools/word-counter.html',
    description: 'Count words and characters in your text'
  },
  {
    category: 'Image Tools',
    name: 'Image to PNG Converter',
    path: '/tools/image-tools/image-to-png.html',
    description: 'Convert images to PNG format'
  }
];

// Initialize search functionality
function initializeSearch() {
  const searchInput = document.getElementById('searchInput');
  searchInput.addEventListener('input', filterTools);
}

// Render tools grid
function renderTools(filter = '') {
  const container = document.getElementById('toolsContainer');
  container.innerHTML = '';
  
  const filtered = tools.filter(tool => 
    tool.name.toLowerCase().includes(filter.toLowerCase()) ||
    tool.description.toLowerCase().includes(filter.toLowerCase())
  );

  filtered.forEach(tool => {
    const card = `
      <div class="col-12 col-md-6 col-lg-4 col-xl-3">
        <div class="card h-100">
          <div class="card-body">
            <h5 class="card-title">${tool.name}</h5>
            <p class="card-text">${tool.description}</p>
            <a href="${tool.path}" class="btn btn-primary">Use Tool</a>
          </div>
          <div class="card-footer">${tool.category}</div>
        </div>
      </div>
    `;
    container.innerHTML += card;
  });
}

// Initial load
document.addEventListener('DOMContentLoaded', () => {
  loadComponents();
  renderTools();
});

// Search filter function
function filterTools(e) {
  renderTools(e.target.value);
}