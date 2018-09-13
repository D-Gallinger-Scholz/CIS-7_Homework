Part 1
```
Show that p->q and q' -> p' are logically equivalent without using truth tables or a "contrapositive" law
```

<pre>
P -> Q <=> Q' -> P'
P' v Q <=> Q'' v P' Implication *2
P' v Q <=> Q v P'   Double Negation
P' v Q <=> P' v Q   Commutative
</pre>

```
Show that (p->r) ^ (q->r) <=> (p v q) -> r
```

<pre>
(P -> R) ^ (Q -> R)       <=> (P v Q) -> R
(P' v R) ^ (Q' v R)       <=> (P v Q)' v R  Implication *3
(P'' ^ R')' ^ (Q'' ^ R')' <=> (P v Q)' v R  De Morgan's Law *2
(P ^ R')' ^ (Q ^ R')'     <=> (P v Q)' v R  Double Negation *2
(R' ^ P)' ^ (R' ^ Q)'     <=> (P v Q)' v R  Commutative *2
[(R' ^ P)'' v (R' ^ Q)'']'<=> (P v Q)' v R  De Morgan's Law
[(R' ^ P) v (R' ^ Q)]'    <=> (P v Q)' v R  Double Negation *2
[R' ^ (P v Q)]'           <=> (P v Q)' v R  Distributive in reverse
R'' v (P v Q)'            <=> (P v Q)' v R  De Morgan's Law
R v (P v Q)'              <=> (P v Q)' v R  Double Negation
(P v Q)' v R              <=> (P v Q)' v R  Commutative
</pre>

```
Give an interpretation to prove that the following wff is not valid: (Ǝx)A(x) ^ (Ǝx)B(x) -> (Ǝx)(A(x) ^ B(x))
```

If "x" are Transformers, "A(x)" are Autobots, "B(x)" are Decepticons  
"(∃x)A(x) ^ (∃x)B(x)" means that "some Transformers are Autobots and some Transformers are Decepticons"  
"(∃x)(A(x) ^ B(x))" would mean that "some Transformers are Autobots and Decepticons",  
which isn't true because Megatron would kill any Transformers that try to play both sides!
