/* === Quality Clouds Developer Form === */

:root {
  --qc-teal: #17B098;
  --qc-blue: #4368B0;
  --qc-yellow: #EFD500;
  --qc-orange: #F18627;
  --qc-bg: #F8FAFC;
  --qc-text: #1A1A1A;
  --radius: 12px;
  --transition: all 0.25s ease;
  font-family: "Inter", "Segoe UI", Roboto, sans-serif;
}

body {
  margin: 0;
  background: var(--qc-bg);
  color: var(--qc-text);
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  min-height: 100vh;
}

/* === Header === */
header {
  display: flex;
  align-items: center;
  justify-content: center;
  gap: 0.75rem;
  margin-top: 2rem;
}

header img {
  height: 48px;
  width: auto;
}

main.card {
  background: #fff;
  padding: 2.5rem 2rem;
  border-radius: var(--radius);
  box-shadow: 0 6px 20px rgba(0, 0, 0, 0.08);
  width: 100%;
  max-width: 480px;
  text-align: left;
  margin: 2rem 1rem;
}

h1 {
  font-size: 1.75rem;
  color: var(--qc-blue);
  margin-bottom: 0.25rem;
}

p {
  color: #333;
  margin-top: 0;
  margin-bottom: 1.5rem;
}

.field {
  margin-bottom: 1rem;
}

.grid {
  display: grid;
  grid-template-columns: 1fr 1fr;
  gap: 1rem;
}

label {
  font-weight: 600;
  font-size: 0.95rem;
  margin-bottom: 0.25rem;
  display: block;
  color: var(--qc-blue);
}

input {
  width: 100%;
  padding: 0.75rem 0.9rem;
  border-radius: var(--radius);
  border: 1px solid #d1d5db;
  background: #fff;
  color: var(--qc-text);
  font-size: 1rem;
  transition: var(--transition);
}

input:focus {
  border-color: var(--qc-teal);
  outline: none;
  box-shadow: 0 0 0 3px rgba(23, 176, 152, 0.2);
}

button {
  background: var(--qc-teal);
  color: white;
  border: none;
  padding: 0.9rem 1.2rem;
  border-radius: var(--radius);
  font-size: 1rem;
  font-weight: 600;
  cursor: pointer;
  transition: var(--transition);
}

button:hover {
  background: var(--qc-blue);
}

#msg {
  margin-top: 1rem;
  font-weight: 500;
  min-height: 1.2rem;
}

#msg.success {
  color: var(--qc-teal);
}

#msg.error {
  color: #e63946;
}

.hp {
  display: none;
}

/* === Responsive === */
@media (max-width: 480px) {
  .grid {
    grid-template-columns: 1fr;
  }
}
