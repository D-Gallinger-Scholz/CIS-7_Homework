Part 1

```
(M -> H)^(S -> C)
```
"If mathematics is easy then homework is done and if it is sunny then camping is fun." 

```
“Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”
```
(S ^ H) -> (M v C)

Part 2
```
 (¬B → ¬A) → ((¬B → A) → B)
```

| A | B | ¬A | ¬B | ¬B -> ¬A | ¬B -> A | ((¬B -> A) -> B| (¬B -> ¬A) -> ((¬B -> A) -> B)
|---|---|--- |--- |---       |---      |---             |---
| T | T | F  | F  |T         |T        |T               |T
| T | F | F  | T  |F         |T        |F               |T
| F | T | T  | F  |T         |T        |T               |T
| F | F | T  | T  |T         |F        |T               |T

This is a tautology!

```
 ((A → B)∧(B → ¬A)) → A
```

| A | B | ¬A | A -> B | B -> ¬A | ((A -> B)^(B -> ¬A) | ((A -> B)^((B -> ¬A)) -> A
|---|---|--- |---     |---      |---                  |---             
| T | T | F  | T      | F       | F                   | T
| T | F | F  | F      | T       | F                   | T
| F | T | T  | T      | T       | T                   | F
| F | F | T  | T      | T       | T                   | F

This is neither a tautology nor is it a contradiction!

Part 3

```
(p ∧ q) → r , p → (q → r )
```
<pre>
(p ^ q) -> r  <=> p -> (q -> r)  
(p ^ q)' v r  <=> p' v (q' v r)  Implication x3  
(p' v q') v r <=> p' v (q' v r)  De Morgan's Law  
p' v (q' v r) <=> p' v (q' v r)  Associative
</pre>

```
(q ∨ r ) → p, (q → p)∧(r → p)
```
<pre>
(q v r) -> p      <=> (q -> p)^(r -> p)  
(q v r)' v p      <=> (q' v p)^(r' v p)  Implication x3  
(q' ^ r') v p     <=> (q' v p)^(r' v p)  De Morgan's Law  
(q' v p)^(r' v p) <=> (q' v p)^(r' v p)  Distributive
</pre>

Part 4

```
∃x∀y∀z(City(x)∧Traveler(y)∧Lives(z,x)) → (Loves(y,x)∧ ¬Loves(z,x))
```

"There are some cities that all travelers love but their residents don't."

```
“No traveler loves the city they live in.”
```
∃x∀y(City(x)^Traveler(y)^Lives(y,x)) -> ¬Loves(y,x)

Part 5

```
Assuming: p → (q ∧ r ), s → r , r → p
Prove: s → q.
```
Because "s" is true and "s -> r", then "r" is true (Modus Ponen)  
Because "r" is true and "r -> p", then "p" is true (Modus Ponen)  
Becuase "r" and "p" are true and "p -> (q ^ r)", then "(q ^ r)" is true (Modus Ponen)  
Because "r" and "(q ^ r)" are true, then "q" must be true  
Therefore, "s -> q"

```
Assuming: ¬(r ∨ s), ¬p → s, p → q. 
Prove: q
```

Because "¬(r ∨ s)", then "¬r ^ ¬s" (De Morgan's Law)  
And because "¬p -> s", then "¬s -> p" (Modus Tollens)  
Then "¬r ^ ¬s" means "r" and "s" must both be false and "¬s -> p", then "p" is true  
Therefore, since "p" is true and "p -> q", then "q" is true (Modus Ponen)
