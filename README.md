<p align="center">
    <a href="https://docs.qualityclouds.com">
    <img src="https://img.shields.io/badge/Docs-Quality%20Clouds-4C1D95?style=flat&logo=readme" />
  </a>
  <a href="https://qualityclouds.com">
    <img src="https://img.shields.io/badge/Website-qualityclouds.ai-4C1D95?style=flat&logo=google-chrome" />
  </a>
    <img src="https://img.shields.io/badge/ISO%2FIEC%2027001-Certified-D4AF37?style=flat&logo=security" />
   </a>
   <a href="https://id.qualityclouds.com/sign-up">
    <img src="https://img.shields.io/badge/SIGNUP-FREE-2563EB?style=flat&logo=google-chrome" />
  </a>
  <a href="https://github.com/qualityclouds">
    <img src="https://img.shields.io/badge/Github-MCP-10B981" alt="Repositories">

# Quality Clouds Integration

This is the official **Model Context Protocol (MCP)** server for Quality Clouds — the governance layer for **human and AI-generated code.**

This server bridges the gap between probabilistic AI generation and deterministic enterprise governance. It enables AI coding assistants (like Claude Desktop, Cursor, or IDE agents) to interface directly with the Quality Clouds platform to retrieve policy context, validate logic in real-time, and query technical debt profiles.
> ✅ Designed for developers, architects, and DevOps teams who care about scalable, maintainable enterprise cloud code.

> **The Core Concept:** You don't ask for a code check. You ask for code, and the AI automatically validates and fixes it against your ruleset before displaying the final result.

## 🚀 Overview

AI coding assistants often generate code that looks correct but contains hidden security risks or performance violations (e.g., SOQL injection in Salesforce, inefficiency in ServiceNow loops).

This MCP server solves that by introducing a **"Self-Correction Loop"**:
1.  **Generate:** Your AI drafts the initial code.
2.  **Validate (Invisible):** It privately runs the code through **LivecheckAI**.
3.  **Correct:** If issues are found, the AI fixes them immediately.
4.  **Deliver:** You receive the final, clean, and compliant code.

## 🔧 Capabilities (Tools)

Performs a real-time scan of a code snippet.
* **What it does:** Returns a list of severity-rated issues and remediation advice.
* **How it works:** The AI calls this tool internally during its thought process to "spellcheck" its own logic.

## 🌐 Supported Platforms

LivecheckAI supports real-time validation for:
* **ServiceNow** (Server-side scripts, Client scripts)
* **Salesforce** (Apex, LWC, Visualforce)
* **Microsoft Dynamics 365** (C# Plugins, TypeScript)
* **Javascript / React** (General web standards)


## 📦 Installation & Configuration

### 1. Get your Free account in Quality clouds to authentificate
* 👉 **[Sign Up for Free](https://id.qualityclouds.com/sign-up)**
* Once you setup your credentials, you will be able to authentificate in Visual Studio Code, and start using it. 
* More information in this **[Article](https://qualityclouds.com/documentation/qc/livecheckai-via-mcp/getting-started-with-livecheckai-for-salesforce-via-mcp/)**

---

## 📘 Documentation

- [Official Docs](https://docs.qualityclouds.com)
- [Blog](https://www.qualityclouds.ai/blog/platform-first-governance-controlling-logic-where-it-s-actually-created)

---

## 🧑‍💻 Contributing

We welcome contributions! Here's how to get started:

1. Fork the repo
2. Create a feature branch: `git checkout -b feat/my-feature`
3. Commit changes: `git commit -am 'Add feature'`
4. Push and create a pull request

Check out [`CONTRIBUTING.md`](CONTRIBUTING.md) and [`CODE_OF_CONDUCT.md`](CODE_OF_CONDUCT.md) for more info.

---

## 💬 Community & Support

- 💬 [Slack Community](https://join.slack.com/t/qualityclouds/shared_invite/...) 
- 🐛 [Open an Issue](https://github.com/qualityclouds/qualityclouds/issues/new)
- 📬 Email us at [support@qualityclouds.com](mailto:support@qualityclouds.com)

---

## 🛡 License

This project is licensed. Free credits available.

---

## ✨ About Quality Clouds

> “We help enterprises scale safely in the cloud by making code quality visible, measurable, and actionable.”

Learn more at [www.qualityclouds.ai](https://www.qualityclouds.ai)

---
