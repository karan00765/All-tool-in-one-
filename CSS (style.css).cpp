.ad-placeholder {
  background: #f0f0f0;
  padding: 20px;
  text-align: center;
  border: 2px dashed #ccc;
}

.card {
  transition: transform 0.2s;
}

.card:hover {
  transform: translateY(-5px);
}

.ad-sidebar {
  position: sticky;
  top: 20px;
  background: #f8f9fa;
  padding: 20px;
  border-radius: 8px;
}

@media (max-width: 768px) {
  .ad-sidebar {
    margin-top: 2rem;
  }
}