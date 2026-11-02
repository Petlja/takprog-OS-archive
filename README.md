# Takprog archive: primary school

Tasks from the Serbian primary-school programming competitions (Takprog for primary school), restored from Petlja
and checked, for the competition archive. Each task has everything needed to set it again: statement with examples,
testcases, checker, scoring, and time and memory limits. Where the commission's collection names a task's authors,
they are named at the top of its statement.

## Layout

Paths follow the competitions: `takprog-{season}/{round}/{grade}/{nn}_{task}/`. Most rounds are held as one
competition per grade (`6_razred` is the sixth grade and younger, then `7_razred` and `8_razred`), and `nn` is the
task's place in that competition. Each grade folder is the whole competition: a task that was set in several grades
is copied into each of them. Rounds held as one competition for everyone (the selection rounds for international
competitions: for infO(1)Cup and IATI, JSIO, Izborno, and in 2024-25 the two levels of the selection cycle) have no
grade folder.

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
main C++ solution, which must pass every test (where the collection has a working one), and two C++ solutions
submitted at the contest, which must get the verdict the contest recorded on every test. Anything missing or not
working is listed in the table below.

From the 2024-25 selection cycle (May 2025) on, the contests ran on Petlja's Linux grader, the one these tasks were
checked on; the earlier ones ran on a Windows machine with other compilers. In 2024-25 the municipal, district and
state competitions were not held on Petlja, so that season has only the qualifying and selection rounds.

## Limits

- **Time limit:** CPU time of the solution on one testcase, not wall-clock time.
- **Memory limit:** the solution's peak memory on one testcase. Stack may use up to 256 MB within it.
- **Where they were checked:** Petlja's grader as of 2026. That's Linux on an Intel Xeon Platinum 8272CL at
  2.6 GHz. C++ is compiled with g++ 14.2,
  `-std=gnu++17 -O2 -static`; Python is 3.13.
