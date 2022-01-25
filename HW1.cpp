#+TITLE: Homework Assignment #1
#+DESCRIPTION: HW
#+AUTHOR: Sophia Godfrey

#+SETUPFILE: ~/Documents/org/standard.org
#+LATEX_CLASS: article
#+LATEX_CLASS_OPTIONS: [letterpaper, 12pt]
#+OPTIONS: toc:nil

\documentclass{article}
\usepackage{graphicx}
\graphicspath{ {./images/} }

1.2.1 - Use appropriate multiple and submultiple prefixes to express the following quantities: \\

\begin{enumerate}[label=(\alph*)]
    \item 3,620 watts (W) = 3.62 x $10^3$ = 3.62 kW \\
    \item 0.000004 amps (A) = $4 x 10^6$ = 4 mA \\
    \item 5.2 x $10^{-6}$ ohms ($\Omega$) = 5.2 $\mu\Omega$ \\
    \item 3.9 x $10^11$ volts (V) = 390 GV \\
    \item 0.02 meters (m) = 2 x $10^{-2}$ = 2 cm \\
    \item 32 x $10^5$ volts (V) = 320 MV \\
\end{enumerate}

1.2.2 - Use appropriate multiple and submultiple prefixes to express the following quantities: \\

\begin{enumerate}[label=(\alph*)]
    \item 4.71 x $10^{-8}$ seconds (s) = 47.1 $\mu$s \\
    \item 10.3 x $10^8$ watts (W) = 1.03 GW \\
    \item 0.00000000321 amps (A) = 3,210 x $10^{-12}$ pA \\
    \item 0.1 meters (m) = 10 cm \\
    \item 8,760,000 volts (V) = 8.76 MV \\
    \item 3.16 x $10^{-16}$ hertz (Hz) = 0.316 fH \\
\end{enumerate}

1.2.3 - Convert: \\

\begin{enumerate}[label=(\alph*)]
    \item 16.3 m = 16.3 x 1,000 mm = 16,300 mm \\
    \item 16.3 m = 16.3 / 1,000 = 0.0163 km \\
    \item 4 x $10^{-6}$ $\mu$F (microfarad) = 4 pF (picofarad) \\
    \item 2.3 ns = 2.3 x $10^{-9}$ = 0.0023 $\mu$s \\
    \item 3.6 x $10^7V$ = 36 x $10^6$V = 36 MV \\
    \item 0.03 mA (milliamp) = 0.03 x $10^{-3}$ = 30 $\mu$A \\
\end{enumerate}

1.2.4 - Convert: \\

\begin{enumerate}[label=(\alph*)]
    \item 4.2 m = 4.2 x $10^6$ \mu$m)
    \item 3 hours = 1.08 x $10^{10}$ $\mu$s)
    \item 4.2 m = 4.2 x $10^-3$ km
    \item 173 nm = 1.73 x $10^{-7}$ m
    \item 173 nm = 0.173 $\mu$m)
    \item 12 pF (picofarad) = 12 x $10^{-12}$ F (farad)
\end{enumerate}

1.4.2 - Identifying nodes

\begin{figure}[h!]
\begin{center}
\begin{circuitikz}
    \draw (0,0)
    node[label={above:N$1$}] {}
    to[american,V=$12V$,*-] (0,-2)     % I want the voltage source with the + and -
    to[short,-*] (4,-2)
    node[label={below:N$2$}] {}
    to[R=$2\Omega$,-*] (4,0)
    node[label={above:N$3$}] {}
    to[R=$4\Omega$] (0,0);
    \draw (4,0) to[R=$4\Omega$] (8,0)
    node[label={above:N$4$}] {}
    to[american,V=$8V$,*-] (8,-2)      % for both of these V sources, the "-" sign is on the bottom
    to[short] (4,-2);
\end{circuitikz}
\end{center}
\end{figure}

