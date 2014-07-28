dennis-latex-boilerplate
========================

A LaTeX skeleton for my lab reports, project reports, etc.

## Description
I like writing reports using LaTeX, so I figured that having a starting point would be nice. This repository contains an example project report that can be cloned and changed for every new report.

## Structure
The root document is `document.tex`. From here, all of the sections of the document are included from the `tex` directory. Images are in the `img` directory, code listings in the `code` directory, and the title page is sitting in the `title` directory.

The 'style' of the document can be configured in `boilerp.sty`. All of the `\usepackage` commands should go there. This file also controls the fonts used in the document.
