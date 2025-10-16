:root { font-family: system-ui, -apple-system, Segoe UI, Roboto, sans-serif; }
body { margin: 0; background: #0b1220; color: #e6ecff; display:flex; min-height:100dvh; }
.card { margin:auto; max-width:560px; width:92%; background:#12203a; padding:2rem; border-radius:16px; box-shadow:0 10px 30px rgba(0,0,0,.4)}
h1 { margin-top:0; }
.field { margin: .9rem 0; }
.grid { display:grid; grid-template-columns: 1fr 1fr; gap: 1rem; }
label { display:block; font-weight:600; margin-bottom:.3rem; }
input { width:100%; padding:.7rem .8rem; border-radius:10px; border:1px solid #2b3f66; background:#0e1b33; color:#e6ecff; }
button { margin-top:1rem; padding:.8rem 1rem; border:0; border-radius:10px; background:#3e7bfa; color:white; font-weight:700; cursor:pointer; }
button:hover { filter:brightness(1.08); }
#msg { margin-top:.8rem; min-height:1.2rem; }
#msg.success { color:#46e08f }
#msg.error { color:#ff8282 }
.hp { position:absolute; left:-9999px; }
.small { font-size:.9rem; opacity:.8 }
.error { color:#ff8282; font-size:.85rem; min-height:1em; }
