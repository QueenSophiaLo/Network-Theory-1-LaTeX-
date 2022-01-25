#+TITLE: Homework Assignment #1
#+DESCRIPTION: HW
#+AUTHOR: Sophia Godfrey

#+SETUPFILE: ~/Documents/org/standard.org
#+LATEX_CLASS: article
#+LATEX_CLASS_OPTIONS: [letterpaper, 12pt]
#+OPTIONS: toc:nil

1.2.1 - Use appropriate multiple and submultiple prefixes to express the following quantities: \\

\begin{enumerate}[label=(\aplh*)]
    \item 3,620 watts (W) = 3.62 x $10^3$ = 3.62 kW \\
    \item 0.000004 amps (A) = 4 x 10^6 = 4 mA \\
    \item 5.2 x $10^{-6}$ ohms ($\Omega$) = 5.2 $\mu\Omega$ \\
    \item 3.9 x $10^11$ volts (V) = 390 GV \\
    \item 0.02 meters (m) = 2 x $10^{-2}$ = 2 cm \\
    \item 32 x $10^5$ volts (V) = 320 MV \\
\end{enumerate}

1.2.2 - Use appropriate and submultiple prefixes to express the following quantities: \\

\begin{enumerate}[label=(\aplh*)]
    \item 4.71 x $10^{-8}$ seconds (s) = 471 $\mu$s \\
    \item 10.3 x $10^8$ watts (W) \\
    \item 0.00000000321 amps (A) \\
    \item 0.1 meters (m) \\
    \item 8,760,000 volts (V) \\
    \item 3.16 x $10^{-16}$ hertz (Hz) \\
\end{enumerate}

1.2.3 - Convert: \\

\begin{enumerate}[label=(\aplh*)]
    \item 16.3 m to mm \\
    \item 16.3 m to km \\
    \item 4 x $10^{-6}$ $\mu$F (microfarad) to pF (picofarad) \\
    \item 2.3 ns to $\mu$s \\
    \item 3.6 x $10^7V$ to MV \\
    \item 0.03 mA (milliamp) to $\mu$A \\
\end{enumerate}

1.2.4 - Convert: \\

\begin{enumerate}[label=(\aplh*)]
    \item 4.2 m to $\mum)
    \item 3 hours to $\mus)
    \item 4.2 m to km
    \item 173 nm to m
    \item 173 nm to $\mum)
    \item 12 pF (picofarad) to F (farad)
\end{enumerate}

1.4.2 - Identifying nodes
% \begin{figure}[h!]
% \begin{center}
% \begin{circuitikz}
%    \draw (0,0)
%    to[american,v=$12V$] (-2,2) % the left voltage source (12V)
%    to[american,v=$8V$] (2,2) % the right voltage source (8V)
%    to[short,*-*] (0,2);

% \end{circuitikz}
% \end{center}
% \end{figure)

For the circuit above: \\
(a) Identify and label all nodes \\
(b) Which of these nodes are extraordinary nodes? \\
(c) Identify all combinations of 2 or more circuit elements that are connected in series \\
(d) Identify pairs of circuit elements that are connected in parallel \\

1.4.3 - Identifying nodes in a bridge (diamond) circuit \\


For the circuit above: \\
(a) Identify and label all nodes \\
(b) Which of these nodes are extraordinary nodes? \\
(c) Identify all combinations of 2 or more circuit elements that are connected in series \\
(d) Identify pairs of circuit elements that are connected in parallel \\

1.5.4 - Determine the current i(t) flowing through a certain device if the cumulative charge that has flowed through it up to a time t is given by: \\

\begin{enumerate}[label=(\aplh*)]
    \item q(t) = 3.6t mC \\
    \item q(t) = 5 sin(377t) $\mu$C \\
    \item q(t) = 0.3[1-e^{-0.4t}] pC \\
    \item q(t) = 0.2t sin(120 \pi t) nC \\
\end{enumerate}

1.5.6 - Determine the net charge \Delta Q that flowed through a resistor over the specified time interval for each of the following currents: \\

\begin{enumerate}[label=(\aplh*)]
    \item [3t + 6t^3]mA, from (t = 0s) to (t = 4s) \\
    \item 4sin(40\pi t)cos(40\pi t) $\mu$A, from (t = 0s) to (t = 0.05s) \\
    \item 4e^{-t} - 3e^{-2t}A, from (t = 0s) to t = \infty) \\
    \item 12e^{-3t}cos(40\pi t)nA, from (t = 0s) to (t = 0.05s)
\end{enumerate}

1.5.10 - The current in (mA) flowing through a wire is given by: \\

% i(t) = \begin{cases} 0, & \mbox{for } t\mbox{ < 0,} \\
% 6t, & \mbox{for 0 <=} t\mbox{ <= 5s,} \\
% 30e^{-0.6(t-5)}, & \mbox{for } t\mbox{ >= 5s} \\
% \end{cases}

(a) Sketch i(t) versus t \\

(b) Sketch q(t) versus t \\


1.5.12

% graph

The plot above displays the cumulative amount of charge q(t) that has exited a certain device up to time t. \\
What is the current at: \\
(a) t = 2s \\

(b) t = 6 s \\

(c) t = 12 s \\

1.5.13

% graph

The plot above displays the cumulative charge q(t) that has entered a certain device up to time t. \\
Sketch a plot of the corresponding current i(t)

ADDITIONAL PROBLEM - Given the circuit below, use the fact that the sum of powers associated with all elements in the circuit is zero to find the current I_o

\begin{figure}[h!]
\begin{center}
\begin{circuitikz}
    \draw (-2,0) to[short,*-] (-2,2);
    \draw (2,0) to[short,*-] (2,2);
    \draw (-2,-2) to[short,-*] (0,-2);
    \draw (2,-2) to[short] (0,-2);

    \draw (-2,0)
    to[V, v=6<\volts>, v_=2<\ampere>]


\end{circuitikz}
\caption{Circuit}
\end{center}
\end{figure}

    
