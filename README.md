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
competitions: for infO(1)Cup and IATI, JSIO (SIO in 2022-23), Izborno, and in 2024-25 the two levels of the
selection cycle) have no grade folder.

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
the contest ended. Where the commission corrected tests during or after a contest and graded every submission again,
the set is the corrected one. Where a test, a limit or the scoring changed during or after a contest without that,
the archive has what the contest ended with.

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
state competitions were not held on Petlja, so that season has only the qualifying and selection rounds. In 2022-23
there was no municipal round: three qualifying rounds led to the district one.

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
| 2024-25 | Kvalifikacije 1 | 7 | [Programski jezici](takprog-2024-25/01_KV1/7_razred/04_programski_jezici) | standard | 0.5 s | 64 MB | 11 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 7 | [Najduži podniz sa 3 parna broja](takprog-2024-25/01_KV1/7_razred/05_najduzi_podniz_max_3_parna) | standard | 0.75 s | 64 MB | 53 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 7 | [Naelektrisanje](takprog-2024-25/01_KV1/7_razred/06_naelektrisanje) | standard | 0.3 s | 64 MB | 12 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 8 | [PIN aplikacije od PIN-a telefona](takprog-2024-25/01_KV1/8_razred/01_pin_aplikacije_od_pina_telefona) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 8 | [Presek intervala](takprog-2024-25/01_KV1/8_razred/02_presek_intervala) | standard | 0.1 s | 64 MB | 13 | default | — | Tests 2 and 12 have numbers up to 2061, above the statement's bound of 1000 |
| 2024-25 | Kvalifikacije 1 | 8 | [Broj jakih lozinki](takprog-2024-25/01_KV1/8_razred/03_broj_jakih_lozinki) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 8 | [Čudna osmosmerka](takprog-2024-25/01_KV1/8_razred/04_cudna_osmosmerka) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 8 | [Najduži podniz sa 3 parna broja](takprog-2024-25/01_KV1/8_razred/05_najduzi_podniz_max_3_parna) | standard | 0.75 s | 64 MB | 53 | default | — | — |
| 2024-25 | Kvalifikacije 1 | 8 | [Astronom](takprog-2024-25/01_KV1/8_razred/06_astronom) | standard | 2.5 s | 64 MB | 17 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 6 | [Kupovina pribora](takprog-2024-25/02_KV2/6_razred/01_kupovina_pribora) | standard | 1 s | 64 MB | 12 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 6 | [Pomeranje časovnika](takprog-2024-25/02_KV2/6_razred/02_pomeranje_casovnika) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 6 | [Tri na tri](takprog-2024-25/02_KV2/6_razred/03_tri_na_tri) | standard | 1 s | 64 MB | 23 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 6 | [Rođendanski poklon](takprog-2024-25/02_KV2/6_razred/04_rodjendanski_poklon) | standard | 0.5 s | 64 MB | 11 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 6 | [Učešljavanje automobila](takprog-2024-25/02_KV2/6_razred/05_ucesljavanje_automobila) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 6 | [Plasman](takprog-2024-25/02_KV2/6_razred/06_plasman) | standard | 1 s | 64 MB | 11 | `checker.cpp` (custom) | — | — |
| 2024-25 | Kvalifikacije 2 | 7 | [Potreban broj petica](takprog-2024-25/02_KV2/7_razred/01_potreban_broj_petica) | standard | 1 s | 64 MB | 13 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 7 | [Ziplajn](takprog-2024-25/02_KV2/7_razred/02_zipline) | standard | 0.2 s | 64 MB | 17 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 7 | [Rođendanski poklon](takprog-2024-25/02_KV2/7_razred/03_rodjendanski_poklon) | standard | 0.5 s | 64 MB | 11 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 7 | [Plasman](takprog-2024-25/02_KV2/7_razred/04_plasman) | standard | 1 s | 64 MB | 11 | `checker.cpp` (custom) | — | — |
| 2024-25 | Kvalifikacije 2 | 7 | [Harshad brojevi 3](takprog-2024-25/02_KV2/7_razred/05_harshad_brojevi_3) | standard | 1 s | 64 MB | 11 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 7 | [Pakovanje kutija](takprog-2024-25/02_KV2/7_razred/06_pakovanje_kutija) | standard | 1 s | 256 MB | 23 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 8 | [Skočko broj](takprog-2024-25/02_KV2/8_razred/01_skocko_broj) | standard | 0.1 s | 64 MB | 26 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 8 | [Robot](takprog-2024-25/02_KV2/8_razred/02_robot) | standard | 0.2 s | 64 MB | 22 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 8 | [Učešljavanje automobila](takprog-2024-25/02_KV2/8_razred/03_ucesljavanje_automobila) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 8 | [Avionske karte](takprog-2024-25/02_KV2/8_razred/04_avionske_karte) | standard | 0.5 s | 64 MB | 12 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 8 | [Palindromski upiti](takprog-2024-25/02_KV2/8_razred/05_palindromski_upiti) | standard | 0.5 s | 64 MB | 11 | default | — | — |
| 2024-25 | Kvalifikacije 2 | 8 | [Pakovanje kutija](takprog-2024-25/02_KV2/8_razred/06_pakovanje_kutija) | standard | 1 s | 256 MB | 23 | default | — | — |
| 2024-25 | Izborno (infO(1)Cup) | — | [Operacija](takprog-2024-25/03_INFOCUPIZB/01_operacija) | standard | 0.5 s | 64 MB | 41 | default | — | — |
| 2024-25 | Izborno (infO(1)Cup) | — | [Ciglice](takprog-2024-25/03_INFOCUPIZB/02_ciglice) | standard | 2.5 s | 64 MB | 41 | default | — | — |
| 2024-25 | Izborno (infO(1)Cup) | — | [Vodoinstalater](takprog-2024-25/03_INFOCUPIZB/03_vodoinstalater) | standard | 3 s | 256 MB | 38 | default | — | — |
| 2024-25 | Izborno (infO(1)Cup) | — | [Sabiranje, NZD i XOR](takprog-2024-25/03_INFOCUPIZB/04_sabiranje_nzd_i_xor) | standard | 0.5 s | 256 MB | 85 | default | — | — |
| 2024-25 | Izborno (infO(1)Cup) | — | [Upiti nad stablom](takprog-2024-25/03_INFOCUPIZB/05_upiti_nad_stablom) | standard | 4 s | 512 MB | 57 | default | — | — |
| 2024-25 | Izborni ciklus, 1. nivo | — | [Ograda](takprog-2024-25/04_PRVI_KRUG_IZBORNOG/01_ograda) | standard | 1 s | 64 MB | 22 | default | — | — |
| 2024-25 | Izborni ciklus, 1. nivo | — | [Banane](takprog-2024-25/04_PRVI_KRUG_IZBORNOG/02_banane) | standard | 0.5 s | 64 MB | 12 | default | — | — |
| 2024-25 | Izborni ciklus, 1. nivo | — | [Raspored kuća](takprog-2024-25/04_PRVI_KRUG_IZBORNOG/03_raspored_kuca) | standard | 1 s | 64 MB | 16 | default | — | — |
| 2024-25 | Izborni ciklus, 1. nivo | — | [Kutije i žice](takprog-2024-25/04_PRVI_KRUG_IZBORNOG/04_kutije_i_zice) | standard | 1 s | 256 MB | 22 | default | — | — |
| 2024-25 | Izborni ciklus, 2. nivo, 1. dan | — | [Maksimalna suma ograničenog podniza](takprog-2024-25/05_PRVI_DAN_IZB/01_maksimalna_suma_ogranicenog_podniza) | standard | 0.5 s | 256 MB | 18 | default | — | — |
| 2024-25 | Izborni ciklus, 2. nivo, 1. dan | — | [Grafovski savez](takprog-2024-25/05_PRVI_DAN_IZB/02_grafovski_savez) | standard | 2 s | 256 MB | 31 | default | — | — |
| 2024-25 | Izborni ciklus, 2. nivo, 1. dan | — | [Do nule](takprog-2024-25/05_PRVI_DAN_IZB/03_do_nule) | standard | 1 s | 256 MB | 26 | default | — | — |
| 2024-25 | Izborni ciklus, 2. nivo, 2. dan | — | [Saberi pomnoži](takprog-2024-25/06_DRUGI_DAN_IZB/01_saberi_pomnozi) | standard | 1.5 s | 256 MB | 44 | default | — | — |
| 2024-25 | Izborni ciklus, 2. nivo, 2. dan | — | [Majstor Bob](takprog-2024-25/06_DRUGI_DAN_IZB/02_majstor_bob) | standard | 1 s | 256 MB | 27 | default | — | — |
| 2024-25 | Izborni ciklus, 2. nivo, 2. dan | — | [Svi prosti](takprog-2024-25/06_DRUGI_DAN_IZB/03_svi_prosti) | standard | 1 s | 256 MB | 21 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 6 | [Preklapanje cifara](takprog-2023-24/01_KV1/6_razred/01_cifre_se_preklapaju) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 6 | [Najveća prednost domaćih](takprog-2023-24/01_KV1/6_razred/02_najveca_prednost_domacih) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 6 | [Promena škole](takprog-2023-24/01_KV1/6_razred/03_promena_skole) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 6 | [Nabrajanje](takprog-2023-24/01_KV1/6_razred/04_nabrajanje) | standard | 0.2 s | 64 MB | 13 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 6 | [Top](takprog-2023-24/01_KV1/6_razred/05_top) | standard | 1 s | 64 MB | 11 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 6 | [Mica štucalica](takprog-2023-24/01_KV1/6_razred/06_mica_stucalica) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 7 | [Pogrešna operacija](takprog-2023-24/01_KV1/7_razred/01_pogresna_operacija) | standard | 0.2 s | 64 MB | 11 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 7 | [Razvrstavanje](takprog-2023-24/01_KV1/7_razred/02_razvrstavanje) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 7 | [Promena škole](takprog-2023-24/01_KV1/7_razred/03_promena_skole) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 7 | [Najdalji najbliži](takprog-2023-24/01_KV1/7_razred/04_najdalji_najblizi) | standard | 0.2 s | 64 MB | 17 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 7 | [WiFi snaga](takprog-2023-24/01_KV1/7_razred/05_wifi_snaga) | standard | 0.15 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 7 | [Najveći NZD](takprog-2023-24/01_KV1/7_razred/06_max_nzd) | standard | 0.25 s | 64 MB | 14 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 8 | [Nedostajuća stranica četvorougla](takprog-2023-24/01_KV1/8_razred/01_nedostajuca_stranica_cetvorougla) | standard | 0.2 s | 64 MB | 13 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 8 | [Eksel](takprog-2023-24/01_KV1/8_razred/02_eksel) | standard | 0.1 s | 64 MB | 13 | default | Example 2's input is written with a Cyrillic А (`АC`); test 2 is `AC` | — |
| 2023-24 | Kvalifikacije 1 | 8 | [Krađa dijamanta](takprog-2023-24/01_KV1/8_razred/03_kradja_dijamanta) | standard | 1 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 8 | [Broj segmenata sa proizvodom nula](takprog-2023-24/01_KV1/8_razred/04_broj_segmenata_sa_proizvodom_nula) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 8 | [WiFi snaga](takprog-2023-24/01_KV1/8_razred/05_wifi_snaga) | standard | 0.15 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 1 | 8 | [Jedan-dva-tri-četiri](takprog-2023-24/01_KV1/8_razred/06_jedan_dva_tri_cetiri) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 6 | [Zakucavanje](takprog-2023-24/02_KV2/6_razred/01_zakucavanje) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 6 | [Nepoznat broj](takprog-2023-24/02_KV2/6_razred/02_nepoznati_broj) | standard | 0.1 s | 16 MB | 23 | default | `scoring.yaml` repeats group id 12, so Petlja scores tests 11, 12, 15 and 16 as two 10-point groups that each need all four (as at the contest) | — |
| 2023-24 | Kvalifikacije 2 | 6 | [Ski karta](takprog-2023-24/02_KV2/6_razred/03_ski_pas) | standard | 0.1 s | 64 MB | 15 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 6 | [Gorivo](takprog-2023-24/02_KV2/6_razred/04_gorivo) | standard | 0.099 s | 64 MB | 13 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 6 | [Prva i poslednja cifra](takprog-2023-24/02_KV2/6_razred/05_prva_i_poslednja_cifra) | standard | 0.1 s | 16 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 6 | [Najgušći podskup](takprog-2023-24/02_KV2/6_razred/06_najgusci_podskup) | standard | 0.5 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 7 | [Mesec rođenja](takprog-2023-24/02_KV2/7_razred/01_mesec_rodjenja) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 7 | [Vrabac i mačka](takprog-2023-24/02_KV2/7_razred/02_vrabac_i_macka) | standard | 0.2 s | 64 MB | 14 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 7 | [Neravnoteža](takprog-2023-24/02_KV2/7_razred/03_neravnoteza) | standard | 0.2 s | 64 MB | 17 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 7 | [Dorćol open](takprog-2023-24/02_KV2/7_razred/04_dorcol_open) | standard | 1.3 s | 64 MB | 12 | `checker.cpp` (custom) | — | — |
| 2023-24 | Kvalifikacije 2 | 7 | [Neparni delioci](takprog-2023-24/02_KV2/7_razred/05_neparni_delioci) | standard | 0.25 s | 64 MB | 14 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 7 | [Šibice](takprog-2023-24/02_KV2/7_razred/06_sibice) | standard | 0.25 s | 16 MB | 23 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 8 | [Bioskop](takprog-2023-24/02_KV2/8_razred/01_bioskop) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 8 | [Neravnoteža](takprog-2023-24/02_KV2/8_razred/02_neravnoteza) | standard | 0.2 s | 64 MB | 17 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 8 | [Najbrže do cilja](takprog-2023-24/02_KV2/8_razred/03_najbrze_do_cilja) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 8 | [Neparni delioci](takprog-2023-24/02_KV2/8_razred/04_neparni_delioci) | standard | 0.25 s | 64 MB | 14 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 8 | [Najmanje promena](takprog-2023-24/02_KV2/8_razred/05_najmanje_promena) | standard | 1 s | 64 MB | 12 | default | — | — |
| 2023-24 | Kvalifikacije 2 | 8 | [Aljmez](takprog-2023-24/02_KV2/8_razred/06_aljmez) | standard | 1 s | 64 MB | 11 | `checker.cpp` (custom) | The statement gives 20 points to the tests where every y is 0; the scoring gives them (tests 6 and 11) 10 | — |
| 2023-24 | Opštinsko | 6 | [Dani u nedelji](takprog-2023-24/03_OPSTINSKO/6_razred/01_dani_u_nedelji) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2023-24 | Opštinsko | 6 | [Toplotni pojas](takprog-2023-24/03_OPSTINSKO/6_razred/02_toplotni_pojas) | standard | 0.1 s | 16 MB | 13 | default | — | — |
| 2023-24 | Opštinsko | 6 | [Dostavljač](takprog-2023-24/03_OPSTINSKO/6_razred/03_dostavljac) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2023-24 | Opštinsko | 6 | [Minimaks](takprog-2023-24/03_OPSTINSKO/6_razred/04_minimax) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2023-24 | Opštinsko | 7 | [Obim paralelograma](takprog-2023-24/03_OPSTINSKO/7_razred/01_obim_paralelograma) | standard | 0.1 s | 16 MB | 12 | default | — | — |
| 2023-24 | Opštinsko | 7 | [Adrese i blokovi](takprog-2023-24/03_OPSTINSKO/7_razred/02_adrese) | standard | 0.1 s | 64 MB | 18 | default | — | — |
| 2023-24 | Opštinsko | 7 | [Slepo kucanje - reči](takprog-2023-24/03_OPSTINSKO/7_razred/03_slepo_kucanje_reci) | standard | 0.1 s | 16 MB | 12 | default | — | — |
| 2023-24 | Opštinsko | 7 | [Odbojkaški rezultat](takprog-2023-24/03_OPSTINSKO/7_razred/04_odbojkaski_rezultat) | standard | 0.1 s | 64 MB | 17 | default | — | — |
| 2023-24 | Opštinsko | 8 | [Bejzbol](takprog-2023-24/03_OPSTINSKO/8_razred/01_bejzbol_hitac) | standard | 0.1 s | 16 MB | 12 | default | — | — |
| 2023-24 | Opštinsko | 8 | [Godišnje doba](takprog-2023-24/03_OPSTINSKO/8_razred/02_godisnje_doba) | standard | 0.1 s | 16 MB | 32 | default | — | — |
| 2023-24 | Opštinsko | 8 | [Odbojkaški rezultat](takprog-2023-24/03_OPSTINSKO/8_razred/03_odbojkaski_rezultat) | standard | 0.1 s | 64 MB | 17 | default | — | — |
| 2023-24 | Opštinsko | 8 | [Par-nepar u krug](takprog-2023-24/03_OPSTINSKO/8_razred/04_parnepar_u_krug) | standard | 0.5 s | 16 MB | 12 | default | — | — |
| 2023-24 | Okružno | 6 | [Obim ili površina](takprog-2023-24/04_OKRUZNO/6_razred/01_obim_ili_povrsina) | standard | 0.1 s | 16 MB | 12 | default | — | — |
| 2023-24 | Okružno | 6 | [Zajednička drugarica](takprog-2023-24/04_OKRUZNO/6_razred/02_zajednicka_drugarica) | standard | 0.15 s | 64 MB | 13 | default | — | — |
| 2023-24 | Okružno | 6 | [Popravka stepeništa](takprog-2023-24/04_OKRUZNO/6_razred/03_popravka_stepenista) | standard | 0.15 s | 64 MB | 12 | default | — | — |
| 2023-24 | Okružno | 6 | [Zameni najveću cifru](takprog-2023-24/04_OKRUZNO/6_razred/04_zameni_najvecu_cifru) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2023-24 | Okružno | 7 | [Čudno putovanje](takprog-2023-24/04_OKRUZNO/7_razred/01_putovanje) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2023-24 | Okružno | 7 | [Proizvod prostih cifara](takprog-2023-24/04_OKRUZNO/7_razred/02_proizvod_prostih) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2023-24 | Okružno | 7 | [Rečenice u zagradama](takprog-2023-24/04_OKRUZNO/7_razred/03_recenice_u_zagradama) | standard | 0.15 s | 64 MB | 13 | default | — | — |
| 2023-24 | Okružno | 7 | [Takmičari](takprog-2023-24/04_OKRUZNO/7_razred/04_takmicari) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2023-24 | Okružno | 8 | [Trougao najvećeg obima](takprog-2023-24/04_OKRUZNO/8_razred/01_trougao_najveceg_obima) | standard | 0.1 s | 16 MB | 11 | default | — | — |
| 2023-24 | Okružno | 8 | [Najbolji učesnici turnira](takprog-2023-24/04_OKRUZNO/8_razred/02_turnir) | standard | 0.15 s | 64 MB | 11 | default | — | — |
| 2023-24 | Okružno | 8 | [Makazice](takprog-2023-24/04_OKRUZNO/8_razred/03_makazice) | standard | 0.15 s | 64 MB | 12 | default | — | — |
| 2023-24 | Okružno | 8 | [Konopci](takprog-2023-24/04_OKRUZNO/8_razred/04_konopci) | standard | 1 s | 64 MB | 22 | default | — | — |
| 2023-24 | Državno | 6 | [Motivacija](takprog-2023-24/05_DRZAVNO/6_razred/01_motivacija) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2023-24 | Državno | 6 | [Harshad brojevi](takprog-2023-24/05_DRZAVNO/6_razred/02_harshad_brojevi) | standard | 1 s | 64 MB | 12 | default | — | — |
| 2023-24 | Državno | 6 | [Đavolski kvadrat](takprog-2023-24/05_DRZAVNO/6_razred/03_djavolski_kvadrat) | standard | 2.5 s | 128 MB | 18 | default | — | — |
| 2023-24 | Državno | 6 | [Patikarnica](takprog-2023-24/05_DRZAVNO/6_razred/04_patikarnica) | standard | 2 s | 64 MB | 11 | default | — | — |
| 2023-24 | Državno | 7 | [Teške torbe](takprog-2023-24/05_DRZAVNO/7_razred/01_teske_torbe) | standard | 0.15 s | 64 MB | 13 | default | — | — |
| 2023-24 | Državno | 7 | [Kvantna zavrzlama](takprog-2023-24/05_DRZAVNO/7_razred/02_kvantna_zavrzlama) | standard | 1 s | 64 MB | 15 | default | — | — |
| 2023-24 | Državno | 7 | [Patikarnica](takprog-2023-24/05_DRZAVNO/7_razred/03_patikarnica) | standard | 2 s | 64 MB | 11 | default | — | — |
| 2023-24 | Državno | 7 | [Rotiranje reči](takprog-2023-24/05_DRZAVNO/7_razred/04_rotiranje_reci) | standard | 0.5 s | 64 MB | 13 | default | — | — |
| 2023-24 | Državno | 8 | [Biciklisti](takprog-2023-24/05_DRZAVNO/8_razred/01_biciklisti) | standard | 0.15 s | 64 MB | 27 | default | — | — |
| 2023-24 | Državno | 8 | [Gore-dole-levo-desno](takprog-2023-24/05_DRZAVNO/8_razred/02_gore_dole_levo_desno) | standard | 0.15 s | 64 MB | 28 | default | — | — |
| 2023-24 | Državno | 8 | [Zbir prostih](takprog-2023-24/05_DRZAVNO/8_razred/03_zbir_prostih) | standard | 5 s | 256 MB | 21 | default | — | — |
| 2023-24 | Državno | 8 | [Domine](takprog-2023-24/05_DRZAVNO/8_razred/04_domine) | standard | 1 s | 128 MB | 20 | default | — | — |
| 2023-24 | JSIO | — | [Neodgovoran student](takprog-2023-24/06_JSIO/01_neodgovoran_student) | standard | 0.5 s | 64 MB | 22 | default | — | — |
| 2023-24 | JSIO | — | [Najbolja zamena](takprog-2023-24/06_JSIO/02_najbolja_zamena) | standard | 0.5 s | 128 MB | 17 | default | — | — |
| 2023-24 | JSIO | — | [Pogađanje nepoznatog broja](takprog-2023-24/06_JSIO/03_pogadjanje_nepoznatog_broja) | standard | 1 s | 512 MB | 31 | default | — | — |
| 2023-24 | JSIO | — | [Graf od klika](takprog-2023-24/06_JSIO/04_graf_od_klika) | standard | 2.5 s | 512 MB | 60 | default | — | — |
| 2023-24 | Izborno | — | [Najbolji zbir](takprog-2023-24/07_IZBORNO/01_najbolji_zbir) | standard | 1 s | 64 MB | 28 | default | — | — |
| 2023-24 | Izborno | — | [Četiri delioca](takprog-2023-24/07_IZBORNO/02_cetiri_delioca) | standard | 1 s | 128 MB | 27 | default | — | — |
| 2023-24 | Izborno | — | [Slojevi tačaka u ravni](takprog-2023-24/07_IZBORNO/03_slojevi) | standard | 1.5 s | 64 MB | 10 | default | — | — |
| 2023-24 | Izborno | — | [Mešalica](takprog-2023-24/07_IZBORNO/04_mesalica) | standard | 2 s | 128 MB | 72 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 6 | [Kviz](takprog-2022-23/01_KV1/6_razred/01_kviz) | standard | 0.15 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 6 | [Gorivo](takprog-2022-23/01_KV1/6_razred/02_gorivo) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 6 | [Kakuro provera](takprog-2022-23/01_KV1/6_razred/03_kakuro_provera) | standard | 0.1 s | 64 MB | 18 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 6 | [Spisak proizvoda](takprog-2022-23/01_KV1/6_razred/04_spisak_proizvoda) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 6 | [Majstor](takprog-2022-23/01_KV1/6_razred/05_majstor) | standard | 0.2 s | 64 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 6 | [Zrak](takprog-2022-23/01_KV1/6_razred/06_zrak) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 7 | [Gorivo](takprog-2022-23/01_KV1/7_razred/01_gorivo) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 7 | [Kakuro provera](takprog-2022-23/01_KV1/7_razred/02_kakuro_provera) | standard | 0.1 s | 64 MB | 18 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 7 | [Odmeren trening](takprog-2022-23/01_KV1/7_razred/03_odmeren_trening) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 7 | [Slovarica](takprog-2022-23/01_KV1/7_razred/04_slovarica) | standard | 0.2 s | 64 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 7 | [Ć++](takprog-2022-23/01_KV1/7_razred/05_cpp) | standard | 0.5 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 7 | [Dopuna mejlova](takprog-2022-23/01_KV1/7_razred/06_dopuna_mejlova) | standard | 0.45 s | 64 MB | 11 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 8 | [Kuvar](takprog-2022-23/01_KV1/8_razred/01_kuvar) | standard | 0.15 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 8 | [Stubići od kockica](takprog-2022-23/01_KV1/8_razred/02_stubici_od_kockica) | standard | 0.15 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 8 | [Note](takprog-2022-23/01_KV1/8_razred/03_note) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 8 | [Datum sa najvećom zaradom](takprog-2022-23/01_KV1/8_razred/04_datum_sa_najvecom_zaradom) | standard | 0.2 s | 64 MB | 11 | default | `scoring.yaml` repeats group id 3, so Petlja scores tests 2–8 as two groups (30 and 40 points) that each need all seven (as at the contest) | — |
| 2022-23 | Kvalifikacije 1 | 8 | [Dopuna mejlova](takprog-2022-23/01_KV1/8_razred/05_dopuna_mejlova) | standard | 0.45 s | 64 MB | 11 | default | — | — |
| 2022-23 | Kvalifikacije 1 | 8 | [Zbirovi nakon podele](takprog-2022-23/01_KV1/8_razred/06_zbirovi_nakon_podele) | standard | 0.3 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 6 | [Šljive](takprog-2022-23/02_KV2/6_razred/01_sljive) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 6 | [Flaše](takprog-2022-23/02_KV2/6_razred/02_pakovanje_soka_u_flase) | standard | 0.1 s | 64 MB | 11 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 6 | [Katanac](takprog-2022-23/02_KV2/6_razred/03_katanac) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 6 | [Fudbalska grupa - tabela](takprog-2022-23/02_KV2/6_razred/04_fudbalska_grupa_tabela) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 6 | [Najviše odličnih](takprog-2022-23/02_KV2/6_razred/05_najvise_odlicnih) | standard | 1 s | 64 MB | 11 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 6 | [Doline](takprog-2022-23/02_KV2/6_razred/06_doline) | standard | 1 s | 64 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 7 | [Poslednji meč](takprog-2022-23/02_KV2/7_razred/01_poslednji_mec) | standard | 0.1 s | 64 MB | 33 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 7 | [Katanac](takprog-2022-23/02_KV2/7_razred/02_katanac) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 7 | [Raspon krila](takprog-2022-23/02_KV2/7_razred/03_raspon_krila) | standard | 0.1 s | 64 MB | 22 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 7 | [Mešalica](takprog-2022-23/02_KV2/7_razred/04_mesalica_3) | standard | 1 s | 64 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 7 | [Greška u tekstu](takprog-2022-23/02_KV2/7_razred/05_greska_u_tekstu) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 7 | [Broj trocifrenih parnih](takprog-2022-23/02_KV2/7_razred/06_broj_trocifrenih_parnih) | standard | 0.25 s | 64 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 8 | [Poslednji meč](takprog-2022-23/02_KV2/8_razred/01_poslednji_mec) | standard | 0.1 s | 64 MB | 33 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 8 | [Raspon krila](takprog-2022-23/02_KV2/8_razred/02_raspon_krila) | standard | 0.1 s | 64 MB | 22 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 8 | [Greška u tekstu](takprog-2022-23/02_KV2/8_razred/03_greska_u_tekstu) | standard | 0.1 s | 64 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 2 | 8 | [Puž](takprog-2022-23/02_KV2/8_razred/04_puz) | standard | 0.1 s | 64 MB | 14 | default | — | Inputs 3–8 end with a stray NUL character after the name, so the name is never found and the expected answer is −1; Petlja's tests were corrected the day after the contest, which wasn't graded again |
| 2022-23 | Kvalifikacije 2 | 8 | [Tačan izraz](takprog-2022-23/02_KV2/8_razred/05_tacan_izraz) | standard | 0.1 s | 64 MB | 14 | `checker.cpp` (custom) | — | — |
| 2022-23 | Kvalifikacije 2 | 8 | [Najmanji dobitak](takprog-2022-23/02_KV2/8_razred/06_najmanji_dobitak) | standard | 0.4 s | 64 MB | 20 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 6 | [AM/PM](takprog-2022-23/03_KV3/6_razred/01_am_pm) | standard | 0.1 s | 16 MB | 14 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 6 | [Iz bajke u basnu](takprog-2022-23/03_KV3/6_razred/02_iz_bajke_u_basnu) | standard | 0.2 s | 16 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 6 | [Rezultat u teniskom gemu](takprog-2022-23/03_KV3/6_razred/03_teniski_rezultat_gem) | standard | 0.1 s | 16 MB | 14 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 6 | [Vrhovi](takprog-2022-23/03_KV3/6_razred/04_vrhovi) | standard | 0.1 s | 16 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 6 | [Klase cifara](takprog-2022-23/03_KV3/6_razred/05_po_tri_cifre) | standard | 0.1 s | 16 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 6 | [Dijagonale](takprog-2022-23/03_KV3/6_razred/06_dijagonale) | standard | 0.2 s | 16 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 7 | [Dodavanje cifre stotina](takprog-2022-23/03_KV3/7_razred/01_dodata_cifra_stotina) | standard | 0.1 s | 16 MB | 13 | default | `scoring.yaml` repeats group id 4, so Petlja scores tests 4–13 as five 20-point groups that each need all ten (as at the contest; the ids were made distinct on Petlja afterwards) | — |
| 2022-23 | Kvalifikacije 3 | 7 | [Rezultat u teniskom gemu](takprog-2022-23/03_KV3/7_razred/02_teniski_rezultat_gem) | standard | 0.1 s | 16 MB | 14 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 7 | [Poslednja štanglica](takprog-2022-23/03_KV3/7_razred/03_poslednja_stanglica) | standard | 0.1 s | 16 MB | 24 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 7 | [Obrtanja](takprog-2022-23/03_KV3/7_razred/04_obrtanja) | standard | 0.2 s | 16 MB | 17 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 7 | [Seča drva](takprog-2022-23/03_KV3/7_razred/05_seca_drva) | standard | 1.7 s | 64 MB | 15 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 7 | [Što sličnija trojka](takprog-2022-23/03_KV3/7_razred/06_sto_slicnija_trojka) | standard | 0.5 s | 64 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 8 | [Ko prvi igra?](takprog-2022-23/03_KV3/8_razred/01_ko_prvi_igra) | standard | 0.1 s | 16 MB | 15 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 8 | [Poslednja štanglica](takprog-2022-23/03_KV3/8_razred/02_poslednja_stanglica) | standard | 0.1 s | 16 MB | 24 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 8 | [Kontrolna cifra](takprog-2022-23/03_KV3/8_razred/03_kontrolna_cifra) | standard | 0.1 s | 16 MB | 12 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 8 | [Obrtanja](takprog-2022-23/03_KV3/8_razred/04_obrtanja) | standard | 0.2 s | 16 MB | 17 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 8 | [Mešalica](takprog-2022-23/03_KV3/8_razred/05_mesalica) | standard | 1 s | 64 MB | 13 | default | — | — |
| 2022-23 | Kvalifikacije 3 | 8 | [Seča stabala](takprog-2022-23/03_KV3/8_razred/06_seca_stabala) | standard | 2 s | 64 MB | 22 | default | — | — |
| 2022-23 | Okružno | 6 | [Slobodna bacanja](takprog-2022-23/04_OKRUZNO/6_razred/01_slobodna_bacanja) | standard | 0.1 s | 16 MB | 11 | default | — | — |
| 2022-23 | Okružno | 6 | [Merenje sa tri tega](takprog-2022-23/04_OKRUZNO/6_razred/02_merenje_sa_tri_tega) | standard | 0.2 s | 64 MB | 22 | default | — | — |
| 2022-23 | Okružno | 6 | [Klub](takprog-2022-23/04_OKRUZNO/6_razred/03_klub) | standard | 0.2 s | 64 MB | 12 | default | — | — |
| 2022-23 | Okružno | 6 | [Serije vežbi](takprog-2022-23/04_OKRUZNO/6_razred/04_serije_vezbi) | standard | 0.1 s | 16 MB | 11 | default | — | — |
| 2022-23 | Okružno | 7 | [Milioner](takprog-2022-23/04_OKRUZNO/7_razred/01_milioner) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2022-23 | Okružno | 7 | [Dve slike na papiru](takprog-2022-23/04_OKRUZNO/7_razred/02_dve_slike_na_papiru) | standard | 0.1 s | 16 MB | 33 | default | — | — |
| 2022-23 | Okružno | 7 | [Proizvod bez trenutnog broja](takprog-2022-23/04_OKRUZNO/7_razred/03_proizvod_bez_trenutnog) | standard | 0.1 s | 16 MB | 12 | default | — | — |
| 2022-23 | Okružno | 7 | [K najbližih](takprog-2022-23/04_OKRUZNO/7_razred/04_k_najblizih) | standard | 0.5 s | 64 MB | 13 | default | — | — |
| 2022-23 | Okružno | 8 | [Useljenje](takprog-2022-23/04_OKRUZNO/8_razred/01_useljavanje) | standard | 0.5 s | 64 MB | 23 | default | — | — |
| 2022-23 | Okružno | 8 | [Gusari](takprog-2022-23/04_OKRUZNO/8_razred/02_gusari) | standard | 0.1 s | 64 MB | 12 | default | — | — |
| 2022-23 | Okružno | 8 | [Potez u tetrisu](takprog-2022-23/04_OKRUZNO/8_razred/03_potez_u_tetrisu) | standard | 0.2 s | 64 MB | 16 | default | — | — |
| 2022-23 | Okružno | 8 | [Što više sličnih elemenata niza](takprog-2022-23/04_OKRUZNO/8_razred/04_sto_vise_slicnih) | standard | 0.2 s | 16 MB | 12 | default | — | — |
| 2022-23 | Državno | 6 | [Parno-neparni niz](takprog-2022-23/05_DRZAVNO/6_razred/01_parno_neparni_1) | standard | 0.1 s | 16 MB | 53 | default | — | — |
| 2022-23 | Državno | 6 | [Odnos susednih](takprog-2022-23/05_DRZAVNO/6_razred/02_odnos_susednih) | standard | 0.1 s | 64 MB | 18 | default | — | — |