For the circuit above: \\
\begin{enumerate}[label=(\alph*)]
\item Identify and label all nodes \\
\item Which of these nodes are extraordinary nodes? \\
Nodes N3 and N2 are extraordinary.
\item Identify all combinations of 2 or more circuit elements that are connected in series: both 4$\Omega$ resistors are in series \\
\item Identify pairs of circuit elements that are connected in parallel: the $4\Omega$ resistors are in parallel to the $2\Omega$ resistor \\
\end{enumerate}

1.4.4 - Identifying nodes in a bridge (diamond) circuit \\

\begin{center}
\begin{circuitikz}
    \draw(0,0)
    node[label={above:N$1$}] {}
    to[american,V=$12V$,*-*] (0,-2)
    node[label={left:N$2$}] {}
    to[short] (0,-4)
    to[R=$15\Omega$,-*] (6,-4)
    node[label={below:N$3$}] {}
    to[R=$20\Omega$,-*] (8,-2)
    node[label={right:N$4$}] {}
    to[R=$10\Omega$,-*] (6,0)
    node[label={above:N$5$}] {}
    to[R=$25\Omega$] (0,0);
    \draw(0,-2) to[R=$60\Omega$,-*] (4,-2)
    node[label={above:N$6$}] {}
    to[R=$40\Omega$] (6,0)
    to[R=$5\Omega$] (6,-4)
    to[R=$30\Omega$] (4,-2);
\end{circuitikz}
\end{center}

For the circuit above: \\
\begin{enumerate}[label=(\alph*)]
\item Identify and label all nodes \\
\item Which of these nodes are extraordinary nodes? \\
Nodes N2, N6, N5, and N3 are extraordinary nodes.
\item Identify all combinations of 2 or more circuit elements that are connected in series: $10\Omega$ and $20\Omega$ , $12V$ and $25\Omega$ are in series \\
\item Identify pairs of circuit elements that are connected in parallel: $5\Omega || (10\Omega + 20\Omega)$ \\
\end{enumerate}

1.4.6 - Identifying nodes in a bridge (diamond) circuit \\

\begin{figure}[h!]
\begin{center}
\begin{circuitikz}
    \draw (0,0)
    node[label={above:N$1$}] {}
    to[american,V_<=$12V$,*-*] (0,-2)
    node[label={below:N$2$}] {}
    to[short] (2,-2)
    to[R=$4\Omega$] (2,0)
    node[label={above:N$3$}] {}
    to[R=$10\Omega$] (0,0);
    \draw (2,0)
    to[R=$32\Omega$,*-] (5,0)
    node[label={above:N$4$}] {}
    to[R=$16\Omega$,*-*] (5,-2)
    node[label={below:N$8$}] {}
    to[short] (2,-2);
    \draw (2,0)
    to[short](5,-2);
    \draw (5,0) to[R=$5\Omega$,-*] (8,0)
    node[label={above:N$6$}] {}
    to[R=$6\Omega$] (8,-2)
    to[short] (5,-2);

\end{circuitikz}
\end{center}
\end{figure}

For the circuit above: \\
\begin{enumerate}[label=(\alph*)]
\item Identify and label all nodes \\
\item Which of these nodes are extraordinary nodes? \\
Nodes N3, N4, and N5 are extraordinary nodes.
\item Identify all combinations of 2 or more circuit elements that are connected in series: $8\Omega$ and $6\Omega$, N3 and $32\Omega$, N1 and $10\Omega$ are in series \\
\item Identify pairs of circuit elements that are connected in parallel: $16\Omega || (8\Omega + 6\Omega)$, N4 + $4\Omega + 0\Omega$ are in parallel \\
\end{enumerate}

1.5.2 - A certain cross section lies in the x–y plane. 3 × $10^{20}$ electrons go through the cross section in the z direction in 4 seconds. Simultaneously a 6A
current flows through the same cross section in the negative z direction, what is the magnitude and direction of the current flowing through the cross section?  \\

