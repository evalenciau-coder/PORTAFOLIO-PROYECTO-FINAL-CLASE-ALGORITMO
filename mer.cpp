include<iostrem>
using namespace std;
int main(){

<!doctype html>
<html lang="es">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>Mi Portafolio</title>
  styles.css
</head>
<body>
  <header class="container">
    <h1>Mi Portafolio</h1>
    <nav>
      #promptsPrompts rápidos</a>
      #uploadSubir archivos</a>
      #filesArchivos públicos</a>
      #contactContacto</a>
    </nav>
  </header>

  <main class="container">
    <section id="about">
      <h2>Sobre mí</h2>
      <p>¡Hola! Soy [Tu Nombre]. Aquí encontrarás mis proyectos y archivos públicos.</p>
    </section>

    <section id="prompts">
      <h2>Prompts rápidos (3 mínimos)</h2>
      <div class="prompts">
        <button id="promptProyectosWeb">Mostrar solo proyectos web</button>
        <button id="promptAbrirCV">Abrir mi CV</button>
        <button id="promptBuscarDiseno">Buscar “diseño” en mis archivos</button>
      </div>
      <small>Tip: Estos son atajos dentro del portafolio. Puedes añadir más o convertirlos en acciones de IA.</small>
    </section>

    <section id="projects">
      <h2>Proyectos</h2>
      <div class="tags">
        <span class="tag" data-tag="web">web</span>
        <span class="tag" data-tag="data">data</span>
        <span class="tag" data-tag="design">design</span>
      </div>
      <div id="projectGrid" class="grid">
        <!-- Demo de tarjetas de proyecto -->
        <article class="card" data-tags="web">
          <h3>Landing Page</h3>
          <p>Proyecto web con HTML/CSS/JS.</p>
        </article>
        <article class="card" data-tags="data">
          <h3>Análisis de Datos</h3>
          <p>Notebook con gráficos y KPIs.</p>
        </article>
        <article class="card" data-tags="design">
          <h3>Sistema de Diseño</h3>
          <p>Componentes y guías visuales.</p>
        </article>
      </div>
    </section>

    <section id="upload">
      <h2>Subir archivos</h2>
      <p>Selecciona un archivo para subirlo a la carpeta pública <code>/uploads</code>.</p>
      <input type="file" id="fileInput" />
      <button id="uploadBtn">Subir</button>
      <div id="progress" class="progress">
        <div id="progressBar"></div>
      </div>
      <p id="uploadStatus"></p>
    </section>

    <section id="files">
      <h2>Archivos públicos</h2>
      <input type="text" id="searchInput" placeholder="Buscar por nombre..." />
      <ul id="fileList" class="list"></ul>
    </section>

    <section id="contact">
      <h2>Contacto</h2>
      <p>Email: <a href="mailto:tunombre@correo.comcorreo.com</a></p>
      <p>LinkedIn/GitHub: agrega tus enlaces.</p>
    </section>
  </main>

  <footer class="container">
    <small>© <span id="year"></span> Tu Nombre</small>
  </footer>

  <!-- Script principal -->
  app.js</script>
</body>
</html>
:root {
  --bg: #0b0f14;
  --fg: #e9eef5;
  --muted: #9fb3c8;
  --brand: #7c5cff;
  --card: #121825;
  --accent: #1f2840;
  --success: #21c07a;
}

* { box-sizing: border-box; }
body {
  margin: 0;
  font-family: system-ui, -apple-system, Segoe UI, Roboto, Arial, sans-serif;
  background: linear-gradient(180deg, var(--bg), #0d1320);
  color: var(--fg);
}

.container { max-width: 980px; margin: 0 auto; padding: 24px; }

header {
  display: flex; justify-content: space-between; align-items: center;
  border-bottom: 1px solid #1f2430;
}
header h1 { margin: 0; font-size: 1.4rem; }
nav a { color: var(--muted); margin-left: 16px; text-decoration: none; }
nav a:hover { color: var(--fg); }

h2 { margin-top: 32px; border-left: 4px solid var(--brand); padding-left: 8px; }

.prompts { display: flex; gap: 12px; flex-wrap: wrap; }
.prompts button {
  background: var(--accent); color: var(--fg); border: 1px solid #2a3350;
  border-radius: 8px; padding: 10px 14px; cursor: pointer;
}
.prompts button:hover { border-color: var(--brand); }

.tags { margin: 8px 0 16px; }
.tag {
  display: inline-block; margin-right: 8px; padding: 4px 10px; border-radius: 999px;
  background: #1a2133; color: var(--muted); border: 1px solid #2a3350; cursor: pointer;
}
.tag:hover { color: var(--fg); border-color: var(--brand); }

.grid {
  display: grid; grid-template-columns: repeat(auto-fill, minmax(240px, 1fr)); gap: 16px;
}
.card {
  background: var(--card); border: 1px solid #1f2430; border-radius: 12px; padding: 14px;
  box-shadow: 0 2px 10px rgba(0,0,0,.25);
}
.card h3 { margin: 0 0 6px; }

.progress { width: 100%; height: 10px; background: #141a29; border-radius: 8px; margin-top: 10px; overflow: hidden; }
#progressBar { width: 0; height: 100%; background: var(--success); transition: width .2s ease; }

.list { list-style: none; padding-left: 0; }
.list li {
  background: var(--card); border: 1px solid #1f2430; border-radius: 10px;
  margin: 8px 0; padding: 10px; display: flex; justify-content: space-between; align-items: center;
}
.list a { color: #b9d1ff; text-decoration: none; }
.list a:hover { text-decoration: underline; }

input[type="text"] {
  width: 100%; padding: 10px; border-radius: 8px; border: 1px solid #2a3350; background: #0f1523; color: var(--fg);
  margin: 8px 0 12px;
}

footer { border-top: 1px solid #1f2430; text-align: center; color: var(--muted); }

// ======================
// 1) Configura Firebase
// ======================
// Docs: https://firebase.google.com/docs/web/setup
import { initializeApp } from "https://www.gstatic.com/firebasejs/10.12.4/firebase-app.js";
import { getAuth, signInAnonymously } from "https://www.gstatic.com/firebasejs/10.12.4/firebase-auth.js";
import { getStorage, ref, uploadBytesResumable, getDownloadURL, listAll } from "https://www.gstatic.com/firebasejs/10.12.4/firebase-storage.js";

const firebaseConfig = {
  apiKey: "TU_API_KEY",
  authDomain: "TU_AUTH_DOMAIN",
  projectId: "TU_PROJECT_ID",
  storageBucket: "TU_STORAGE_BUCKET",
  messagingSenderId: "TU_SENDER_ID",
  appId: "TU_APP_ID"
};

const app = initializeApp(firebaseConfig);
const auth = getAuth(app);
const storage = getStorage(app);

// Autenticación anónima para permitir subir (según reglas)
signInAnonymously(auth).catch(console.error);

// ==============
// Utilidades UI
// ==============
const $ = (sel) => document.querySelector(sel);
$("#year").textContent = new Date().getFullYear();

// ==========================
// 2) Lógica de los "prompts"
// ==========================
const projectCards = () => Array.from(document.querySelectorAll("#projectGrid .card"));

$("#promptProyectosWeb").addEventListener("click", () => {
  projectCards().forEach(card => {
    const show = (card.dataset.tags || "").includes("web");
    card.style.display = show ? "" : "none";
  });
});

$("#promptAbrirCV").addEventListener("click", () => {
  // Reemplaza con la URL real de tu CV (por ejemplo, un PDF en Firebase Storage o Google Drive público)
  const cvUrl = "https://tu-cv-publico.pdf";
  window.open(cvUrl, "_blank", "noopener");
});

$("#promptBuscarDiseno").addEventListener("click", () => {
  const input = $("#searchInput");
  input.value = "diseño";
  input.dispatchEvent(new Event("input"));
});

// Filtro por tags desde chips
document.querySelectorAll(".tag").forEach(tag => {
  tag.addEventListener("click", () => {
    const t = tag.dataset.tag;
    projectCards().forEach(card => {
      const show = (card.dataset.tags || "").includes(t);
      card.style.display = show ? "" : "none";
    });
  });
});

// ===================================
// 3) Subida de archivos a /uploads/
// ===================================
const fileInput = $("#fileInput");
const uploadBtn = $("#uploadBtn");
const progressBar = $("#progressBar");
const uploadStatus = $("#uploadStatus");
const fileList = $("#fileList");
const searchInput = $("#searchInput");

uploadBtn.addEventListener("click", async () => {
  const file = fileInput.files[0];
  if (!file) {
    uploadStatus.textContent = "Selecciona un archivo primero.";
    return;
  }

  const filePath = `uploads/${Date.now()}-${file.name}`;
  const storageRef = ref(storage, filePath);
  const task = uploadBytesResumable(storageRef, file);

  task.on("state_changed", (snapshot) => {
    const pct = Math.round((snapshot.bytesTransferred / snapshot.totalBytes) * 100);
    progressBar.style.width = pct + "%";
    uploadStatus.textContent = `Subiendo... ${pct}%`;
  }, (err) => {
    console.error(err);
    uploadStatus.textContent = "Error al subir. Revisa la consola.";
  }, async () => {
    const url = await getDownloadURL(task.snapshot.ref);
    uploadStatus.textContent = "¡Subida completa!";
    progressBar.style.width = "0%";
    fileInput.value = null;
    addFileToList({ name: file.name, url });
  });
});

// ===================================
// 4) Listado de archivos públicos
// ===================================
async function loadFiles() {
  // Lista todo lo que haya en /uploads
  const uploadsRef = ref(storage, "uploads");
  try {
    const res = await listAll(uploadsRef);
    const items = await Promise.all(res.items.map(async (itemRef) => {
      const url = await getDownloadURL(itemRef);
      const name = itemRef.name.replace(/^\d+-/, ""); // quita el prefijo timestamp
      return { name, url };
    }));
    renderFileList(items);
  } catch (e) {
    console.warn("Aún no hay archivos en /uploads o faltan permisos.", e);
  }
}

function renderFileList(items) {
  fileList.innerHTML = "";
  const fragment = document.createDocumentFragment();
  items.forEach(add => {
    const li = document.createElement("li");
    const left = document.createElement("span");
    left.textContent = add.name;
    const right = document.createElement("a");
    right.href = add.url;
    right.target = "_blank";
    right.rel = "noopener";
    right.textContent = "Abrir/Descargar";
    li.dataset.filename = add.name.toLowerCase();
    li.appendChild(left);
    li.appendChild(right);
    fragment.appendChild(li);
  });
  fileList.appendChild(fragment);
}

function addFileToList(file) {
  const li = document.createElement("li");
  const left = document.createElement("span");
  left.textContent = file.name;
  const right = document.createElement("a");
  right.href = file.url;
  right.target = "_blank";
  right.rel = "noopener";
  right.textContent = "Abrir/Descargar";
  li.dataset.filename = file.name.toLowerCase();
  li.appendChild(left);
  li.appendChild(right);
  fileList.prepend(li);
}

// Búsqueda por nombre
searchInput.addEventListener("input", () => {
  const q = searchInput.value.toLowerCase().trim();
  fileList.querySelectorAll("li").forEach(li => {
    li.style.display = li.dataset.filename.includes(q) ? "" : "none";
  });
});

loadFiles();

}
