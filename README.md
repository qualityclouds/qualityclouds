# qualityclouds

# 🧪 Quality Clouds Integration

This is the official Model Context Protocol (MCP) server for Quality Clouds — the governance layer for human and AI-generated code.

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

This server exposes the following tool to your AI assistant:

### `run_livecheck`
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

### 1. Get your Free API Key
You need a Quality Clouds API key to run scans.
* 👉 **[Sign Up for Free](https://id.qualityclouds.com/sign-up)**
* Log in and navigate to your Profile to generate an API Key.

### 2. Install the Server
Ensure you have `uv` or `pip` installed.

**Claude Desktop Configuration (`claude_desktop_config.json`):**
```json
{
  "mcpServers": {
    "qualityclouds": {
      "command": "uv",
      "args": [
        "--directory",
        "/path/to/mcp-server-qualityclouds",
        "run",
        "mcp-server-qualityclouds"
      ],
      "env": {
        "QC_API_KEY": "your_api_key_here",
        "QC_INSTANCE_URL": "[https://api.qualityclouds.com](https://api.qualityclouds.com)"
      }
    }
  }
}
```
---

## 📂 Example Projects

| Repo | Description |
|------|-------------|
| [`qualityclouds-github-action`](https://github.com/qualityclouds/github-action) | Run Quality Clouds checks in GitHub Actions |
| [`qualityclouds-servicenow-plugin`](https://github.com/qualityclouds/servicenow-plugin) | ServiceNow developer plugin integration |
| [`qualityclouds-api-examples`](https://github.com/qualityclouds/api-examples) | Sample code using the REST API |

---

## 📘 Documentation

- [Official Docs](https://docs.qualityclouds.com)
- [API Reference](https://docs.qualityclouds.com/api/)
- [Blog](https://www.qualityclouds.com/blog/)

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
- 🐛 [Open an Issue](https://github.com/qualityclouds/your-repo/issues)
- 📬 Email us at [support@qualityclouds.com](mailto:support@qualityclouds.com)

---

## 🛡 License

This project is licensed. Free credits available.

---

## ✨ About Quality Clouds

> “We help enterprises scale safely in the cloud by making code quality visible, measurable, and actionable.”

Learn more at [www.qualityclouds.ai](https://www.qualityclouds.ai)

---