- The limits are the ones set for the competition, on the grader of that time (until May 2025 a Windows machine with
  other compilers). Every task's solutions were re-run on today's grader and pass within the limits, except where
  the table says otherwise.

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
| 2025-26 | Opštinsko | 7 | [Verzije softvera](takprog-2025-26/04_OPSTINSKO/7_razred/02_verzije_softvera) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Opštinsko | 7 | [Žućkov rejon](takprog-2025-26/04_OPSTINSKO/7_razred/03_zuckov_rejon) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Opštinsko | 7 | [Jelka](takprog-2025-26/04_OPSTINSKO/7_razred/04_jelka) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Opštinsko | 8 | [Pitagorina trojka](takprog-2025-26/04_OPSTINSKO/8_razred/01_pitagorina_trojka) | standard | 0.1 s | 64 MB | 20 | default | — | — |
| 2025-26 | Opštinsko | 8 | [Učešće](takprog-2025-26/04_OPSTINSKO/8_razred/02_ucesce) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2025-26 | Opštinsko | 8 | [Baunding boks](takprog-2025-26/04_OPSTINSKO/8_razred/03_bounding_box) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Opštinsko | 8 | [Različite majice](takprog-2025-26/04_OPSTINSKO/8_razred/04_razlicite_majice) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Okružno | 6 | [Nz](takprog-2025-26/05_OKRUZNO/6_razred/01_nz) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Okružno | 6 | [Drugarice](takprog-2025-26/05_OKRUZNO/6_razred/02_drugarice) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Okružno | 6 | [Pikado](takprog-2025-26/05_OKRUZNO/6_razred/03_pikado) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2025-26 | Okružno | 6 | [Ski staza](takprog-2025-26/05_OKRUZNO/6_razred/04_ski_staza) | standard | 0.2 s | 64 MB | 14 | default | — | — |
| 2025-26 | Okružno | 7 | [Drugarice](takprog-2025-26/05_OKRUZNO/7_razred/01_drugarice) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Okružno | 7 | [Pikado](takprog-2025-26/05_OKRUZNO/7_razred/02_pikado) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2025-26 | Okružno | 7 | [Sedlasti element](takprog-2025-26/05_OKRUZNO/7_razred/03_sedlasti_element) | standard | 2.5 s | 64 MB | 7 | default | — | — |
| 2025-26 | Okružno | 7 | [Navodnjavanje](takprog-2025-26/05_OKRUZNO/7_razred/04_navodnjavanje) | standard | 0.4 s | 64 MB | 21 | default | — | — |
| 2025-26 | Okružno | 8 | [Zaboravna plesačica](takprog-2025-26/05_OKRUZNO/8_razred/01_zaboravna_plesacica) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Okružno | 8 | [Veći od svih parnih](takprog-2025-26/05_OKRUZNO/8_razred/02_veci_od_svih_parnih) | standard | 0.2 s | 256 MB | 12 | default | — | — |
| 2025-26 | Okružno | 8 | [Sedlasti element](takprog-2025-26/05_OKRUZNO/8_razred/03_sedlasti_element) | standard | 2.5 s | 64 MB | 7 | default | — | — |
| 2025-26 | Okružno | 8 | [Bridž](takprog-2025-26/05_OKRUZNO/8_razred/04_bridz) | standard | 1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Državno | 6 | [Bioskop](takprog-2025-26/06_DRZAVNO/6_razred/01_bioskop) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2025-26 | Državno | 6 | [Plasman na JSIO](takprog-2025-26/06_DRZAVNO/6_razred/02_plasman_na_jsio) | standard | 1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Državno | 6 | [Baka i ćufte](takprog-2025-26/06_DRZAVNO/6_razred/03_baka_i_cufte) | standard | 1.5 s | 64 MB | 13 | default | — | — |
| 2025-26 | Državno | 6 | [Dva niza](takprog-2025-26/06_DRZAVNO/6_razred/04_dva_niza) | standard | 1 s | 64 MB | 14 | default | — | — |
| 2025-26 | Državno | 7 | [Medalje](takprog-2025-26/06_DRZAVNO/7_razred/01_medalje) | standard | 1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Državno | 7 | [Linije u matrici](takprog-2025-26/06_DRZAVNO/7_razred/02_linije_u_matrici) | standard | 1 s | 64 MB | 21 | default | — | — |
| 2025-26 | Državno | 7 | [Harshad brojevi 2](takprog-2025-26/06_DRZAVNO/7_razred/03_harshad_brojevi_2) | standard | 1.5 s | 256 MB | 17 | default | — | — |
| 2025-26 | Državno | 7 | [Igra na nizu](takprog-2025-26/06_DRZAVNO/7_razred/04_igra_na_nizu) | standard | 2.5 s | 64 MB | 22 | default | — | — |
| 2025-26 | Državno | 8 | [Kružni Menhetn](takprog-2025-26/06_DRZAVNO/8_razred/01_kruzni_menhetn) | standard | 0.1 s | 64 MB | 28 | default | — | — |
| 2025-26 | Državno | 8 | [Novi Menhetn](takprog-2025-26/06_DRZAVNO/8_razred/02_novi_menhetn) | standard | 1 s | 64 MB | 11 | default | — | — |
| 2025-26 | Državno | 8 | [Autobusi](takprog-2025-26/06_DRZAVNO/8_razred/03_autobusi) | standard | 2.5 s | 64 MB | 36 | default | — | — |
| 2025-26 | Državno | 8 | [Premijum slike](takprog-2025-26/06_DRZAVNO/8_razred/04_premijum_slike) | standard | 3 s | 64 MB | 36 | default | — | — |
| 2025-26 | JSIO | — | [Kvadrati](takprog-2025-26/07_JSIO/01_kvadrati) | standard | 2 s | 256 MB | 24 | default | — | — |
| 2025-26 | JSIO | — | [Dve vrednosti](takprog-2025-26/07_JSIO/02_dve_vrednosti) | standard | 0.5 s | 256 MB | 37 | default | — | — |
| 2025-26 | JSIO | — | [Profitabilni skokovi](takprog-2025-26/07_JSIO/03_profitabilni_skokovi) | standard | 1.5 s | 256 MB | 31 | default | — | — |
| 2025-26 | JSIO | — | [Kaladont](takprog-2025-26/07_JSIO/04_kaladont) | standard | 1 s | 256 MB | 99 | default | — | — |
| 2025-26 | Izborno | — | [Lampice](takprog-2025-26/08_IZBORNO/01_lampice) | standard | 1 s | 256 MB | 29 | default | — | — |
| 2025-26 | Izborno | — | [Grane uzastopnih](takprog-2025-26/08_IZBORNO/02_grane_uzastopnih) | standard | 1 s | 256 MB | 84 | default | — | — |
| 2025-26 | Izborno | — | [Fabrika](takprog-2025-26/08_IZBORNO/03_fabrika) | standard | 1 s | 256 MB | 60 | default | — | — |
| 2025-26 | Izborno | — | [Najduži testerasti podnizovi](takprog-2025-26/08_IZBORNO/04_najduzi_testerasti_podnizovi) | standard | 1 s | 256 MB | 87 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 6 | [Srednja brzina](takprog-2024-25/01_KV1/6_razred/01_srednja_brzina) | standard | 0.1 s | 64 MB | 12 | `checker.cpp` (custom) | — | — |
| 2024-25 | Kvalifikacije 1 | 6 | [Atletičari](takprog-2024-25/01_KV1/6_razred/02_atleticari) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 6 | [Gps](takprog-2024-25/01_KV1/6_razred/03_gps) | standard | 0.2 s | 64 MB | 11 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 6 | [Najuspešnija partija](takprog-2024-25/01_KV1/6_razred/04_najuspesnija_partija) | standard | 0.2 s | 64 MB | 11 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 6 | [Imena prezimena](takprog-2024-25/01_KV1/6_razred/05_imena_prezimena) | standard | 0.2 s | 64 MB | 12 | `checker.cpp` (custom) | — | — |
| 2024-25 | Kvalifikacije 1 | 6 | [Kupovina skija](takprog-2024-25/01_KV1/6_razred/06_kupovina_skija) | standard | 0.15 s | 64 MB | 12 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 7 | [Taksi promo-kôd](takprog-2024-25/01_KV1/7_razred/01_taksi_promo_kod) | standard | 0.1 s | 64 MB | 5 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 7 | [Broj suglasnika](takprog-2024-25/01_KV1/7_razred/02_broj_suglasnika) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 7 | [Presek intervala](takprog-2024-25/01_KV1/7_razred/03_presek_intervala) | standard | 0.1 s | 64 MB | 13 | default | Example 2 shows `5 202`; test 2 is `5 2024` (same answer) | Tests 2 and 12 have numbers up to 2061, above the statement's bound of 1000 |

## Summary

All 72 tasks of 2025-26 (84 task folders in 18 grade competitions) have their statement, pictures, limits, scoring
and checker (two custom ones, the rest default). None has a known problem: the commission's main solutions pass every
test, and solutions submitted at each contest get the verdict the contest recorded on every test. The one exception is
test 1 of [Harshad brojevi 2](takprog-2025-26/06_DRZAVNO/7_razred/03_harshad_brojevi_2), a 0-point example: the
commission corrected it during the contest, but Petlja's grader kept the old one, which every submission failed.
