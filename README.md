# Informatik 2

Material zur Vorlesung Informatik 2 im Kurs TEIT24A an der DHBW Mannheim.

## Benötigte Software

Wir verwenden in der Vorlesung die Programmiersprache `C++`.

Dafür wird ein Compiler sowie eine Reihe an weiteren Tools benötigt.

### Compiler und Build-Tools

Die folgenden Compiler eignen sich zum Beispiel:

| Compiler | Beschreibung                                    |
| -------- | ----------------------------------------------- |
| GCC      | Typischerweise unter Windows eingesetzt.        |
| Clang    | Standard bei MacOS, wird mit XCode installiert. |

Die Compiler können unter ihrem Namen im Netz gefunden werden.

- Eine funktionierende Lösung für Windows ist z.B. [llvm-mingw](https://github.com/mstorsjo/llvm-mingw/releases).
- Alternativ kann man z.B. [Visual Studio](https://visualstudio.microsoft.com/de/) verwenden.
  Wenn man Visual Studio installiert, hat man auch den Compiler, selbst wenn man
  dann die CMake-Projekte aus der Vorlesung weiter in VsCode benutzt.
- Unter MacOS kann XCode installiert werden oder Sie verwenden [Homebrew](https://brew.sh/)

Die folgenden weiteren Basis-Werkzeuge sind nützlich:

| Tool  | Link | Beschreibung                                                        |
| ----- | ---- | ------------------------------------------------------------------- |
| CMake | <https://cmake.org/> | Build-System, steuert den Compiler.                 |
| Conan | <https://conan.io/>  | Paket-Manager, installiert bei Bedarf Bibliotheken. |

### Anmerkungen zur Prozessorarchitektur und Einrichtung

Beim Herunterladen muss man darauf achten, die Tools für die eigene Prozessorarchitektur
zu wählen. Unter Windows ist das derzeit i.d.R. noch x86_64, unter MacOS ist es ARM64.
Die Verbreitung von ARM64 nimmt aber auch unter Windows zu, daher kann es sein,
dass man auch dort ARM64 wählen muss.

Bei den Download-Möglichkeiten der jeweiligen Tools sind meistens Varianten
für die verschiedenen Prozessorarchitekturen angegeben.

Die Tools sind in der Regel als ZIP-Archive oder Installer verfügbar.
Wenn man die ZIP-Archive wählt, müssen diese einfach an irgendeine Stelle
auf der eigenen Festplatte entpackt werden, dazu sind i.d.R. keine Administrator-Rechte nötig.
Anschließend muss die Umgebungsvariable `PATH` angepasst werden,
damit die Tools auch von der Kommandozeile aus aufgerufen werden können.
Meist sind die relevanten Pfade direkt in den entpackten Ordnern oder in einem Unterordner `bin`.

### Entwicklungsumgebung

Als Entwicklungsumgebung wird wieder standardmäßig VsCode verwendet.
Für die C++-Entwicklung sollten mindestens folgende Erweiterungen installiert werden:

- C/Cpp
- Cmake-Tools

Empfehlenswert ist die Installation des "Cpp-Extension-Pack", der u.A. diese beiden enthält.

Alternativ kann auch eine vollständige IDE wie [CLion](https://www.jetbrains.com/clion/)
oder [Microsoft Visual Studio](https://visualstudio.microsoft.com/de/) verwendet werden.
Diese bringen alle benötigten Tools bereits mit oder bieten meist bequeme Installationsmöglichkeiten.
Allerdings sind diese IDEs proprietär und nicht für alle Betriebssysteme verfügbar.
Daher werden sie in der Prüfung nicht verwendet und sind hier auch nicht getestet.
Für den eigenen Gebrauch sind sie aber durchaus empfehlenswert.
