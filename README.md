# Takprog archive: primary school

Tasks from the Serbian primary-school programming competitions (Takprog for primary school), restored from Petlja
and checked, for the competition archive. Each task has everything needed to set it again: statement with examples,
testcases, checker, scoring, and time and memory limits. The tasks' authors are named at the top of each statement.

## Layout

Paths follow the competitions: `takprog-{season}/{round}/{grade}/{nn}_{task}/`. Most rounds are held as one
competition per grade (`6_razred` is the sixth grade and younger, then `7_razred` and `8_razred`), and `nn` is the
task's place in that competition. Each grade folder is the whole competition: a task that was set in several grades
is copied into each of them. Rounds held as one competition for everyone (the qualifying round for infO(1)Cup and
IATI, JSIO, Izborno) have no grade folder.

| File | What |
|---|---|
| `statement.md` | The statement in Markdown, with examples. Its header gives `timelimit` (seconds) and `memlimit` (MB) |
| `*.png`, `*.jpg` | Pictures the statement shows, if any |
| `testcases/` | `NN.in` / `NN.out`: the test set the competition actually ran on |
| `checker.cpp` | The competition's checker, when it had one. Called as `checker <contestant output> <expected output> <input>`. Exit code 0 = accepted, anything else = wrong |
| `scoring.yaml` | The competition's scoring: points per test or per subtask, and which tests are public |

## How a task gets here

**Tests, limits, checker and scoring come from the competition on Petlja**, as the contest ran. They are taken byte
for byte from the problem's test version that was live on the contest date, with any tests uploaded separately before
the contest ended. Where the commission corrected a test during a contest and graded every submission again, the set
is the corrected one.