## Summary

**2025-26:** all 72 tasks (84 task folders in 18 grade competitions) have their statement, pictures, limits, scoring
and checker (two custom ones, the rest default). None has a known problem: the commission's main solutions pass every
test, and solutions submitted at each contest get the verdict the contest recorded on every test. The one exception is
test 1 of [Harshad brojevi 2](takprog-2025-26/06_DRZAVNO/7_razred/03_harshad_brojevi_2), a 0-point example: the
commission corrected it during the contest, but Petlja's grader kept the old one, which every submission failed.

**2024-25:** all 49 tasks (51 task folders in 10 competitions: both qualifying rounds in each grade, the selection for
infO(1)Cup and the three contests of the selection cycle) have their statement, pictures, limits, scoring and checker
(four custom ones, the rest default). Solutions submitted at each contest get the verdict the contest recorded on
every test, and the commission's main solution passes every test in the 44 tasks where the collection has a working
one (for the other five it is a placeholder or was written for an earlier version of the task). The one known problem
is [Presek intervala](takprog-2024-25/01_KV1/7_razred/03_presek_intervala) (grades 7 and 8): tests 2 and 12 go beyond
the statement's bound of 1000.

**2023-24:** all 74 tasks (80 task folders in 17 competitions: the qualifying, municipal, district and state rounds in
each grade, JSIO and Izborno) have their statement, pictures, limits, scoring and checker (two custom ones, the rest
default). Solutions submitted at each contest get the verdict the contest recorded on every test, and the commission's
main solution passes every test in the 71 tasks where the collection has a working one (in Promena škole it divides
integers, in Četiri delioca it solves only the smaller subtasks, and Mešalica is not in the collection). Several tasks
were corrected right after their contest and graded again; the archive has those sets. Three tasks have a known
problem, all in the statement or the scoring:
[Eksel](takprog-2023-24/01_KV1/8_razred/02_eksel)'s example 2 has a Cyrillic letter in its input,
[Aljmez](takprog-2023-24/02_KV2/8_razred/06_aljmez)'s statement promises other points than the scoring gives, and
[Nepoznat broj](takprog-2023-24/02_KV2/6_razred/02_nepoznati_broj)'s scoring repeats a group id.
