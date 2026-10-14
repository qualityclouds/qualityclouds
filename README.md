# Quality Clouds

The code governance layer for enterprise platforms and AI-generated code, in any Git repository. This repository is the index of everything Quality Clouds publishes on GitHub.

[![Docs](https://img.shields.io/badge/Docs-Quality%20Clouds-4C1D95?style=flat&logo=readme)](https://qualityclouds.com/documentation/)
[![Website](https://img.shields.io/badge/Website-qualityclouds.ai-4C1D95?style=flat&logo=google-chrome)](https://qualityclouds.ai)

## What we do

Quality Clouds turns an organization's governance, security, and quality standards into machine-readable rules, then applies those rules where code is written and before it reaches production. Human-written code and AI-generated code go through the same rules.

We have been doing this since 2017 on enterprise SaaS platforms, where a bad change is expensive and hard to reverse. That rule library and the scan data behind it are what the products run on.

Two product lines, two different problems.

**Norma by Quality Clouds** reviews any Git repository the way a senior engineer would, in two layers. Findings are an AI review that asks the same architecture, database, and performance questions on every repository, such as whether the database has the indexes it needs or whether the app keeps a client-server split. Checks are rule-based and deterministic, the same verdict every time, and every check leaves an audit record. Norma runs inside the agent loop through the Norma MCP server (Claude Code, Cursor, Lovable, Replit, and any MCP client), on every pull request through the Norma GitHub App, and in VS Code. Stacks covered include JavaScript, TypeScript, Python, PHP, and Dart and Flutter. The repository's Production-Ready Score is a diagnostic and never blocks anything. Permanent free tier.

**Quality Clouds for ServiceNow, Salesforce, Microsoft Dynamics 365, and Adobe** governs the platform itself: Full Scan for a complete instance audit, Livecheck for real-time validation in the editor, and Quality Gates in CI to stop non-compliant changes.

## Start here

| If you are | Start with | Sign up |
|---|---|---|
| Building in a Git repository, with or without an AI editor | [norma-mcp](https://github.com/qualityclouds/norma-mcp) | [norma.qualityclouds.com](https://norma.qualityclouds.com?utm_source=github&utm_medium=readme&utm_campaign=qualityclouds) |
| Running ServiceNow, Salesforce, Dynamics 365, or Adobe | [action-full-scan](https://github.com/qualityclouds/action-full-scan) and [platform-mcp](https://github.com/qualityclouds/platform-mcp) | [id.qualityclouds.com/sign-up](https://id.qualityclouds.com/sign-up) |
| Curious how AI-generated code actually scores | [state-of-ai-code-2026](https://github.com/qualityclouds/state-of-ai-code-2026) | No account needed |

## Everything we publish

### Install and run

| Repository | What it is | Platform |
|---|---|---|
| [norma-mcp](https://github.com/qualityclouds/norma-mcp) | Remote MCP server for Norma at `https://api.qualityclouds.ai/mcp`. Governance rules in the model's context at generation time, and a record of what was checked, fixed, and prevented. | Any stack |
| [Norma GitHub App](https://github.com/apps/norma-by-quality-clouds) | Reviews every pull request and posts the result as a review comment. Asks for one permission: read and write on pull requests. Comments only; it has no access to repository contents. | Any stack |
| [Norma for VS Code](https://marketplace.visualstudio.com/items?itemName=qualityclouds.norma-for-vscode) | Livecheck on the active file, results in the Problems panel, and a "Fix with AI" action that hands a prompt to your editor's AI chat. Also on Open VSX for Cursor and VSCodium. | Any stack |
| [action-full-scan](https://github.com/qualityclouds/action-full-scan) | GitHub Action that runs a Quality Clouds scan on every pull request, with inline results. | Salesforce, ServiceNow |
| [platform-mcp](https://github.com/qualityclouds/platform-mcp) | MCP server for ServiceNow and Salesforce: instance and scan visibility, real-time component validation, and rule lookups. | ServiceNow, Salesforce |
| [Skill-production-ready-check](https://github.com/qualityclouds/Skill-production-ready-check) | Free Agent Skill that scores a codebase 0 to 100 for production readiness. No account, no network calls, read-only. | Any stack |

### Data and research

| Repository | What it is |
|---|---|
| [state-of-ai-code-2026](https://github.com/qualityclouds/state-of-ai-code-2026) | Open dataset from scanning AI-generated public projects built with Lovable, Bolt, v0, and AI-assisted GitHub repositories. Methodology, ruleset, and charts included. CC-BY-4.0. |

### Community and examples

| Repository | What it is |
|---|---|
| [community](https://github.com/qualityclouds/community) | Announcements, feature requests, bug reports, questions, and roadmap. This is the only place we run discussions. |
| [Norma-byQualityClouds-demo-repo](https://github.com/qualityclouds/Norma-byQualityClouds-demo-repo) | Sample application we scan in Norma demos. Deliberately imperfect. Not a starter template. |
| [ai-summit-barcelona-2026](https://github.com/qualityclouds/ai-summit-barcelona-2026) | Materials for "When code is cheap, governance is the hard part", Workshop 2 of the AI Foundations track at AI Summit Barcelona 2026. |
| [.github](https://github.com/qualityclouds/.github) | Security policy, code of conduct, contributing guide, and issue templates for the organization. |

## Support

- Questions, ideas, and bugs: [community discussions](https://github.com/qualityclouds/community/discussions)
- Security reports: [SECURITY.md](https://github.com/qualityclouds/.github/blob/main/SECURITY.md)
- Anything else: help@qualityclouds.com

## About Quality Clouds

Quality Clouds is a UK-headquartered company with offices in Barcelona and New York, governing enterprise platforms since 2017. ISO 27001:2022 certified and SOC 2 Type II attested.

[Website](https://qualityclouds.ai) · [LinkedIn](https://www.linkedin.com/company/qualityclouds/) · [X](https://x.com/qualityclouds) · [YouTube](https://www.youtube.com/@qualityclouds3561)
