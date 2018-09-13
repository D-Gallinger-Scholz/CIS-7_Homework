Part 1

(M -> H)^(S -> C) means "If mathematics is easy then homework is done and if it is sunny then camping is fun."
“Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.” means (S^H) -> (MvC)

Part 2
```
 (¬B → ¬A) → ((¬B → A) → B)
```

| A | B | ¬A | ¬B | ¬B -> ¬A | ¬B -> A | ((¬B -> A) -> B| (¬B -> ¬A) -> ((¬B -> A) -> B)
|---|---|--- |--- |---       |---      |---             |---
| T | T | F  | F  |T         |T        |T               |T
| T | F | F  | T  |F         |T        |F               |T
| F | T | T  | F  |T         |T        |T               |T
| F | F | T  | T  |T         |F        |F               |F
