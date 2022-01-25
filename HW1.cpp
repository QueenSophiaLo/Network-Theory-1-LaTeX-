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

1.2.2 - Use appropriate multiple and submultiple prefixes to express the following quantities: \\

\begin{enumerate}[label=(\aplh*)]
    \item 4.71 x $10^{-8}$ seconds (s) = 47.1 $\mu$s \\
    \item 10.3 x $10^8$ watts (W) = 1.03 GW \\
    \item 0.00000000321 amps (A) = 3,210 x $10^{-12}$ pA \\
    \item 0.1 meters (m) = 10 cm \\
    \item 8,760,000 volts (V) = 8.76 MV \\
    \item 3.16 x $10^{-16}$ hertz (Hz) = 0.316 fH \\
\end{enumerate}

1.2.3 - Convert: \\

\begin{enumerate}[label=(\aplh*)]
    \item 16.3 m = 16.3 x 1,000 mm = 16,300 mm \\
    \item 16.3 m = 16.3 / 1,000 = 0.0163 km \\
    \item 4 x $10^{-6}$ $\mu$F (microfarad) = 4 pF (picofarad) \\
    \item 2.3 ns = 2.3 x $10^{-9}$ = 0.0023 $\mu$s \\
    \item 3.6 x $10^7V$ = 36 x $10^6$V = 36 MV \\
    \item 0.03 mA (milliamp) = 0.03 x $10^{-3}$ = 30 $\mu$A \\
\end{enumerate}

1.2.4 - Convert: \\

\begin{enumerate}[label=(\aplh*)]
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
    \draw (0,0) to[V,v=$12V$] (0,2)     % I want the voltage source with the + and -
    to[R=$4\Omega$,*-*] (4,2)
    to[R=$4\Omega$,*-*] (8,2)
    \draw (0,0) to[short,-*] (4,0)
    to[short] (8.0)
    to[V,v=$8V$] (8,2)      % for both of these V sources, the "-" sign is on the bottom
    \draw (4,0) to[R=$2\Omega$] (4,2)
\end{circuitikz}
\end{center}
\end{figure}

For the circuit above: \\
(a) Identify and label all nodes (all of the dots are nodes, couldn't figure out how to label them though) \\ 
(b) Which of these nodes are extraordinary nodes? \\
(c) Identify all combinations of 2 or more circuit elements that are connected in series \\
(d) Identify pairs of circuit elements that are connected in parallel \\

1.4.4 - Identifying nodes in a bridge (diamond) circuit \\

\begin{figure}[h!]
\begin{center}
\begin{circuitikz}
    \draw(0,0) to[short] (0,2)
    to[V,v=$12V$, -*] (0,4)
    to[R=$25\Omega$] (3,4)
    to[short, -*] (4,4)
    to[R=$10\Omega$, -*] (2,5)
    to[R=$20\Omega$] (4,0)
    to[short, -*] (3,0)
    to[R=$15\Omega$] (0,0)
    \draw(0,2) to[R=$60\Omega$, -*] (3,2)
    to[R=$40\Omega$] (4,4)  
    \draw(3,2) to[R=$30\Omega] (4,0);                              
\end{circuitikz}
\end{center}
\end{figure}

For the circuit above: \\
(a) Identify and label all nodes \\
(b) Which of these nodes are extraordinary nodes? \\
(c) Identify all combinations of 2 or more circuit elements that are connected in series \\
(d) Identify pairs of circuit elements that are connected in parallel \\

1.4.6 - Identifying nodes in a bridge (diamond) circuit \\

\begin{figure}[h!]
\begin{center}
\begin{circuitikz}
    \draw(0,0) to[V,v=$12V$] (0,2)
    to[R=$10\Omega$,*-*] (2,2)
    to[R=$31\Omega$,-*] (4,2)
    to[R=$8\Omega, -*] (6,2)    
    to[R=$6\Omega$] (6,0)
    to[short,*-] (0,0);
    \draw(2,0) to[R=$4\Omega$] (2,2)
    to[short,-*] (4,0)
    to[R=$16\Omega$] (4,2)
\end{circuitikz}
\end{center}
\end{figure}                                  

For the circuit above: \\
(a) Identify and label all nodes \\
(b) Which of these nodes are extraordinary nodes? \\
(c) Identify all combinations of 2 or more circuit elements that are connected in series \\
(d) Identify pairs of circuit elements that are connected in parallel \\

1.5.2 - A certain cross section lies in the x–y plane. 3 × $10^{20}$ electrons go through the cross section in the z direction in 4 seconds. Simultaneously a 6A
current flows through the same cross section in the negative z direction, what is the magnitude and direction of the current flowing through the cross section?  \\
(3 x $10^{20}$) + (1.5 x $10^{20}$) = 4.5 x $10^{20}$ (the total amount of electrons and protons \\
1.6 x $10^{-19}$ C = magnitude of charge for a single proton/electron \\
(1.6 x $10^{-19}$ C) x (4.5 x $10^{20}$) = 72.1 C \\
Current = I = dq/dt = 72.1/4 \\
Current = 18.03 A in the negative z direction (current flows opposite the electron flow)

1.5.4 - Determine the current i(t) flowing through a certain device if the cumulative charge that has flowed through it up to a time t is given by: \\
% i(t) = d q(t) / dt
\begin{enumerate}[label=(\aplh*)]
    \item q(t) = $-0.45t^3$ mC \\ % to find the i(t), take the derivative of q(t)
    i(t) = dq/dt = d/dt ($-0.45t^2$) = $-1.35t^2\mu$A \\                                  
    
    \item q(t) = 12sin^2(800$\pi$t) $\mu$C \\
    i(t) = dq/dt = d/dt 5 sin(377t) = 19200{\pi}\cos\left(800{\pi}t\right)\sin\left(800{\pi}t\right) $\mu$A \\                                      
    
    \item q(t) = −3.2 sin(377t)cos(377t) pC \\
    i(t) = dq/dt = d/dt 0.3[1-e^{-0.4t}] = \dfrac{6032\sin^2\left(377t\right)}{5}-\dfrac{6032\cos^2\left(377t\right)}{5} pA \\
    
    \item q(t) = 1.7t[1−$e^{-1.2t}$] nC \\
    i(t) = dq/dt = d/dt 1.7t[1−$e^{-1.2t}$] = \dfrac{51t\mathrm{e}^{-\frac{6t}{5}}}{25}+\dfrac{17\left(1-\mathrm{e}^{-\frac{6t}{5}}\right)}{10} nA \\
\end{enumerate}

1.5.6 - Determine the net charge \Delta Q that flowed through a resistor over the specified time interval for each of the following currents: \\

\begin{enumerate}[label=(\aplh*)]
    \item [3t + 6t^3]mA, from (t = 0s) to (t = 4s) \\
    \item 4sin(40$\pi$t)cos(40$\pi$t) $\mu$A, from (t = 0s) to (t = 0.05s) \\
    \item 4e^{-t} - 3e^{-2t}A, from (t = 0s) to t = \infty) \\
    \item 12e^{-3t}cos(40$\pi$t)nA, from (t = 0s) to (t = 0.05s)
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

    