(3 x $10^{20}$) + (1.5 x $10^{20}$) = 4.5 x $10^{20}$ (the total amount of electrons and protons \\
1.6 x $10^{-19}$ C = magnitude of charge for a single proton/electron \\
(1.6 x $10^{-19}$ C) x (4.5 x $10^{20}$) = 72.1 C \\
Current = I = dq/dt = 72.1/4 \\
Current = 18.03 A in the negative z direction (current flows opposite the electron flow)

1.5.4 - Determine the current i(t) flowing through a certain device if the cumulative charge that has flowed through it up to a time t is given by: \\
$$i(t) = \frac{dq(t)}{dt}$$

1.5.6 - Determine the net charge $\Delta$ Q that flowed through a resistor over the specified time interval for each of the following currents: \\

\begin{enumerate}[label=\alph*)]
    \item ($3t + 6t^3$) mA, from ($t$ = 0s) to ($t$ = 4s) \\
        \begin{enumerate}
        \begin{enumerate}
        net charge Q =  $\int_{0}^{4} (3t + 6t^3) dt = \dfrac{3t^4}{2}+\dfrac{3t^2}{2}+C = 408 C \\
        \end{enumerate}
        \end{enumerate}
    \item $4sin(40\pi t)cos(40\pi t) \mu$A, from ($t$ = 0s) to ($t$ = 0.05s) \\
        \begin{enumerate}
        net charge Q = \int_{0}^{0.05} (4sin(40\pi t)cos(40\pi t) = \dfrac{\sin\left(80{\pi}t\right)-80{\pi}t\cos\left(80{\pi}t\right)}{12800{\pi}^2} = -\dfrac{1}{3200{\pi}} C $ \\
        \end{enumerate}
    \item $4e^{-t} - 3e^{-2t}$A, from ($t$ = 0s) to $t$ = \infty) \\
        \begin{enumerate}
        net charge Q = $\int_{0}^{\infty} (4e^{-t} - 3e^{-2t}) = -\dfrac{\mathrm{e}^{-2t}\left(8\mathrm{e}^t-3\right)}{2} = 2.5 C $ \\ 
        \end{enumerate}
    \item $12e^{-3t}cos(40\pi t)$ nA, from ($t$ = 0s) to ($t$ = 0.05s) \\
        \begin{enumerate}
        net charge Q = $\int_{0}^{0.05} (12e^{-3t}cos(40\pi t)) = \dfrac{\mathrm{e}^{-3t}\left(480{\pi}\sin\left(40{\pi}t\right)-36\cos\left(40{\pi}t\right)\right)}{1600{\pi}^2+9} = \dfrac{36\mathrm{e}^{-\frac{3}{20}}\left(\mathrm{e}^\frac{3}{20}-1\right)}{1600{\pi}^2+9} \approx 0.000317 C $ \\
        \end{enumerate}
\end{enumerate}


1.5.10 - The current in (mA) flowing through a wire is given by: \\
$$
 i(t) = \begin{cases} 0, \mbox{for } t\mbox{ < 0,} \\
 6t, \mbox{for 0} \leq t \leq \mbox{5s,} \\
 30e^{-0.6(t-5)}, \mbox{for } t\geq \mbox{ 5s} \\
 \end{cases}
 $$
\begin{enumerate}[label=(\alph*)]
\item Sketch i(t) versus t \\
\includegraphics[scale=.5]{it}
\item Sketch q(t) versus t \\
\includegraphics[scale=.45]{qt}
\end{enumerate}

1.5.12

\includegraphics[scale=.3]{1-5-12} \\
The plot above displays the cumulative amount of charge q(t) that has exited a certain device up to time t. \\
What is the current at: \\
\begin{enumerate}[label=(\alph*)]
\item t = 2s = 2C \\
\item t = 6s = 3C \\
\item t = 12s = 1.79C \\
\end{enumerate}

1.5.13

\includegraphics[scale=.3]{1-5-13} \\

The plot above displays the cumulative charge q(t) that has entered a certain device up to time t. \\
Sketch a plot of the corresponding current i(t)

ADDITIONAL PROBLEM - Given the circuit below, use the fact that the sum of powers associated with all elements in the circuit is zero to find the current $I_o$

\includegraphics[scale=.3]{ADDITIONALPROBLEM} \\