**The statement is the one Petlja showed at the contest**, in Cyrillic, as the commission wrote it in Markdown. The
author line at the top comes from the commission's collection (`takprog-osnovci`), where the statements were edited
later for the bulletin of solutions. Where the two differ in more than wording (an example, a subtask's points), the
contest's version is kept, because the tests and scoring match it.

Before a task is added, solutions are run against the chosen testcases in a copy of Petlja's grader: the commission's
main C++ solution, which must pass every test, and two C++ solutions submitted at the contest, which must get the
verdict the contest recorded on every test. Anything missing or not working is listed in the table below.

From 2025-26 on, every contest ran on Petlja's Linux grader, the one these tasks were checked on.

## Limits

- **Time limit:** CPU time of the solution on one testcase, not wall-clock time.
- **Memory limit:** the solution's peak memory on one testcase. Stack may use up to 256 MB within it.
- **Where they were checked:** Petlja's grader as of 2026. That's Linux on an Intel Xeon Platinum 8272CL at
  2.6 GHz. C++ is compiled with g++ 14.2,
  `-std=gnu++17 -O2 -static`; Python is 3.13.
- The limits are the ones set for the competition. Every task's solutions were re-run on today's grader and pass
  within the limits, except where the table says otherwise.

## Tasks

Limits are the competition's. *Grade* is the grade competition the task was set in (6 = sixth grade and younger);
a task set in several grades has a row for each. *Type* is `standard` (the program reads the input and writes the
output). *Checker* is `default` when the task uses a plain token comparison and needs no `checker.cpp`.

The last two columns list only what is missing or doesn't work; everything else is as the contest had it.
Please check the tasks against your own copies too.

| Season | Round | Grade | Task | Type | Time | Memory | Testcases | Checker | Task problems | Testcase problems |
|---|---|---|---|---|---|---|---|---|---|---|
| 2025-26 | Kvalifikacije 1 | 6 | [Godine](takprog-2025-26/01_KV1/6_razred/01_godine) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 6 | [Čokolada](takprog-2025-26/01_KV1/6_razred/02_cokolada) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 6 | [Jmbg](takprog-2025-26/01_KV1/6_razred/03_jmbg) | standard | 0.1 s | 64 MB | 14 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 6 | [Najubedljivija pobeda](takprog-2025-26/01_KV1/6_razred/04_najubedljivija_pobeda) | standard | 0.2 s | 64 MB | 11 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 6 | [Kombinacija zadataka](takprog-2025-26/01_KV1/6_razred/05_kombinacija_zadataka) | standard | 0.2 s | 64 MB | 11 | `checker.cpp` (custom) | — | — |
| 2025-26 | Kvalifikacije 1 | 6 | [Broj segmenata parnog zbira](takprog-2025-26/01_KV1/6_razred/06_broj_segmenata_parnog_zbira) | standard | 0.2 s | 64 MB | 11 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 7 | [Čokolada](takprog-2025-26/01_KV1/7_razred/01_cokolada) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 7 | [Kontrolna cifra](takprog-2025-26/01_KV1/7_razred/02_kontrolna_cifra) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 7 | [Najubedljivija pobeda](takprog-2025-26/01_KV1/7_razred/03_najubedljivija_pobeda) | standard | 0.2 s | 64 MB | 11 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 7 | [Jedinične kolone](takprog-2025-26/01_KV1/7_razred/04_jedinicne_kolone) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 7 | [Broj segmenata parnog zbira](takprog-2025-26/01_KV1/7_razred/05_broj_segmenata_parnog_zbira) | standard | 0.2 s | 64 MB | 11 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 7 | [Postojanje trougla](takprog-2025-26/01_KV1/7_razred/06_postojanje_trougla) | standard | 0.2 s | 64 MB | 13 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 8 | [Autoprevoznik](takprog-2025-26/01_KV1/8_razred/01_autoprevoznik) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 8 | [Termometar](takprog-2025-26/01_KV1/8_razred/02_termometar) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 8 | [Najubedljivija pobeda](takprog-2025-26/01_KV1/8_razred/03_najubedljivija_pobeda) | standard | 0.2 s | 64 MB | 11 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 8 | [Jedinične kolone](takprog-2025-26/01_KV1/8_razred/04_jedinicne_kolone) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 8 | [Jednačina](takprog-2025-26/01_KV1/8_razred/05_jednacina) | standard | 0.5 s | 64 MB | 11 | default | — | — |
| 2025-26 | Kvalifikacije 1 | 8 | [Najveća kombinacija](takprog-2025-26/01_KV1/8_razred/06_najveca_kombinacija) | standard | 1 s | 256 MB | 17 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 6 | [Gringots](takprog-2025-26/02_KV2/6_razred/01_gringots) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 6 | [Putovanje](takprog-2025-26/02_KV2/6_razred/02_putovanje) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 6 | [Približan račun](takprog-2025-26/02_KV2/6_razred/03_priblizan_racun) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 6 | [Dobri parovi](takprog-2025-26/02_KV2/6_razred/04_dobri_parovi) | standard | 0.5 s | 64 MB | 11 | `checker.cpp` (custom) | — | — |
| 2025-26 | Kvalifikacije 2 | 6 | [Cenzura](takprog-2025-26/02_KV2/6_razred/05_cenzura) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 6 | [Širenje tajne](takprog-2025-26/02_KV2/6_razred/06_sirenje_tajne) | standard | 2 s | 64 MB | 16 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 7 | [Hari Poter](takprog-2025-26/02_KV2/7_razred/01_hari_poter) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 7 | [Putovanje](takprog-2025-26/02_KV2/7_razred/02_putovanje) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 7 | [Dobri parovi](takprog-2025-26/02_KV2/7_razred/03_dobri_parovi) | standard | 0.5 s | 64 MB | 11 | `checker.cpp` (custom) | — | — |
| 2025-26 | Kvalifikacije 2 | 7 | [Kvazinaučnik](takprog-2025-26/02_KV2/7_razred/04_kvazinaucnik) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 7 | [Da li postoji pravougaonik](takprog-2025-26/02_KV2/7_razred/05_da_li_postoji_pravougaonik) | standard | 1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 7 | [Suma svih podnizova](takprog-2025-26/02_KV2/7_razred/06_suma_svih_podnizova) | standard | 0.5 s | 64 MB | 11 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 8 | [Slagalica](takprog-2025-26/02_KV2/8_razred/01_svirka) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 8 | [Gumene bombone](takprog-2025-26/02_KV2/8_razred/02_gumene_bombone) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 8 | [Dobri parovi](takprog-2025-26/02_KV2/8_razred/03_dobri_parovi) | standard | 0.5 s | 64 MB | 11 | `checker.cpp` (custom) | — | — |
| 2025-26 | Kvalifikacije 2 | 8 | [Advokatica](takprog-2025-26/02_KV2/8_razred/04_advokatica) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 8 | [Suma svih podnizova](takprog-2025-26/02_KV2/8_razred/05_suma_svih_podnizova) | standard | 0.5 s | 64 MB | 11 | default | — | — |
| 2025-26 | Kvalifikacije 2 | 8 | [Slatki podnizovi](takprog-2025-26/02_KV2/8_razred/06_slatki_podnizovi) | standard | 1 s | 64 MB | 23 | default | — | — |
| 2025-26 | Kvalifikaciono (infO(1)Cup, IATI) | — | [Proizvod](takprog-2025-26/03_INFOCUPIZB/01_proizvod) | standard | 1 s | 64 MB | 13 | default | — | — |
| 2025-26 | Kvalifikaciono (infO(1)Cup, IATI) | — | [Snežina strategija](takprog-2025-26/03_INFOCUPIZB/02_snezina_strategija) | standard | 1 s | 64 MB | 26 | default | — | — |
| 2025-26 | Kvalifikaciono (infO(1)Cup, IATI) | — | [Domine](takprog-2025-26/03_INFOCUPIZB/03_domine) | standard | 1 s | 64 MB | 21 | default | — | — |
| 2025-26 | Kvalifikaciono (infO(1)Cup, IATI) | — | [Snežno stablo](takprog-2025-26/03_INFOCUPIZB/04_snezno_stablo) | standard | 1 s | 64 MB | 52 | default | — | — |
| 2025-26 | Opštinsko | 6 | [Budžet za letovanje](takprog-2025-26/04_OPSTINSKO/6_razred/01_budzet_za_letovanje) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Opštinsko | 6 | [Uporediti cifre](takprog-2025-26/04_OPSTINSKO/6_razred/02_uporediti_cifre) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2025-26 | Opštinsko | 6 | [Deljivost sa 3 7 21](takprog-2025-26/04_OPSTINSKO/6_razred/03_deljivost_sa_3_7_21) | standard | 0.1 s | 64 MB | 16 | default | — | — |
| 2025-26 | Opštinsko | 6 | [Raspoređivanje slika](takprog-2025-26/04_OPSTINSKO/6_razred/04_rasporedjivanje_slika) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2025-26 | Opštinsko | 7 | [Sveska](takprog-2025-26/04_OPSTINSKO/7_razred/01_sveska) | standard | 0.1 s | 64 MB | 12 | default | — | — |
