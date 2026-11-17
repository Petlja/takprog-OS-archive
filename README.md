# Takprog archive: primary school

The tasks of the Serbian primary-school programming competitions, seasons 2016-17 to
2025-26: 523 tasks from the qualifying rounds, Opštinsko, Okružno, Državno, SIO/JSIO and the selections for
international olympiads. Each task folder holds what you need to set the task again: the statement with examples,
the tests, the checker, the scoring and the limits. 

## Layout

`takprog-{season}/{round}/{grade}/{nn}_{task}/`, where `nn` is the task's place in that competition.


A task folder has:

| File | What |
|---|---|
| `statement.md` | The statement in Markdown, formulas in LaTeX between `$`. Its header gives `timelimit` (seconds) and `memlimit` (MB). In Cyrillic, except 2016-17's (Latin script) |
| `*.png`, `*.jpg` | Pictures the statement links |
| `testcases/` | `NN.in` and `NN.out` |
| `checker.cpp` | The task's checker, if it has its own (see [Checkers](#checkers)) |
| `scoring.yaml` | Points per test or subtask, and which results contestants saw during the contest (see [Scoring](#scoring)) |

Every task is standard: the program reads the test's input on stdin and writes its answer to stdout.

## Checkers

`default` in the table means that outputs are compared as tokens, ignoring whitespace, and accept a real number within
the precision the expected answer is written to.

A `checker.cpp` is called as `checker <contestant output> <expected output> <input>`. Exit code 0 means accepted,
anything else wrong.

## Scoring

`scoring.yaml` has a `type`:

- **`testcase`:** `score_total` points shared equally among the tests, except those in `score_overrides` (usually
  the statement's examples, worth 0). `public` lists the tests whose results contestants saw during the contest.
  Rounds without subtasks give one point per test, all public.
- **`subtask`:** each of the `groups` gives its `score` only when all its `testcases` pass. `public` lists group ids.

## Limits

- **Time:** CPU time on one test, not wall-clock time.
- **Memory:** peak memory on one test.


## Tasks

*Grade* is the competition the task was set in (6 = sixth grade and younger from 2022-23, 5–6 = one competition for
both, — = one competition for everyone). A task set in several grades has a row for each, under the name that
grade's competition gave it.

| Season | Round | Grade | Task | Time | Memory | Tests | Checker |
|---|---|---|---|---|---|---|---|
| 2025-26 | Kvalifikacije 1 | 6 | [Godine](takprog-2025-26/01_KV1/6_razred/01_godine) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 1 | 6 | [Čokolada](takprog-2025-26/01_KV1/6_razred/02_cokolada) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 1 | 6 | [Jmbg](takprog-2025-26/01_KV1/6_razred/03_jmbg) | 0.1 s | 64 MB | 14 | default |
| 2025-26 | Kvalifikacije 1 | 6 | [Najubedljivija pobeda](takprog-2025-26/01_KV1/6_razred/04_najubedljivija_pobeda) | 0.2 s | 64 MB | 11 | default |
| 2025-26 | Kvalifikacije 1 | 6 | [Kombinacija zadataka](takprog-2025-26/01_KV1/6_razred/05_kombinacija_zadataka) | 0.2 s | 64 MB | 11 | custom |
| 2025-26 | Kvalifikacije 1 | 6 | [Broj segmenata parnog zbira](takprog-2025-26/01_KV1/6_razred/06_broj_segmenata_parnog_zbira) | 0.2 s | 64 MB | 11 | default |
| 2025-26 | Kvalifikacije 1 | 7 | [Čokolada](takprog-2025-26/01_KV1/7_razred/01_cokolada) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 1 | 7 | [Kontrolna cifra](takprog-2025-26/01_KV1/7_razred/02_kontrolna_cifra) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 1 | 7 | [Najubedljivija pobeda](takprog-2025-26/01_KV1/7_razred/03_najubedljivija_pobeda) | 0.2 s | 64 MB | 11 | default |
| 2025-26 | Kvalifikacije 1 | 7 | [Jedinične kolone](takprog-2025-26/01_KV1/7_razred/04_jedinicne_kolone) | 0.1 s | 64 MB | 11 | default |
| 2025-26 | Kvalifikacije 1 | 7 | [Broj segmenata parnog zbira](takprog-2025-26/01_KV1/7_razred/05_broj_segmenata_parnog_zbira) | 0.2 s | 64 MB | 11 | default |
| 2025-26 | Kvalifikacije 1 | 7 | [Postojanje trougla](takprog-2025-26/01_KV1/7_razred/06_postojanje_trougla) | 0.2 s | 64 MB | 13 | default |
| 2025-26 | Kvalifikacije 1 | 8 | [Autoprevoznik](takprog-2025-26/01_KV1/8_razred/01_autoprevoznik) | 0.1 s | 64 MB | 13 | default |
| 2025-26 | Kvalifikacije 1 | 8 | [Termometar](takprog-2025-26/01_KV1/8_razred/02_termometar) | 0.1 s | 64 MB | 13 | default |
| 2025-26 | Kvalifikacije 1 | 8 | [Najubedljivija pobeda](takprog-2025-26/01_KV1/8_razred/03_najubedljivija_pobeda) | 0.2 s | 64 MB | 11 | default |
| 2025-26 | Kvalifikacije 1 | 8 | [Jedinične kolone](takprog-2025-26/01_KV1/8_razred/04_jedinicne_kolone) | 0.1 s | 64 MB | 11 | default |
| 2025-26 | Kvalifikacije 1 | 8 | [Jednačina](takprog-2025-26/01_KV1/8_razred/05_jednacina) | 0.5 s | 64 MB | 11 | default |
| 2025-26 | Kvalifikacije 1 | 8 | [Najveća kombinacija](takprog-2025-26/01_KV1/8_razred/06_najveca_kombinacija) | 1 s | 256 MB | 17 | default |
| 2025-26 | Kvalifikacije 2 | 6 | [Gringots](takprog-2025-26/02_KV2/6_razred/01_gringots) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 2 | 6 | [Putovanje](takprog-2025-26/02_KV2/6_razred/02_putovanje) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 2 | 6 | [Približan račun](takprog-2025-26/02_KV2/6_razred/03_priblizan_racun) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 2 | 6 | [Dobri parovi](takprog-2025-26/02_KV2/6_razred/04_dobri_parovi) | 0.5 s | 64 MB | 11 | custom |
| 2025-26 | Kvalifikacije 2 | 6 | [Cenzura](takprog-2025-26/02_KV2/6_razred/05_cenzura) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 2 | 6 | [Širenje tajne](takprog-2025-26/02_KV2/6_razred/06_sirenje_tajne) | 2 s | 64 MB | 16 | default |
| 2025-26 | Kvalifikacije 2 | 7 | [Hari Poter](takprog-2025-26/02_KV2/7_razred/01_hari_poter) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 2 | 7 | [Putovanje](takprog-2025-26/02_KV2/7_razred/02_putovanje) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 2 | 7 | [Dobri parovi](takprog-2025-26/02_KV2/7_razred/03_dobri_parovi) | 0.5 s | 64 MB | 11 | custom |
| 2025-26 | Kvalifikacije 2 | 7 | [Kvazinaučnik](takprog-2025-26/02_KV2/7_razred/04_kvazinaucnik) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 2 | 7 | [Da li postoji pravougaonik](takprog-2025-26/02_KV2/7_razred/05_da_li_postoji_pravougaonik) | 1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 2 | 7 | [Suma svih podnizova](takprog-2025-26/02_KV2/7_razred/06_suma_svih_podnizova) | 0.5 s | 64 MB | 11 | default |
| 2025-26 | Kvalifikacije 2 | 8 | [Slagalica](takprog-2025-26/02_KV2/8_razred/01_svirka) | 0.1 s | 64 MB | 13 | default |
| 2025-26 | Kvalifikacije 2 | 8 | [Gumene bombone](takprog-2025-26/02_KV2/8_razred/02_gumene_bombone) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 2 | 8 | [Dobri parovi](takprog-2025-26/02_KV2/8_razred/03_dobri_parovi) | 0.5 s | 64 MB | 11 | custom |
| 2025-26 | Kvalifikacije 2 | 8 | [Advokatica](takprog-2025-26/02_KV2/8_razred/04_advokatica) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Kvalifikacije 2 | 8 | [Suma svih podnizova](takprog-2025-26/02_KV2/8_razred/05_suma_svih_podnizova) | 0.5 s | 64 MB | 11 | default |
| 2025-26 | Kvalifikacije 2 | 8 | [Slatki podnizovi](takprog-2025-26/02_KV2/8_razred/06_slatki_podnizovi) | 1 s | 64 MB | 23 | default |
| 2025-26 | Kvalifikaciono (infO(1)Cup, IATI) | — | [Proizvod](takprog-2025-26/03_INFOCUPIZB/01_proizvod) | 1 s | 64 MB | 13 | default |
| 2025-26 | Kvalifikaciono (infO(1)Cup, IATI) | — | [Snežina strategija](takprog-2025-26/03_INFOCUPIZB/02_snezina_strategija) | 1 s | 64 MB | 26 | default |
| 2025-26 | Kvalifikaciono (infO(1)Cup, IATI) | — | [Domine](takprog-2025-26/03_INFOCUPIZB/03_domine) | 1 s | 64 MB | 21 | default |
| 2025-26 | Kvalifikaciono (infO(1)Cup, IATI) | — | [Snežno stablo](takprog-2025-26/03_INFOCUPIZB/04_snezno_stablo) | 1 s | 64 MB | 52 | default |
| 2025-26 | Opštinsko | 6 | [Budžet za letovanje](takprog-2025-26/04_OPSTINSKO/6_razred/01_budzet_za_letovanje) | 0.1 s | 64 MB | 11 | default |
| 2025-26 | Opštinsko | 6 | [Uporediti cifre](takprog-2025-26/04_OPSTINSKO/6_razred/02_uporediti_cifre) | 0.1 s | 64 MB | 13 | default |
| 2025-26 | Opštinsko | 6 | [Deljivost sa 3 7 21](takprog-2025-26/04_OPSTINSKO/6_razred/03_deljivost_sa_3_7_21) | 0.1 s | 64 MB | 16 | default |
| 2025-26 | Opštinsko | 6 | [Raspoređivanje slika](takprog-2025-26/04_OPSTINSKO/6_razred/04_rasporedjivanje_slika) | 0.1 s | 64 MB | 13 | default |
| 2025-26 | Opštinsko | 7 | [Sveska](takprog-2025-26/04_OPSTINSKO/7_razred/01_sveska) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Opštinsko | 7 | [Verzije softvera](takprog-2025-26/04_OPSTINSKO/7_razred/02_verzije_softvera) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Opštinsko | 7 | [Žućkov rejon](takprog-2025-26/04_OPSTINSKO/7_razred/03_zuckov_rejon) | 0.1 s | 64 MB | 11 | default |
| 2025-26 | Opštinsko | 7 | [Jelka](takprog-2025-26/04_OPSTINSKO/7_razred/04_jelka) | 0.1 s | 64 MB | 11 | default |
| 2025-26 | Opštinsko | 8 | [Pitagorina trojka](takprog-2025-26/04_OPSTINSKO/8_razred/01_pitagorina_trojka) | 0.1 s | 64 MB | 20 | default |
| 2025-26 | Opštinsko | 8 | [Učešće](takprog-2025-26/04_OPSTINSKO/8_razred/02_ucesce) | 0.1 s | 64 MB | 13 | default |
| 2025-26 | Opštinsko | 8 | [Baunding boks](takprog-2025-26/04_OPSTINSKO/8_razred/03_bounding_box) | 0.1 s | 64 MB | 11 | default |
| 2025-26 | Opštinsko | 8 | [Različite majice](takprog-2025-26/04_OPSTINSKO/8_razred/04_razlicite_majice) | 0.1 s | 64 MB | 11 | default |
| 2025-26 | Okružno | 6 | [Nz](takprog-2025-26/05_OKRUZNO/6_razred/01_nz) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Okružno | 6 | [Drugarice](takprog-2025-26/05_OKRUZNO/6_razred/02_drugarice) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Okružno | 6 | [Pikado](takprog-2025-26/05_OKRUZNO/6_razred/03_pikado) | 0.2 s | 64 MB | 12 | default |
| 2025-26 | Okružno | 6 | [Ski staza](takprog-2025-26/05_OKRUZNO/6_razred/04_ski_staza) | 0.2 s | 64 MB | 14 | default |
| 2025-26 | Okružno | 7 | [Drugarice](takprog-2025-26/05_OKRUZNO/7_razred/01_drugarice) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Okružno | 7 | [Pikado](takprog-2025-26/05_OKRUZNO/7_razred/02_pikado) | 0.2 s | 64 MB | 12 | default |
| 2025-26 | Okružno | 7 | [Sedlasti element](takprog-2025-26/05_OKRUZNO/7_razred/03_sedlasti_element) | 2.5 s | 64 MB | 7 | default |
| 2025-26 | Okružno | 7 | [Navodnjavanje](takprog-2025-26/05_OKRUZNO/7_razred/04_navodnjavanje) | 0.4 s | 64 MB | 21 | default |
| 2025-26 | Okružno | 8 | [Zaboravna plesačica](takprog-2025-26/05_OKRUZNO/8_razred/01_zaboravna_plesacica) | 0.1 s | 64 MB | 11 | default |
| 2025-26 | Okružno | 8 | [Veći od svih parnih](takprog-2025-26/05_OKRUZNO/8_razred/02_veci_od_svih_parnih) | 0.2 s | 256 MB | 12 | default |
| 2025-26 | Okružno | 8 | [Sedlasti element](takprog-2025-26/05_OKRUZNO/8_razred/03_sedlasti_element) | 2.5 s | 64 MB | 7 | default |
| 2025-26 | Okružno | 8 | [Bridž](takprog-2025-26/05_OKRUZNO/8_razred/04_bridz) | 1 s | 64 MB | 11 | default |
| 2025-26 | Državno | 6 | [Bioskop](takprog-2025-26/06_DRZAVNO/6_razred/01_bioskop) | 0.1 s | 64 MB | 12 | default |
| 2025-26 | Državno | 6 | [Plasman na JSIO](takprog-2025-26/06_DRZAVNO/6_razred/02_plasman_na_jsio) | 1 s | 64 MB | 11 | default |
| 2025-26 | Državno | 6 | [Baka i ćufte](takprog-2025-26/06_DRZAVNO/6_razred/03_baka_i_cufte) | 1.5 s | 64 MB | 13 | default |
| 2025-26 | Državno | 6 | [Dva niza](takprog-2025-26/06_DRZAVNO/6_razred/04_dva_niza) | 1 s | 64 MB | 14 | default |
| 2025-26 | Državno | 7 | [Medalje](takprog-2025-26/06_DRZAVNO/7_razred/01_medalje) | 1 s | 64 MB | 11 | default |
| 2025-26 | Državno | 7 | [Linije u matrici](takprog-2025-26/06_DRZAVNO/7_razred/02_linije_u_matrici) | 1 s | 64 MB | 21 | default |
| 2025-26 | Državno | 7 | [Harshad brojevi 2](takprog-2025-26/06_DRZAVNO/7_razred/03_harshad_brojevi_2) | 1.5 s | 256 MB | 17 | default |
| 2025-26 | Državno | 7 | [Igra na nizu](takprog-2025-26/06_DRZAVNO/7_razred/04_igra_na_nizu) | 2.5 s | 64 MB | 22 | default |
| 2025-26 | Državno | 8 | [Kružni Menhetn](takprog-2025-26/06_DRZAVNO/8_razred/01_kruzni_menhetn) | 0.1 s | 64 MB | 28 | default |
| 2025-26 | Državno | 8 | [Novi Menhetn](takprog-2025-26/06_DRZAVNO/8_razred/02_novi_menhetn) | 1 s | 64 MB | 11 | default |
| 2025-26 | Državno | 8 | [Autobusi](takprog-2025-26/06_DRZAVNO/8_razred/03_autobusi) | 2.5 s | 64 MB | 36 | default |
| 2025-26 | Državno | 8 | [Premijum slike](takprog-2025-26/06_DRZAVNO/8_razred/04_premijum_slike) | 3 s | 64 MB | 36 | default |
| 2025-26 | JSIO | — | [Kvadrati](takprog-2025-26/07_JSIO/01_kvadrati) | 2 s | 256 MB | 24 | default |
| 2025-26 | JSIO | — | [Dve vrednosti](takprog-2025-26/07_JSIO/02_dve_vrednosti) | 0.5 s | 256 MB | 37 | default |
| 2025-26 | JSIO | — | [Profitabilni skokovi](takprog-2025-26/07_JSIO/03_profitabilni_skokovi) | 1.5 s | 256 MB | 31 | default |
| 2025-26 | JSIO | — | [Kaladont](takprog-2025-26/07_JSIO/04_kaladont) | 1 s | 256 MB | 99 | default |
| 2025-26 | Izborno | — | [Lampice](takprog-2025-26/08_IZBORNO/01_lampice) | 1 s | 256 MB | 29 | default |
| 2025-26 | Izborno | — | [Grane uzastopnih](takprog-2025-26/08_IZBORNO/02_grane_uzastopnih) | 1 s | 256 MB | 84 | default |
| 2025-26 | Izborno | — | [Fabrika](takprog-2025-26/08_IZBORNO/03_fabrika) | 1 s | 256 MB | 60 | default |
| 2025-26 | Izborno | — | [Najduži testerasti podnizovi](takprog-2025-26/08_IZBORNO/04_najduzi_testerasti_podnizovi) | 1 s | 256 MB | 87 | default |
| 2024-25 | Kvalifikacije 1 | 6 | [Srednja brzina](takprog-2024-25/01_KV1/6_razred/01_srednja_brzina) | 0.1 s | 64 MB | 12 | custom |
| 2024-25 | Kvalifikacije 1 | 6 | [Atletičari](takprog-2024-25/01_KV1/6_razred/02_atleticari) | 0.1 s | 64 MB | 13 | default |
| 2024-25 | Kvalifikacije 1 | 6 | [Gps](takprog-2024-25/01_KV1/6_razred/03_gps) | 0.2 s | 64 MB | 11 | default |
| 2024-25 | Kvalifikacije 1 | 6 | [Najuspešnija partija](takprog-2024-25/01_KV1/6_razred/04_najuspesnija_partija) | 0.2 s | 64 MB | 11 | default |
| 2024-25 | Kvalifikacije 1 | 6 | [Imena prezimena](takprog-2024-25/01_KV1/6_razred/05_imena_prezimena) | 0.2 s | 64 MB | 12 | custom |
| 2024-25 | Kvalifikacije 1 | 6 | [Kupovina skija](takprog-2024-25/01_KV1/6_razred/06_kupovina_skija) | 0.15 s | 64 MB | 12 | default |
| 2024-25 | Kvalifikacije 1 | 7 | [Taksi promo-kôd](takprog-2024-25/01_KV1/7_razred/01_taksi_promo_kod) | 0.1 s | 64 MB | 5 | default |
| 2024-25 | Kvalifikacije 1 | 7 | [Broj suglasnika](takprog-2024-25/01_KV1/7_razred/02_broj_suglasnika) | 0.1 s | 64 MB | 12 | default |
| 2024-25 | Kvalifikacije 1 | 7 | [Presek intervala](takprog-2024-25/01_KV1/7_razred/03_presek_intervala) | 0.1 s | 64 MB | 13 | default |
| 2024-25 | Kvalifikacije 1 | 7 | [Programski jezici](takprog-2024-25/01_KV1/7_razred/04_programski_jezici) | 0.5 s | 64 MB | 11 | default |
| 2024-25 | Kvalifikacije 1 | 7 | [Najduži podniz sa 3 parna broja](takprog-2024-25/01_KV1/7_razred/05_najduzi_podniz_max_3_parna) | 0.75 s | 64 MB | 53 | default |
| 2024-25 | Kvalifikacije 1 | 7 | [Naelektrisanje](takprog-2024-25/01_KV1/7_razred/06_naelektrisanje) | 0.3 s | 64 MB | 12 | default |
| 2024-25 | Kvalifikacije 1 | 8 | [PIN aplikacije od PIN-a telefona](takprog-2024-25/01_KV1/8_razred/01_pin_aplikacije_od_pina_telefona) | 0.1 s | 64 MB | 12 | default |
| 2024-25 | Kvalifikacije 1 | 8 | [Presek intervala](takprog-2024-25/01_KV1/8_razred/02_presek_intervala) | 0.1 s | 64 MB | 13 | default |
| 2024-25 | Kvalifikacije 1 | 8 | [Broj jakih lozinki](takprog-2024-25/01_KV1/8_razred/03_broj_jakih_lozinki) | 0.1 s | 64 MB | 11 | default |
| 2024-25 | Kvalifikacije 1 | 8 | [Čudna osmosmerka](takprog-2024-25/01_KV1/8_razred/04_cudna_osmosmerka) | 0.1 s | 64 MB | 12 | default |
| 2024-25 | Kvalifikacije 1 | 8 | [Najduži podniz sa 3 parna broja](takprog-2024-25/01_KV1/8_razred/05_najduzi_podniz_max_3_parna) | 0.75 s | 64 MB | 53 | default |
| 2024-25 | Kvalifikacije 1 | 8 | [Astronom](takprog-2024-25/01_KV1/8_razred/06_astronom) | 2.5 s | 64 MB | 17 | default |
| 2024-25 | Kvalifikacije 2 | 6 | [Kupovina pribora](takprog-2024-25/02_KV2/6_razred/01_kupovina_pribora) | 1 s | 64 MB | 12 | default |
| 2024-25 | Kvalifikacije 2 | 6 | [Pomeranje časovnika](takprog-2024-25/02_KV2/6_razred/02_pomeranje_casovnika) | 0.1 s | 64 MB | 12 | default |
| 2024-25 | Kvalifikacije 2 | 6 | [Tri na tri](takprog-2024-25/02_KV2/6_razred/03_tri_na_tri) | 1 s | 64 MB | 23 | default |
| 2024-25 | Kvalifikacije 2 | 6 | [Rođendanski poklon](takprog-2024-25/02_KV2/6_razred/04_rodjendanski_poklon) | 0.5 s | 64 MB | 11 | default |
| 2024-25 | Kvalifikacije 2 | 6 | [Učešljavanje automobila](takprog-2024-25/02_KV2/6_razred/05_ucesljavanje_automobila) | 0.2 s | 64 MB | 12 | default |
| 2024-25 | Kvalifikacije 2 | 6 | [Plasman](takprog-2024-25/02_KV2/6_razred/06_plasman) | 1 s | 64 MB | 11 | custom |
| 2024-25 | Kvalifikacije 2 | 7 | [Potreban broj petica](takprog-2024-25/02_KV2/7_razred/01_potreban_broj_petica) | 1 s | 64 MB | 13 | default |
| 2024-25 | Kvalifikacije 2 | 7 | [Ziplajn](takprog-2024-25/02_KV2/7_razred/02_zipline) | 0.2 s | 64 MB | 17 | default |
| 2024-25 | Kvalifikacije 2 | 7 | [Rođendanski poklon](takprog-2024-25/02_KV2/7_razred/03_rodjendanski_poklon) | 0.5 s | 64 MB | 11 | default |
| 2024-25 | Kvalifikacije 2 | 7 | [Plasman](takprog-2024-25/02_KV2/7_razred/04_plasman) | 1 s | 64 MB | 11 | custom |
| 2024-25 | Kvalifikacije 2 | 7 | [Harshad brojevi 3](takprog-2024-25/02_KV2/7_razred/05_harshad_brojevi_3) | 1 s | 64 MB | 11 | default |
| 2024-25 | Kvalifikacije 2 | 7 | [Pakovanje kutija](takprog-2024-25/02_KV2/7_razred/06_pakovanje_kutija) | 1 s | 256 MB | 23 | default |
| 2024-25 | Kvalifikacije 2 | 8 | [Skočko broj](takprog-2024-25/02_KV2/8_razred/01_skocko_broj) | 0.1 s | 64 MB | 26 | default |
| 2024-25 | Kvalifikacije 2 | 8 | [Robot](takprog-2024-25/02_KV2/8_razred/02_robot) | 0.2 s | 64 MB | 22 | default |
| 2024-25 | Kvalifikacije 2 | 8 | [Učešljavanje automobila](takprog-2024-25/02_KV2/8_razred/03_ucesljavanje_automobila) | 0.1 s | 64 MB | 12 | default |
| 2024-25 | Kvalifikacije 2 | 8 | [Avionske karte](takprog-2024-25/02_KV2/8_razred/04_avionske_karte) | 0.5 s | 64 MB | 12 | default |
| 2024-25 | Kvalifikacije 2 | 8 | [Palindromski upiti](takprog-2024-25/02_KV2/8_razred/05_palindromski_upiti) | 0.5 s | 64 MB | 11 | default |
| 2024-25 | Kvalifikacije 2 | 8 | [Pakovanje kutija](takprog-2024-25/02_KV2/8_razred/06_pakovanje_kutija) | 1 s | 256 MB | 23 | default |
| 2024-25 | Izborno (infO(1)Cup) | — | [Operacija](takprog-2024-25/03_INFOCUPIZB/01_operacija) | 0.5 s | 64 MB | 41 | default |
| 2024-25 | Izborno (infO(1)Cup) | — | [Ciglice](takprog-2024-25/03_INFOCUPIZB/02_ciglice) | 2.5 s | 64 MB | 41 | default |
| 2024-25 | Izborno (infO(1)Cup) | — | [Vodoinstalater](takprog-2024-25/03_INFOCUPIZB/03_vodoinstalater) | 3 s | 256 MB | 38 | default |
| 2024-25 | Izborno (infO(1)Cup) | — | [Sabiranje, NZD i XOR](takprog-2024-25/03_INFOCUPIZB/04_sabiranje_nzd_i_xor) | 0.5 s | 256 MB | 85 | default |
| 2024-25 | Izborno (infO(1)Cup) | — | [Upiti nad stablom](takprog-2024-25/03_INFOCUPIZB/05_upiti_nad_stablom) | 4 s | 512 MB | 57 | default |
| 2024-25 | Izborni ciklus, 1. nivo | — | [Ograda](takprog-2024-25/04_PRVI_KRUG_IZBORNOG/01_ograda) | 1 s | 64 MB | 22 | default |
| 2024-25 | Izborni ciklus, 1. nivo | — | [Banane](takprog-2024-25/04_PRVI_KRUG_IZBORNOG/02_banane) | 0.5 s | 64 MB | 12 | default |
| 2024-25 | Izborni ciklus, 1. nivo | — | [Raspored kuća](takprog-2024-25/04_PRVI_KRUG_IZBORNOG/03_raspored_kuca) | 1 s | 64 MB | 16 | default |
| 2024-25 | Izborni ciklus, 1. nivo | — | [Kutije i žice](takprog-2024-25/04_PRVI_KRUG_IZBORNOG/04_kutije_i_zice) | 1 s | 256 MB | 22 | default |
| 2024-25 | Izborni ciklus, 2. nivo, 1. dan | — | [Maksimalna suma ograničenog podniza](takprog-2024-25/05_PRVI_DAN_IZB/01_maksimalna_suma_ogranicenog_podniza) | 0.5 s | 256 MB | 18 | default |
| 2024-25 | Izborni ciklus, 2. nivo, 1. dan | — | [Grafovski savez](takprog-2024-25/05_PRVI_DAN_IZB/02_grafovski_savez) | 2 s | 256 MB | 31 | default |
| 2024-25 | Izborni ciklus, 2. nivo, 1. dan | — | [Do nule](takprog-2024-25/05_PRVI_DAN_IZB/03_do_nule) | 1 s | 256 MB | 26 | default |
| 2024-25 | Izborni ciklus, 2. nivo, 2. dan | — | [Saberi pomnoži](takprog-2024-25/06_DRUGI_DAN_IZB/01_saberi_pomnozi) | 1.5 s | 256 MB | 44 | default |
| 2024-25 | Izborni ciklus, 2. nivo, 2. dan | — | [Majstor Bob](takprog-2024-25/06_DRUGI_DAN_IZB/02_majstor_bob) | 1 s | 256 MB | 27 | default |
| 2024-25 | Izborni ciklus, 2. nivo, 2. dan | — | [Svi prosti](takprog-2024-25/06_DRUGI_DAN_IZB/03_svi_prosti) | 1 s | 256 MB | 21 | default |
| 2023-24 | Kvalifikacije 1 | 6 | [Preklapanje cifara](takprog-2023-24/01_KV1/6_razred/01_cifre_se_preklapaju) | 0.1 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 1 | 6 | [Najveća prednost domaćih](takprog-2023-24/01_KV1/6_razred/02_najveca_prednost_domacih) | 0.2 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 1 | 6 | [Promena škole](takprog-2023-24/01_KV1/6_razred/03_promena_skole) | 0.2 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 1 | 6 | [Nabrajanje](takprog-2023-24/01_KV1/6_razred/04_nabrajanje) | 0.2 s | 64 MB | 13 | default |
| 2023-24 | Kvalifikacije 1 | 6 | [Top](takprog-2023-24/01_KV1/6_razred/05_top) | 1 s | 64 MB | 11 | default |
| 2023-24 | Kvalifikacije 1 | 6 | [Mica štucalica](takprog-2023-24/01_KV1/6_razred/06_mica_stucalica) | 0.2 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 1 | 7 | [Pogrešna operacija](takprog-2023-24/01_KV1/7_razred/01_pogresna_operacija) | 0.2 s | 64 MB | 11 | default |
| 2023-24 | Kvalifikacije 1 | 7 | [Razvrstavanje](takprog-2023-24/01_KV1/7_razred/02_razvrstavanje) | 0.1 s | 64 MB | 11 | default |
| 2023-24 | Kvalifikacije 1 | 7 | [Promena škole](takprog-2023-24/01_KV1/7_razred/03_promena_skole) | 0.2 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 1 | 7 | [Najdalji najbliži](takprog-2023-24/01_KV1/7_razred/04_najdalji_najblizi) | 0.2 s | 64 MB | 17 | default |
| 2023-24 | Kvalifikacije 1 | 7 | [WiFi snaga](takprog-2023-24/01_KV1/7_razred/05_wifi_snaga) | 0.15 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 1 | 7 | [Najveći NZD](takprog-2023-24/01_KV1/7_razred/06_max_nzd) | 0.25 s | 64 MB | 14 | default |
| 2023-24 | Kvalifikacije 1 | 8 | [Nedostajuća stranica četvorougla](takprog-2023-24/01_KV1/8_razred/01_nedostajuca_stranica_cetvorougla) | 0.2 s | 64 MB | 13 | default |
| 2023-24 | Kvalifikacije 1 | 8 | [Eksel](takprog-2023-24/01_KV1/8_razred/02_eksel) | 0.1 s | 64 MB | 13 | default |
| 2023-24 | Kvalifikacije 1 | 8 | [Krađa dijamanta](takprog-2023-24/01_KV1/8_razred/03_kradja_dijamanta) | 1 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 1 | 8 | [Broj segmenata sa proizvodom nula](takprog-2023-24/01_KV1/8_razred/04_broj_segmenata_sa_proizvodom_nula) | 0.2 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 1 | 8 | [WiFi snaga](takprog-2023-24/01_KV1/8_razred/05_wifi_snaga) | 0.15 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 1 | 8 | [Jedan-dva-tri-četiri](takprog-2023-24/01_KV1/8_razred/06_jedan_dva_tri_cetiri) | 0.2 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 2 | 6 | [Zakucavanje](takprog-2023-24/02_KV2/6_razred/01_zakucavanje) | 0.2 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 2 | 6 | [Nepoznat broj](takprog-2023-24/02_KV2/6_razred/02_nepoznati_broj) | 0.1 s | 16 MB | 23 | default |
| 2023-24 | Kvalifikacije 2 | 6 | [Ski karta](takprog-2023-24/02_KV2/6_razred/03_ski_pas) | 0.1 s | 64 MB | 15 | default |
| 2023-24 | Kvalifikacije 2 | 6 | [Gorivo](takprog-2023-24/02_KV2/6_razred/04_gorivo) | 0.099 s | 64 MB | 13 | default |
| 2023-24 | Kvalifikacije 2 | 6 | [Prva i poslednja cifra](takprog-2023-24/02_KV2/6_razred/05_prva_i_poslednja_cifra) | 0.1 s | 16 MB | 12 | default |
| 2023-24 | Kvalifikacije 2 | 6 | [Najgušći podskup](takprog-2023-24/02_KV2/6_razred/06_najgusci_podskup) | 0.5 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 2 | 7 | [Mesec rođenja](takprog-2023-24/02_KV2/7_razred/01_mesec_rodjenja) | 0.2 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 2 | 7 | [Vrabac i mačka](takprog-2023-24/02_KV2/7_razred/02_vrabac_i_macka) | 0.2 s | 64 MB | 14 | default |
| 2023-24 | Kvalifikacije 2 | 7 | [Neravnoteža](takprog-2023-24/02_KV2/7_razred/03_neravnoteza) | 0.2 s | 64 MB | 17 | default |
| 2023-24 | Kvalifikacije 2 | 7 | [Dorćol open](takprog-2023-24/02_KV2/7_razred/04_dorcol_open) | 1.3 s | 64 MB | 12 | custom |
| 2023-24 | Kvalifikacije 2 | 7 | [Neparni delioci](takprog-2023-24/02_KV2/7_razred/05_neparni_delioci) | 0.25 s | 64 MB | 14 | default |
| 2023-24 | Kvalifikacije 2 | 7 | [Šibice](takprog-2023-24/02_KV2/7_razred/06_sibice) | 0.25 s | 16 MB | 23 | default |
| 2023-24 | Kvalifikacije 2 | 8 | [Bioskop](takprog-2023-24/02_KV2/8_razred/01_bioskop) | 0.1 s | 64 MB | 11 | default |
| 2023-24 | Kvalifikacije 2 | 8 | [Neravnoteža](takprog-2023-24/02_KV2/8_razred/02_neravnoteza) | 0.2 s | 64 MB | 17 | default |
| 2023-24 | Kvalifikacije 2 | 8 | [Najbrže do cilja](takprog-2023-24/02_KV2/8_razred/03_najbrze_do_cilja) | 0.2 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 2 | 8 | [Neparni delioci](takprog-2023-24/02_KV2/8_razred/04_neparni_delioci) | 0.25 s | 64 MB | 14 | default |
| 2023-24 | Kvalifikacije 2 | 8 | [Najmanje promena](takprog-2023-24/02_KV2/8_razred/05_najmanje_promena) | 1 s | 64 MB | 12 | default |
| 2023-24 | Kvalifikacije 2 | 8 | [Aljmez](takprog-2023-24/02_KV2/8_razred/06_aljmez) | 1 s | 64 MB | 11 | custom |
| 2023-24 | Opštinsko | 6 | [Dani u nedelji](takprog-2023-24/03_OPSTINSKO/6_razred/01_dani_u_nedelji) | 0.1 s | 64 MB | 12 | default |
| 2023-24 | Opštinsko | 6 | [Toplotni pojas](takprog-2023-24/03_OPSTINSKO/6_razred/02_toplotni_pojas) | 0.1 s | 16 MB | 13 | default |
| 2023-24 | Opštinsko | 6 | [Dostavljač](takprog-2023-24/03_OPSTINSKO/6_razred/03_dostavljac) | 0.1 s | 64 MB | 12 | default |
| 2023-24 | Opštinsko | 6 | [Minimaks](takprog-2023-24/03_OPSTINSKO/6_razred/04_minimax) | 0.1 s | 64 MB | 13 | default |
| 2023-24 | Opštinsko | 7 | [Obim paralelograma](takprog-2023-24/03_OPSTINSKO/7_razred/01_obim_paralelograma) | 0.1 s | 16 MB | 12 | default |
| 2023-24 | Opštinsko | 7 | [Adrese i blokovi](takprog-2023-24/03_OPSTINSKO/7_razred/02_adrese) | 0.1 s | 64 MB | 18 | default |
| 2023-24 | Opštinsko | 7 | [Slepo kucanje - reči](takprog-2023-24/03_OPSTINSKO/7_razred/03_slepo_kucanje_reci) | 0.1 s | 16 MB | 12 | default |
| 2023-24 | Opštinsko | 7 | [Odbojkaški rezultat](takprog-2023-24/03_OPSTINSKO/7_razred/04_odbojkaski_rezultat) | 0.1 s | 64 MB | 17 | default |
| 2023-24 | Opštinsko | 8 | [Bejzbol](takprog-2023-24/03_OPSTINSKO/8_razred/01_bejzbol_hitac) | 0.1 s | 16 MB | 12 | default |
| 2023-24 | Opštinsko | 8 | [Godišnje doba](takprog-2023-24/03_OPSTINSKO/8_razred/02_godisnje_doba) | 0.1 s | 16 MB | 32 | default |
| 2023-24 | Opštinsko | 8 | [Odbojkaški rezultat](takprog-2023-24/03_OPSTINSKO/8_razred/03_odbojkaski_rezultat) | 0.1 s | 64 MB | 17 | default |
| 2023-24 | Opštinsko | 8 | [Par-nepar u krug](takprog-2023-24/03_OPSTINSKO/8_razred/04_parnepar_u_krug) | 0.5 s | 16 MB | 12 | default |
| 2023-24 | Okružno | 6 | [Obim ili površina](takprog-2023-24/04_OKRUZNO/6_razred/01_obim_ili_povrsina) | 0.1 s | 16 MB | 12 | default |
| 2023-24 | Okružno | 6 | [Zajednička drugarica](takprog-2023-24/04_OKRUZNO/6_razred/02_zajednicka_drugarica) | 0.15 s | 64 MB | 13 | default |
| 2023-24 | Okružno | 6 | [Popravka stepeništa](takprog-2023-24/04_OKRUZNO/6_razred/03_popravka_stepenista) | 0.15 s | 64 MB | 12 | default |
| 2023-24 | Okružno | 6 | [Zameni najveću cifru](takprog-2023-24/04_OKRUZNO/6_razred/04_zameni_najvecu_cifru) | 0.1 s | 64 MB | 11 | default |
| 2023-24 | Okružno | 7 | [Čudno putovanje](takprog-2023-24/04_OKRUZNO/7_razred/01_putovanje) | 0.1 s | 64 MB | 13 | default |
| 2023-24 | Okružno | 7 | [Proizvod prostih cifara](takprog-2023-24/04_OKRUZNO/7_razred/02_proizvod_prostih) | 0.1 s | 64 MB | 13 | default |
| 2023-24 | Okružno | 7 | [Rečenice u zagradama](takprog-2023-24/04_OKRUZNO/7_razred/03_recenice_u_zagradama) | 0.15 s | 64 MB | 13 | default |
| 2023-24 | Okružno | 7 | [Takmičari](takprog-2023-24/04_OKRUZNO/7_razred/04_takmicari) | 0.2 s | 64 MB | 12 | default |
| 2023-24 | Okružno | 8 | [Trougao najvećeg obima](takprog-2023-24/04_OKRUZNO/8_razred/01_trougao_najveceg_obima) | 0.1 s | 16 MB | 11 | default |
| 2023-24 | Okružno | 8 | [Najbolji učesnici turnira](takprog-2023-24/04_OKRUZNO/8_razred/02_turnir) | 0.15 s | 64 MB | 11 | default |
| 2023-24 | Okružno | 8 | [Makazice](takprog-2023-24/04_OKRUZNO/8_razred/03_makazice) | 0.15 s | 64 MB | 12 | default |
| 2023-24 | Okružno | 8 | [Konopci](takprog-2023-24/04_OKRUZNO/8_razred/04_konopci) | 1 s | 64 MB | 22 | default |
| 2023-24 | Državno | 6 | [Motivacija](takprog-2023-24/05_DRZAVNO/6_razred/01_motivacija) | 0.1 s | 64 MB | 12 | default |
| 2023-24 | Državno | 6 | [Harshad brojevi](takprog-2023-24/05_DRZAVNO/6_razred/02_harshad_brojevi) | 1 s | 64 MB | 12 | default |
| 2023-24 | Državno | 6 | [Đavolski kvadrat](takprog-2023-24/05_DRZAVNO/6_razred/03_djavolski_kvadrat) | 2.5 s | 128 MB | 18 | default |
| 2023-24 | Državno | 6 | [Patikarnica](takprog-2023-24/05_DRZAVNO/6_razred/04_patikarnica) | 2 s | 64 MB | 11 | default |
| 2023-24 | Državno | 7 | [Teške torbe](takprog-2023-24/05_DRZAVNO/7_razred/01_teske_torbe) | 0.15 s | 64 MB | 13 | default |
| 2023-24 | Državno | 7 | [Kvantna zavrzlama](takprog-2023-24/05_DRZAVNO/7_razred/02_kvantna_zavrzlama) | 1 s | 64 MB | 15 | default |
| 2023-24 | Državno | 7 | [Patikarnica](takprog-2023-24/05_DRZAVNO/7_razred/03_patikarnica) | 2 s | 64 MB | 11 | default |
| 2023-24 | Državno | 7 | [Rotiranje reči](takprog-2023-24/05_DRZAVNO/7_razred/04_rotiranje_reci) | 0.5 s | 64 MB | 13 | default |
| 2023-24 | Državno | 8 | [Biciklisti](takprog-2023-24/05_DRZAVNO/8_razred/01_biciklisti) | 0.15 s | 64 MB | 27 | default |
| 2023-24 | Državno | 8 | [Gore-dole-levo-desno](takprog-2023-24/05_DRZAVNO/8_razred/02_gore_dole_levo_desno) | 0.15 s | 64 MB | 28 | default |
| 2023-24 | Državno | 8 | [Zbir prostih](takprog-2023-24/05_DRZAVNO/8_razred/03_zbir_prostih) | 5 s | 256 MB | 21 | default |
| 2023-24 | Državno | 8 | [Domine](takprog-2023-24/05_DRZAVNO/8_razred/04_domine) | 1 s | 128 MB | 20 | default |
| 2023-24 | JSIO | — | [Neodgovoran student](takprog-2023-24/06_JSIO/01_neodgovoran_student) | 0.5 s | 64 MB | 22 | default |
| 2023-24 | JSIO | — | [Najbolja zamena](takprog-2023-24/06_JSIO/02_najbolja_zamena) | 0.5 s | 128 MB | 17 | default |
| 2023-24 | JSIO | — | [Pogađanje nepoznatog broja](takprog-2023-24/06_JSIO/03_pogadjanje_nepoznatog_broja) | 1 s | 512 MB | 31 | default |
| 2023-24 | JSIO | — | [Graf od klika](takprog-2023-24/06_JSIO/04_graf_od_klika) | 2.5 s | 512 MB | 60 | default |
| 2023-24 | Izborno | — | [Najbolji zbir](takprog-2023-24/07_IZBORNO/01_najbolji_zbir) | 1 s | 64 MB | 28 | default |
| 2023-24 | Izborno | — | [Četiri delioca](takprog-2023-24/07_IZBORNO/02_cetiri_delioca) | 1 s | 128 MB | 27 | default |
| 2023-24 | Izborno | — | [Slojevi tačaka u ravni](takprog-2023-24/07_IZBORNO/03_slojevi) | 1.5 s | 64 MB | 10 | default |
| 2023-24 | Izborno | — | [Mešalica](takprog-2023-24/07_IZBORNO/04_mesalica) | 2 s | 128 MB | 72 | default |
| 2022-23 | Kvalifikacije 1 | 6 | [Kviz](takprog-2022-23/01_KV1/6_razred/01_kviz) | 0.15 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 1 | 6 | [Gorivo](takprog-2022-23/01_KV1/6_razred/02_gorivo) | 0.1 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 1 | 6 | [Kakuro provera](takprog-2022-23/01_KV1/6_razred/03_kakuro_provera) | 0.1 s | 64 MB | 18 | default |
| 2022-23 | Kvalifikacije 1 | 6 | [Spisak proizvoda](takprog-2022-23/01_KV1/6_razred/04_spisak_proizvoda) | 0.1 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 1 | 6 | [Majstor](takprog-2022-23/01_KV1/6_razred/05_majstor) | 0.2 s | 64 MB | 13 | default |
| 2022-23 | Kvalifikacije 1 | 6 | [Zrak](takprog-2022-23/01_KV1/6_razred/06_zrak) | 0.1 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 1 | 7 | [Gorivo](takprog-2022-23/01_KV1/7_razred/01_gorivo) | 0.1 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 1 | 7 | [Kakuro provera](takprog-2022-23/01_KV1/7_razred/02_kakuro_provera) | 0.1 s | 64 MB | 18 | default |
| 2022-23 | Kvalifikacije 1 | 7 | [Odmeren trening](takprog-2022-23/01_KV1/7_razred/03_odmeren_trening) | 0.1 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 1 | 7 | [Slovarica](takprog-2022-23/01_KV1/7_razred/04_slovarica) | 0.2 s | 64 MB | 13 | default |
| 2022-23 | Kvalifikacije 1 | 7 | [Ć++](takprog-2022-23/01_KV1/7_razred/05_cpp) | 0.5 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 1 | 7 | [Dopuna mejlova](takprog-2022-23/01_KV1/7_razred/06_dopuna_mejlova) | 0.45 s | 64 MB | 11 | default |
| 2022-23 | Kvalifikacije 1 | 8 | [Kuvar](takprog-2022-23/01_KV1/8_razred/01_kuvar) | 0.15 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 1 | 8 | [Stubići od kockica](takprog-2022-23/01_KV1/8_razred/02_stubici_od_kockica) | 0.15 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 1 | 8 | [Note](takprog-2022-23/01_KV1/8_razred/03_note) | 0.1 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 1 | 8 | [Datum sa najvećom zaradom](takprog-2022-23/01_KV1/8_razred/04_datum_sa_najvecom_zaradom) | 0.2 s | 64 MB | 11 | default |
| 2022-23 | Kvalifikacije 1 | 8 | [Dopuna mejlova](takprog-2022-23/01_KV1/8_razred/05_dopuna_mejlova) | 0.45 s | 64 MB | 11 | default |
| 2022-23 | Kvalifikacije 1 | 8 | [Zbirovi nakon podele](takprog-2022-23/01_KV1/8_razred/06_zbirovi_nakon_podele) | 0.3 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 2 | 6 | [Šljive](takprog-2022-23/02_KV2/6_razred/01_sljive) | 0.1 s | 64 MB | 13 | default |
| 2022-23 | Kvalifikacije 2 | 6 | [Flaše](takprog-2022-23/02_KV2/6_razred/02_pakovanje_soka_u_flase) | 0.1 s | 64 MB | 11 | default |
| 2022-23 | Kvalifikacije 2 | 6 | [Katanac](takprog-2022-23/02_KV2/6_razred/03_katanac) | 0.1 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 2 | 6 | [Fudbalska grupa - tabela](takprog-2022-23/02_KV2/6_razred/04_fudbalska_grupa_tabela) | 0.1 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 2 | 6 | [Najviše odličnih](takprog-2022-23/02_KV2/6_razred/05_najvise_odlicnih) | 1 s | 64 MB | 11 | default |
| 2022-23 | Kvalifikacije 2 | 6 | [Doline](takprog-2022-23/02_KV2/6_razred/06_doline) | 1 s | 64 MB | 13 | default |
| 2022-23 | Kvalifikacije 2 | 7 | [Poslednji meč](takprog-2022-23/02_KV2/7_razred/01_poslednji_mec) | 0.1 s | 64 MB | 33 | default |
| 2022-23 | Kvalifikacije 2 | 7 | [Katanac](takprog-2022-23/02_KV2/7_razred/02_katanac) | 0.1 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 2 | 7 | [Raspon krila](takprog-2022-23/02_KV2/7_razred/03_raspon_krila) | 0.1 s | 64 MB | 22 | default |
| 2022-23 | Kvalifikacije 2 | 7 | [Mešalica](takprog-2022-23/02_KV2/7_razred/04_mesalica_3) | 1 s | 64 MB | 13 | default |
| 2022-23 | Kvalifikacije 2 | 7 | [Greška u tekstu](takprog-2022-23/02_KV2/7_razred/05_greska_u_tekstu) | 0.1 s | 64 MB | 13 | default |
| 2022-23 | Kvalifikacije 2 | 7 | [Broj trocifrenih parnih](takprog-2022-23/02_KV2/7_razred/06_broj_trocifrenih_parnih) | 0.25 s | 64 MB | 13 | default |
| 2022-23 | Kvalifikacije 2 | 8 | [Poslednji meč](takprog-2022-23/02_KV2/8_razred/01_poslednji_mec) | 0.1 s | 64 MB | 33 | default |
| 2022-23 | Kvalifikacije 2 | 8 | [Raspon krila](takprog-2022-23/02_KV2/8_razred/02_raspon_krila) | 0.1 s | 64 MB | 22 | default |
| 2022-23 | Kvalifikacije 2 | 8 | [Greška u tekstu](takprog-2022-23/02_KV2/8_razred/03_greska_u_tekstu) | 0.1 s | 64 MB | 13 | default |
| 2022-23 | Kvalifikacije 2 | 8 | [Puž](takprog-2022-23/02_KV2/8_razred/04_puz) | 0.1 s | 64 MB | 14 | default |
| 2022-23 | Kvalifikacije 2 | 8 | [Tačan izraz](takprog-2022-23/02_KV2/8_razred/05_tacan_izraz) | 0.1 s | 64 MB | 14 | custom |
| 2022-23 | Kvalifikacije 2 | 8 | [Najmanji dobitak](takprog-2022-23/02_KV2/8_razred/06_najmanji_dobitak) | 0.4 s | 64 MB | 20 | default |
| 2022-23 | Kvalifikacije 3 | 6 | [AM/PM](takprog-2022-23/03_KV3/6_razred/01_am_pm) | 0.1 s | 16 MB | 14 | default |
| 2022-23 | Kvalifikacije 3 | 6 | [Iz bajke u basnu](takprog-2022-23/03_KV3/6_razred/02_iz_bajke_u_basnu) | 0.2 s | 16 MB | 12 | default |
| 2022-23 | Kvalifikacije 3 | 6 | [Rezultat u teniskom gemu](takprog-2022-23/03_KV3/6_razred/03_teniski_rezultat_gem) | 0.1 s | 16 MB | 14 | default |
| 2022-23 | Kvalifikacije 3 | 6 | [Vrhovi](takprog-2022-23/03_KV3/6_razred/04_vrhovi) | 0.1 s | 16 MB | 13 | default |
| 2022-23 | Kvalifikacije 3 | 6 | [Klase cifara](takprog-2022-23/03_KV3/6_razred/05_po_tri_cifre) | 0.1 s | 16 MB | 13 | default |
| 2022-23 | Kvalifikacije 3 | 6 | [Dijagonale](takprog-2022-23/03_KV3/6_razred/06_dijagonale) | 0.2 s | 16 MB | 13 | default |
| 2022-23 | Kvalifikacije 3 | 7 | [Dodavanje cifre stotina](takprog-2022-23/03_KV3/7_razred/01_dodata_cifra_stotina) | 0.1 s | 16 MB | 13 | default |
| 2022-23 | Kvalifikacije 3 | 7 | [Rezultat u teniskom gemu](takprog-2022-23/03_KV3/7_razred/02_teniski_rezultat_gem) | 0.1 s | 16 MB | 14 | default |
| 2022-23 | Kvalifikacije 3 | 7 | [Poslednja štanglica](takprog-2022-23/03_KV3/7_razred/03_poslednja_stanglica) | 0.1 s | 16 MB | 24 | default |
| 2022-23 | Kvalifikacije 3 | 7 | [Obrtanja](takprog-2022-23/03_KV3/7_razred/04_obrtanja) | 0.2 s | 16 MB | 17 | default |
| 2022-23 | Kvalifikacije 3 | 7 | [Seča drva](takprog-2022-23/03_KV3/7_razred/05_seca_drva) | 1.7 s | 64 MB | 15 | default |
| 2022-23 | Kvalifikacije 3 | 7 | [Što sličnija trojka](takprog-2022-23/03_KV3/7_razred/06_sto_slicnija_trojka) | 0.5 s | 64 MB | 12 | default |
| 2022-23 | Kvalifikacije 3 | 8 | [Ko prvi igra?](takprog-2022-23/03_KV3/8_razred/01_ko_prvi_igra) | 0.1 s | 16 MB | 15 | default |
| 2022-23 | Kvalifikacije 3 | 8 | [Poslednja štanglica](takprog-2022-23/03_KV3/8_razred/02_poslednja_stanglica) | 0.1 s | 16 MB | 24 | default |
| 2022-23 | Kvalifikacije 3 | 8 | [Kontrolna cifra](takprog-2022-23/03_KV3/8_razred/03_kontrolna_cifra) | 0.1 s | 16 MB | 12 | default |
| 2022-23 | Kvalifikacije 3 | 8 | [Obrtanja](takprog-2022-23/03_KV3/8_razred/04_obrtanja) | 0.2 s | 16 MB | 17 | default |
| 2022-23 | Kvalifikacije 3 | 8 | [Mešalica](takprog-2022-23/03_KV3/8_razred/05_mesalica) | 1 s | 64 MB | 13 | default |
| 2022-23 | Kvalifikacije 3 | 8 | [Seča stabala](takprog-2022-23/03_KV3/8_razred/06_seca_stabala) | 2 s | 64 MB | 22 | default |
| 2022-23 | Okružno | 6 | [Slobodna bacanja](takprog-2022-23/04_OKRUZNO/6_razred/01_slobodna_bacanja) | 0.1 s | 16 MB | 11 | default |
| 2022-23 | Okružno | 6 | [Merenje sa tri tega](takprog-2022-23/04_OKRUZNO/6_razred/02_merenje_sa_tri_tega) | 0.2 s | 64 MB | 22 | default |
| 2022-23 | Okružno | 6 | [Klub](takprog-2022-23/04_OKRUZNO/6_razred/03_klub) | 0.2 s | 64 MB | 12 | default |
| 2022-23 | Okružno | 6 | [Serije vežbi](takprog-2022-23/04_OKRUZNO/6_razred/04_serije_vezbi) | 0.1 s | 16 MB | 11 | default |
| 2022-23 | Okružno | 7 | [Milioner](takprog-2022-23/04_OKRUZNO/7_razred/01_milioner) | 0.1 s | 64 MB | 12 | default |
| 2022-23 | Okružno | 7 | [Dve slike na papiru](takprog-2022-23/04_OKRUZNO/7_razred/02_dve_slike_na_papiru) | 0.1 s | 16 MB | 33 | default |
| 2022-23 | Okružno | 7 | [Proizvod bez trenutnog broja](takprog-2022-23/04_OKRUZNO/7_razred/03_proizvod_bez_trenutnog) | 0.1 s | 16 MB | 12 | default |
| 2022-23 | Okružno | 7 | [K najbližih](takprog-2022-23/04_OKRUZNO/7_razred/04_k_najblizih) | 0.5 s | 64 MB | 13 | default |
| 2022-23 | Okružno | 8 | [Useljenje](takprog-2022-23/04_OKRUZNO/8_razred/01_useljavanje) | 0.5 s | 64 MB | 23 | default |
| 2022-23 | Okružno | 8 | [Gusari](takprog-2022-23/04_OKRUZNO/8_razred/02_gusari) | 0.1 s | 64 MB | 12 | default |
| 2022-23 | Okružno | 8 | [Potez u tetrisu](takprog-2022-23/04_OKRUZNO/8_razred/03_potez_u_tetrisu) | 0.2 s | 64 MB | 16 | default |
| 2022-23 | Okružno | 8 | [Što više sličnih elemenata niza](takprog-2022-23/04_OKRUZNO/8_razred/04_sto_vise_slicnih) | 0.2 s | 16 MB | 12 | default |
| 2022-23 | Državno | 6 | [Parno-neparni niz](takprog-2022-23/05_DRZAVNO/6_razred/01_parno_neparni_1) | 0.1 s | 16 MB | 53 | default |
| 2022-23 | Državno | 6 | [Odnos susednih](takprog-2022-23/05_DRZAVNO/6_razred/02_odnos_susednih) | 0.1 s | 64 MB | 18 | default |
| 2022-23 | Državno | 6 | [Topovi](takprog-2022-23/05_DRZAVNO/6_razred/03_topovi) | 1 s | 64 MB | 22 | default |
| 2022-23 | Državno | 6 | [Bliski](takprog-2022-23/05_DRZAVNO/6_razred/04_bliski) | 1 s | 64 MB | 21 | default |
| 2022-23 | Državno | 7 | [Parno-neparni nizovi](takprog-2022-23/05_DRZAVNO/7_razred/01_parno_neparni) | 0.1 s | 16 MB | 11 | default |
| 2022-23 | Državno | 7 | [Prevod](takprog-2022-23/05_DRZAVNO/7_razred/02_prevod) | 0.25 s | 16 MB | 11 | default |
| 2022-23 | Državno | 7 | [Uljez](takprog-2022-23/05_DRZAVNO/7_razred/03_najmanji_broj_inverzija) | 1 s | 64 MB | 15 | default |
| 2022-23 | Državno | 7 | [Najbrojnija okolina](takprog-2022-23/05_DRZAVNO/7_razred/04_okolina) | 1 s | 64 MB | 13 | default |
| 2022-23 | Državno | 8 | [Odbijanje](takprog-2022-23/05_DRZAVNO/8_razred/01_odbijanje) | 1 s | 64 MB | 52 | default |
| 2022-23 | Državno | 8 | [Jamb](takprog-2022-23/05_DRZAVNO/8_razred/02_jamb) | 0.1 s | 16 MB | 35 | default |
| 2022-23 | Državno | 8 | [Dvobojna ogrlica](takprog-2022-23/05_DRZAVNO/8_razred/03_dvobojna_ogrlica) | 0.2 s | 64 MB | 12 | default |
| 2022-23 | Državno | 8 | [Sva kretanja rezultata](takprog-2022-23/05_DRZAVNO/8_razred/04_sva_kretanja_rezultata) | 0.2 s | 64 MB | 13 | default |
| 2022-23 | SIO | — | [0-1 matrica](takprog-2022-23/06_SIO/01_matrica_01) | 0.2 s | 128 MB | 12 | default |
| 2022-23 | SIO | — | [Uravnotežen podniz](takprog-2022-23/06_SIO/02_uravnotezeni_podnizovi) | 0.1 s | 64 MB | 21 | default |
| 2022-23 | SIO | — | [Broj cifara iza zareza](takprog-2022-23/06_SIO/03_broj_cifara_iza_zareza) | 0.5 s | 64 MB | 24 | default |
| 2022-23 | SIO | — | [Rušenje mostova](takprog-2022-23/06_SIO/04_rusenje_mostova) | 1 s | 64 MB | 13 | default |
| 2022-23 | Izborno | — | [Flip](takprog-2022-23/07_IZBORNO/01_flip) | 1 s | 64 MB | 22 | default |
| 2022-23 | Izborno | — | [Podniske nesusednih elemenata](takprog-2022-23/07_IZBORNO/02_podniske_nesusednih_elemenata) | 0.1 s | 16 MB | 11 | default |
| 2022-23 | Izborno | — | [Ekskurzija](takprog-2022-23/07_IZBORNO/03_ekskurzija) | 1 s | 64 MB | 22 | default |
| 2022-23 | Izborno | — | [Antena](takprog-2022-23/07_IZBORNO/04_antena) | 1 s | 64 MB | 39 | default |
| 2021-22 | Kvalifikacije 1 | 5 | [Ram](takprog-2021-22/01_KV1/5_razred/01_ram) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 1 | 5 | [Povećaj svaku cifru](takprog-2021-22/01_KV1/5_razred/02_povecaj_svaku_cifru) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 1 | 5 | [Papir, kamen, makaze](takprog-2021-22/01_KV1/5_razred/03_papir_kamen_makaze) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 1 | 5 | [Bliže crti](takprog-2021-22/01_KV1/5_razred/04_blize_crti) | 0.1 s | 64 MB | 17 | default |
| 2021-22 | Kvalifikacije 1 | 5 | [Ukupno vreme](takprog-2021-22/01_KV1/5_razred/05_ukupno_vreme) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Kvalifikacije 1 | 5 | [Isecanje kvadrata](takprog-2021-22/01_KV1/5_razred/06_kvadrati_maksimalne_povrsine) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 1 | 6 | [Ram](takprog-2021-22/01_KV1/6_razred/01_ram) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 1 | 6 | [Povećaj svaku cifru](takprog-2021-22/01_KV1/6_razred/02_povecaj_svaku_cifru) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 1 | 6 | [Majice](takprog-2021-22/01_KV1/6_razred/03_majice) | 0.1 s | 64 MB | 14 | default |
| 2021-22 | Kvalifikacije 1 | 6 | [Ukupno vreme](takprog-2021-22/01_KV1/6_razred/04_ukupno_vreme) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Kvalifikacije 1 | 6 | [Slične reči](takprog-2021-22/01_KV1/6_razred/05_slicne_reci) | 0.1 s | 64 MB | 13 | default |
| 2021-22 | Kvalifikacije 1 | 6 | [Zgrade](takprog-2021-22/01_KV1/6_razred/06_zgrade) | 1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 1 | 7 | [Kupovina](takprog-2021-22/01_KV1/7_razred/01_kupovina) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 1 | 7 | [Najveći dvocifren broj](takprog-2021-22/01_KV1/7_razred/02_najveci_dvocifreni_broj) | 0.1 s | 64 MB | 15 | default |
| 2021-22 | Kvalifikacije 1 | 7 | [Taksi rastojanje oko pravougaonika](takprog-2021-22/01_KV1/7_razred/03_taksi_rastojanje_oko_pravougaonika) | 0.1 s | 64 MB | 11 | default |
| 2021-22 | Kvalifikacije 1 | 7 | [Klin](takprog-2021-22/01_KV1/7_razred/04_klin) | 0.1 s | 64 MB | 14 | default |
| 2021-22 | Kvalifikacije 1 | 7 | [Tačke](takprog-2021-22/01_KV1/7_razred/05_tacke) | 1 s | 64 MB | 11 | default |
| 2021-22 | Kvalifikacije 1 | 7 | [Boje u krugu](takprog-2021-22/01_KV1/7_razred/06_boje_u_krugu) | 0.6 s | 64 MB | 11 | default |
| 2021-22 | Kvalifikacije 1 | 8 | [Kupovina](takprog-2021-22/01_KV1/8_razred/01_kupovina) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 1 | 8 | [Karte](takprog-2021-22/01_KV1/8_razred/02_preferans) | 0.1 s | 64 MB | 13 | default |
| 2021-22 | Kvalifikacije 1 | 8 | [Taksi rastojanje oko pravougaonika](takprog-2021-22/01_KV1/8_razred/03_taksi_rastojanje_oko_pravougaonika) | 0.1 s | 64 MB | 11 | default |
| 2021-22 | Kvalifikacije 1 | 8 | [Postavljanje domina](takprog-2021-22/01_KV1/8_razred/04_postavljanje_domina) | 0.1 s | 64 MB | 13 | default |
| 2021-22 | Kvalifikacije 1 | 8 | [Tačke](takprog-2021-22/01_KV1/8_razred/05_tacke) | 1 s | 64 MB | 11 | default |
| 2021-22 | Kvalifikacije 1 | 8 | [Španska serija](takprog-2021-22/01_KV1/8_razred/06_spanska_serija) | 0.6 s | 64 MB | 12 | custom |
| 2021-22 | Kvalifikacije 2 | 5 | [Stolnjak](takprog-2021-22/02_KV2/5_razred/01_stolnjak) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 5 | [Pakovanje](takprog-2021-22/02_KV2/5_razred/02_pakovanje) | 0.1 s | 16 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 5 | [Samoglasnici](takprog-2021-22/02_KV2/5_razred/03_samoglasnici) | 0.1 s | 16 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 5 | [Dežurstvo](takprog-2021-22/02_KV2/5_razred/04_dezurstvo) | 0.1 s | 64 MB | 11 | default |
| 2021-22 | Kvalifikacije 2 | 5 | [Magacin](takprog-2021-22/02_KV2/5_razred/05_magacin) | 0.3 s | 64 MB | 16 | default |
| 2021-22 | Kvalifikacije 2 | 5 | [Kocke](takprog-2021-22/02_KV2/5_razred/06_kocke) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 6 | [Pakovanje](takprog-2021-22/02_KV2/6_razred/01_pakovanje) | 0.1 s | 16 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 6 | [Samoglasnici](takprog-2021-22/02_KV2/6_razred/02_samoglasnici) | 0.1 s | 16 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 6 | [Broj poseta kućici](takprog-2021-22/02_KV2/6_razred/03_broj_poseta_kucici) | 0.3 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 6 | [Telegraf](takprog-2021-22/02_KV2/6_razred/04_telegraf) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 6 | [Skočko](takprog-2021-22/02_KV2/6_razred/05_skocko) | 0.1 s | 16 MB | 16 | default |
| 2021-22 | Kvalifikacije 2 | 6 | [Podmornica](takprog-2021-22/02_KV2/6_razred/06_podmornica) | 1 s | 64 MB | 17 | default |
| 2021-22 | Kvalifikacije 2 | 7 | [Četvorougao](takprog-2021-22/02_KV2/7_razred/01_cetvorougao) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 7 | [Broj poseta kućici](takprog-2021-22/02_KV2/7_razred/02_broj_poseta_kucici) | 0.3 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 7 | [Igračka](takprog-2021-22/02_KV2/7_razred/03_igracka) | 0.1 s | 64 MB | 11 | default |
| 2021-22 | Kvalifikacije 2 | 7 | [Množenje i korenovanje](takprog-2021-22/02_KV2/7_razred/04_mnozenje_i_korenovanje) | 0.3 s | 16 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 7 | [Podmornica](takprog-2021-22/02_KV2/7_razred/05_podmornica) | 1 s | 64 MB | 17 | default |
| 2021-22 | Kvalifikacije 2 | 7 | [Sečenje](takprog-2021-22/02_KV2/7_razred/06_secenje) | 1.5 s | 100 MB | 16 | default |
| 2021-22 | Kvalifikacije 2 | 8 | [Igračka](takprog-2021-22/02_KV2/8_razred/01_igracka) | 0.1 s | 64 MB | 11 | default |
| 2021-22 | Kvalifikacije 2 | 8 | [Prozor i ograda](takprog-2021-22/02_KV2/8_razred/02_prozor_i_ograda) | 0.2 s | 64 MB | 11 | default |
| 2021-22 | Kvalifikacije 2 | 8 | [Činilac manje](takprog-2021-22/02_KV2/8_razred/03_cinilac_manje) | 0.1 s | 64 MB | 16 | default |
| 2021-22 | Kvalifikacije 2 | 8 | [Množenje i korenovanje](takprog-2021-22/02_KV2/8_razred/04_mnozenje_i_korenovanje) | 0.3 s | 16 MB | 12 | default |
| 2021-22 | Kvalifikacije 2 | 8 | [Eksperiment](takprog-2021-22/02_KV2/8_razred/05_eksperiment) | 0.5 s | 64 MB | 16 | default |
| 2021-22 | Kvalifikacije 2 | 8 | [Sečenje](takprog-2021-22/02_KV2/8_razred/06_secenje_tezi) | 1.5 s | 64 MB | 16 | default |
| 2021-22 | Kvalifikacije 3 | 5 | [Zvonce](takprog-2021-22/03_KV3/5_razred/01_zvonce) | 0.1 s | 16 MB | 13 | custom |
| 2021-22 | Kvalifikacije 3 | 5 | [Po tri kaše](takprog-2021-22/03_KV3/5_razred/02_po_tri) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Kvalifikacije 3 | 5 | [Ukrasna traka](takprog-2021-22/03_KV3/5_razred/03_ukrasna_traka) | 0.1 s | 16 MB | 13 | default |
| 2021-22 | Kvalifikacije 3 | 5 | [Veliko sniženje](takprog-2021-22/03_KV3/5_razred/04_veliko_snizenje) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Kvalifikacije 3 | 5 | [Struja](takprog-2021-22/03_KV3/5_razred/05_struja) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Kvalifikacije 3 | 5 | [Šifra](takprog-2021-22/03_KV3/5_razred/06_sifra) | 0.2 s | 16 MB | 11 | default |
| 2021-22 | Kvalifikacije 3 | 6 | [Voda](takprog-2021-22/03_KV3/6_razred/01_voda) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Kvalifikacije 3 | 6 | [Ukrasna traka](takprog-2021-22/03_KV3/6_razred/02_ukrasna_traka) | 0.1 s | 16 MB | 13 | default |
| 2021-22 | Kvalifikacije 3 | 6 | [Morske dubine](takprog-2021-22/03_KV3/6_razred/03_najmanja_dubina) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 3 | 6 | [Red u prodavnici](takprog-2021-22/03_KV3/6_razred/04_red) | 0.1 s | 16 MB | 12 | default |
| 2021-22 | Kvalifikacije 3 | 6 | [Struja](takprog-2021-22/03_KV3/6_razred/05_struja) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Kvalifikacije 3 | 6 | [Ćuki](takprog-2021-22/03_KV3/6_razred/06_cuki) | 0.3 s | 64 MB | 11 | default |
| 2021-22 | Kvalifikacije 3 | 7 | [Gol u gostima](takprog-2021-22/03_KV3/7_razred/01_gol_u_gostima) | 0.1 s | 16 MB | 14 | default |
| 2021-22 | Kvalifikacije 3 | 7 | [Morske dubine](takprog-2021-22/03_KV3/7_razred/02_najmanja_dubina) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 3 | 7 | [Ram od slova](takprog-2021-22/03_KV3/7_razred/03_ram_od_slova) | 0.1 s | 16 MB | 12 | default |
| 2021-22 | Kvalifikacije 3 | 7 | [Pokloni](takprog-2021-22/03_KV3/7_razred/04_pokloni_u_prodavnici) | 0.2 s | 16 MB | 11 | default |
| 2021-22 | Kvalifikacije 3 | 7 | [Dame](takprog-2021-22/03_KV3/7_razred/05_dame) | 1 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 3 | 7 | [Blago u pećini](takprog-2021-22/03_KV3/7_razred/06_blago_u_pecini) | 0.2 s | 64 MB | 12 | default |
| 2021-22 | Kvalifikacije 3 | 8 | [Ram od slova](takprog-2021-22/03_KV3/8_razred/01_ram_od_slova) | 0.1 s | 16 MB | 12 | default |
| 2021-22 | Kvalifikacije 3 | 8 | [Šarko](takprog-2021-22/03_KV3/8_razred/02_sarko) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Kvalifikacije 3 | 8 | [Veći realan broj](takprog-2021-22/03_KV3/8_razred/03_veci_realan_broj) | 0.1 s | 16 MB | 14 | default |
| 2021-22 | Kvalifikacije 3 | 8 | [Sudoku](takprog-2021-22/03_KV3/8_razred/04_sudoku) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Kvalifikacije 3 | 8 | [Ćuki](takprog-2021-22/03_KV3/8_razred/05_cuki) | 0.3 s | 64 MB | 11 | default |
| 2021-22 | Kvalifikacije 3 | 8 | [Blago u pećini](takprog-2021-22/03_KV3/8_razred/06_blago_u_pecini) | 0.2 s | 64 MB | 12 | default |
| 2021-22 | Okružno | 5 | [Klasifikacija](takprog-2021-22/04_OKRUZNO/5_razred/01_klasifikacija) | 0.1 s | 64 MB | 9 | default |
| 2021-22 | Okružno | 5 | [Prosek cifara](takprog-2021-22/04_OKRUZNO/5_razred/02_prosek_cifara) | 0.1 s | 64 MB | 12 | default |
| 2021-22 | Okružno | 5 | [Visok pritisak](takprog-2021-22/04_OKRUZNO/5_razred/03_visok_pritisak) | 0.1 s | 64 MB | 11 | default |
| 2021-22 | Okružno | 5 | [Leptir mašna](takprog-2021-22/04_OKRUZNO/5_razred/04_crtez) | 0.1 s | 64 MB | 15 | default |
| 2021-22 | Okružno | 6 | [Finalista](takprog-2021-22/04_OKRUZNO/6_razred/01_finalista) | 0.1 s | 64 MB | 9 | default |
| 2021-22 | Okružno | 6 | [Prvi ponedeljak](takprog-2021-22/04_OKRUZNO/6_razred/02_prvi_ponedeljak_u_mesecu) | 0.1 s | 64 MB | 11 | default |
| 2021-22 | Okružno | 6 | [Čudne stepenice](takprog-2021-22/04_OKRUZNO/6_razred/03_cudne_stepenice) | 0.2 s | 64 MB | 11 | default |
| 2021-22 | Okružno | 6 | [Romb sa dijagonalama](takprog-2021-22/04_OKRUZNO/6_razred/04_crtez_tezi) | 0.1 s | 64 MB | 15 | default |
| 2021-22 | Okružno | 7 | [Iks-oks](takprog-2021-22/04_OKRUZNO/7_razred/01_iks_oks) | 0.1 s | 64 MB | 25 | default |
| 2021-22 | Okružno | 7 | [Cifre i slova](takprog-2021-22/04_OKRUZNO/7_razred/02_cifre_i_slova) | 0.1 s | 64 MB | 11 | default |
| 2021-22 | Okružno | 7 | [Računi](takprog-2021-22/04_OKRUZNO/7_razred/03_racuni) | 1 s | 64 MB | 11 | default |
| 2021-22 | Okružno | 7 | [Krtice i zastavice](takprog-2021-22/04_OKRUZNO/7_razred/04_krtice_i_zastavice) | 0.3 s | 64 MB | 11 | default |
| 2021-22 | Okružno | 8 | [Iks-oks](takprog-2021-22/04_OKRUZNO/8_razred/01_iks_oks) | 0.1 s | 64 MB | 25 | default |
| 2021-22 | Okružno | 8 | [Rotacije podreči](takprog-2021-22/04_OKRUZNO/8_razred/02_rotacije_podreci) | 0.1 s | 64 MB | 11 | default |
| 2021-22 | Okružno | 8 | [Proređen skup](takprog-2021-22/04_OKRUZNO/8_razred/03_proredjen_skup) | 0.5 s | 64 MB | 12 | default |
| 2021-22 | Okružno | 8 | [Fabrika](takprog-2021-22/04_OKRUZNO/8_razred/04_fabrika) | 1.8 s | 64 MB | 11 | custom |
| 2021-22 | Državno | 5–6 | [Parovi istih cifara](takprog-2021-22/05_DRZAVNO/5-6_razred/01_iste_cifre) | 0.1 s | 16 MB | 13 | default |
| 2021-22 | Državno | 5–6 | [Zbir srednjih](takprog-2021-22/05_DRZAVNO/5-6_razred/02_zbir_srednjih) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Državno | 5–6 | [Sort po parnosti](takprog-2021-22/05_DRZAVNO/5-6_razred/03_sort_po_parnosti) | 0.25 s | 64 MB | 9 | default |
| 2021-22 | Državno | 5–6 | [Jedna razmena](takprog-2021-22/05_DRZAVNO/5-6_razred/04_jedna_razmena) | 0.1 s | 64 MB | 11 | default |
| 2021-22 | Državno | 7–8 | [Plesna priredba](takprog-2021-22/05_DRZAVNO/7-8_razred/01_obrnute_razmene) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Državno | 7–8 | [Lopte](takprog-2021-22/05_DRZAVNO/7-8_razred/02_lopte) | 0.1 s | 16 MB | 11 | default |
| 2021-22 | Državno | 7–8 | [Rale i Spale](takprog-2021-22/05_DRZAVNO/7-8_razred/03_rale_i_spale) | 0.25 s | 64 MB | 11 | default |
| 2021-22 | Državno | 7–8 | [Dokaz](takprog-2021-22/05_DRZAVNO/7-8_razred/04_dokaz) | 0.2 s | 64 MB | 21 | custom |
| 2021-22 | SIO | — | [Završno glasanje](takprog-2021-22/06_SIO/01_zavrsno_glasanje) | 0.25 s | 64 MB | 13 | default |
| 2021-22 | SIO | — | [Armatura](takprog-2021-22/06_SIO/02_armatura) | 0.1 s | 64 MB | 19 | default |
| 2021-22 | SIO | — | [Najveće jezero](takprog-2021-22/06_SIO/03_najvece_jezero) | 0.25 s | 64 MB | 17 | default |
| 2021-22 | SIO | — | [Srećan niz](takprog-2021-22/06_SIO/04_srecan_niz) | 0.15 s | 64 MB | 25 | custom |
| 2021-22 | Izborno | — | [Poslovan Čovek](takprog-2021-22/07_IZBORNO/01_poslovan_covek) | 1.3 s | 256 MB | 35 | default |
| 2021-22 | Izborno | — | [Arhitekta](takprog-2021-22/07_IZBORNO/02_arhitekta) | 1.5 s | 128 MB | 35 | default |
| 2021-22 | Izborno | — | [Zagrade](takprog-2021-22/07_IZBORNO/03_zagrade) | 1 s | 64 MB | 31 | default |
| 2020-21 | Kvalifikacije 1 | 5 | [Dugovečna koala](takprog-2020-21/01_KV1/5_razred/01_dugovecna_koala) | 1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 5 | [Prebroj](takprog-2020-21/01_KV1/5_razred/02_varijacije_sa_ponavljanjem) | 0.1 s | 16 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 5 | [Školsko zvonce](takprog-2020-21/01_KV1/5_razred/03_skolsko_zvonce) | 0.05 s | 16 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 5 | [Prebroj 2](takprog-2020-21/01_KV1/5_razred/04_carobni_broj) | 0.1 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 5 | [Značajni datumi](takprog-2020-21/01_KV1/5_razred/05_datumi_istorija) | 1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 6 | [Test iz istorije](takprog-2020-21/01_KV1/6_razred/01_datumi_istorija) | 1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 6 | [Put oko sveta](takprog-2020-21/01_KV1/6_razred/02_biciklo) | 1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 6 | [E-dnevnik](takprog-2020-21/01_KV1/6_razred/03_e_dnevnik) | 0.1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 6 | [Osvetljenje](takprog-2020-21/01_KV1/6_razred/04_osvetljenje) | 0.1 s | 16 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 6 | [Prebroj](takprog-2020-21/01_KV1/6_razred/05_string_dp) | 0.05 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 7 | [Gađanje](takprog-2020-21/01_KV1/7_razred/01_gadjanje) | 0.1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 7 | [Otkrij slova](takprog-2020-21/01_KV1/7_razred/02_otkrij_slova) | 1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 7 | [Historia est magistra vitae](takprog-2020-21/01_KV1/7_razred/03_datumi_istorija) | 1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 7 | [Štampač](takprog-2020-21/01_KV1/7_razred/04_3d_stampac) | 0.2 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 7 | [Igra niskama](takprog-2020-21/01_KV1/7_razred/05_string_dp) | 0.05 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 8 | [3d otisak](takprog-2020-21/01_KV1/8_razred/01_3d_stampac) | 0.2 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 8 | [Nagrada](takprog-2020-21/01_KV1/8_razred/02_video_igrice) | 1 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 8 | [Ana voli Milovana](takprog-2020-21/01_KV1/8_razred/03_ana_voli_milovana) | 0.3 s | 64 MB | 25 | default |
| 2020-21 | Kvalifikacije 1 | 8 | [Čarolija među brojevima](takprog-2020-21/01_KV1/8_razred/04_carolija_medju_brojevima) | 0.1 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 1 | 8 | [Algebra reči](takprog-2020-21/01_KV1/8_razred/05_string_dp) | 0.05 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 5 | [Najveći trocifren broj](takprog-2020-21/02_KV2/5_razred/01_najveci_trocifren) | 0.2 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 5 | [Semafor](takprog-2020-21/02_KV2/5_razred/02_semafor) | 0.2 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 5 | [Značajan završetak](takprog-2020-21/02_KV2/5_razred/03_mnozenje) | 0.3 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 5 | [Dino igra](takprog-2020-21/02_KV2/5_razred/04_dino_kaktusi) | 0.3 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 5 | [Video igrica](takprog-2020-21/02_KV2/5_razred/05_video_igrice) | 1 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 6 | [DHP](takprog-2020-21/02_KV2/6_razred/01_dugovecni_robot) | 1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 6 | [Pohod na Mjesec](takprog-2020-21/02_KV2/6_razred/02_branko_copic) | 1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 6 | [Kaktusi](takprog-2020-21/02_KV2/6_razred/03_dino_kaktusi) | 0.3 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 6 | [Trougao cifri](takprog-2020-21/02_KV2/6_razred/04_najveci_trocifren) | 0.2 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 6 | [EJOI poklon](takprog-2020-21/02_KV2/6_razred/05_video_igrice) | 1 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 7 | [Cifre u trouglu](takprog-2020-21/02_KV2/7_razred/01_najveci_trocifren) | 0.2 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 7 | [Važan je kraj](takprog-2020-21/02_KV2/7_razred/02_mnozenje) | 0.3 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 7 | [Baja i Petrak](takprog-2020-21/02_KV2/7_razred/03_branko_copic) | 1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 7 | [Dino igra](takprog-2020-21/02_KV2/7_razred/04_dino_kaktusi) | 0.3 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 7 | [Prebroj](takprog-2020-21/02_KV2/7_razred/05_zbir_potpun_kvadrat) | 0.85 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 8 | [Saobraćajna signalizacija](takprog-2020-21/02_KV2/8_razred/01_semafor) | 0.2 s | 32 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 8 | [Datum](takprog-2020-21/02_KV2/8_razred/02_dugovecni_robot) | 1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 8 | [Putovanje](takprog-2020-21/02_KV2/8_razred/03_biciklo) | 1 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 8 | [Kvadrati](takprog-2020-21/02_KV2/8_razred/04_zbir_potpun_kvadrat) | 0.85 s | 64 MB | 10 | default |
| 2020-21 | Kvalifikacije 2 | 8 | [Uzajamno prosti članovi](takprog-2020-21/02_KV2/8_razred/05_uzajamno_prosti_clanovi) | 1 s | 64 MB | 10 | default |
| 2020-21 | Okružno | 5 | [Nikolin broj](takprog-2020-21/03_OKRUZNO/5_razred/01_nikolin_broj) | 1 s | 64 MB | 10 | default |
| 2020-21 | Okružno | 5 | [Timsko takmičenje](takprog-2020-21/03_OKRUZNO/5_razred/02_timsko_takmicenje) | 0.1 s | 32 MB | 10 | default |
| 2020-21 | Okružno | 5 | [Nadini podnizovi](takprog-2020-21/03_OKRUZNO/5_razred/03_broj_segmenata_iste_parnosti) | 1 s | 64 MB | 10 | default |
| 2020-21 | Okružno | 5 | [Brojevna traka](takprog-2020-21/03_OKRUZNO/5_razred/04_brojevna_traka) | 1 s | 16 MB | 10 | default |
| 2020-21 | Okružno | 6 | [Jelisavetin goblen](takprog-2020-21/03_OKRUZNO/6_razred/01_jelisavetin_goblen) | 0.1 s | 64 MB | 10 | default |
| 2020-21 | Okružno | 6 | [Perini poeni](takprog-2020-21/03_OKRUZNO/6_razred/02_perini_poeni) | 0.1 s | 64 MB | 10 | default |
| 2020-21 | Okružno | 6 | [Nadino prebrojavanje](takprog-2020-21/03_OKRUZNO/6_razred/03_broj_segmenata_iste_parnosti) | 1 s | 64 MB | 10 | default |
| 2020-21 | Okružno | 6 | [Lazina trampa](takprog-2020-21/03_OKRUZNO/6_razred/04_lazina_trampa) | 0.1 s | 32 MB | 10 | default |
| 2020-21 | Okružno | 7 | [Mikin problem](takprog-2020-21/03_OKRUZNO/7_razred/01_mikin_problem) | 0.7 s | 96 MB | 10 | default |
| 2020-21 | Okružno | 7 | [Adin zbir](takprog-2020-21/03_OKRUZNO/7_razred/02_adin_zbir) | 0.3 s | 32 MB | 10 | default |
| 2020-21 | Okružno | 7 | [Lazina trampa](takprog-2020-21/03_OKRUZNO/7_razred/03_lazina_trampa) | 0.1 s | 32 MB | 10 | default |
| 2020-21 | Okružno | 7 | [Lenkin niz](takprog-2020-21/03_OKRUZNO/7_razred/04_lenkin_niz) | 0.1 s | 32 MB | 10 | default |
| 2020-21 | Okružno | 8 | [Lenkin niz](takprog-2020-21/03_OKRUZNO/8_razred/01_lenkin_niz) | 0.1 s | 32 MB | 10 | default |
| 2020-21 | Okružno | 8 | [Mikin problem](takprog-2020-21/03_OKRUZNO/8_razred/02_mikin_problem) | 0.7 s | 96 MB | 10 | default |
| 2020-21 | Okružno | 8 | [Adin niz](takprog-2020-21/03_OKRUZNO/8_razred/03_adin_zbir) | 0.3 s | 32 MB | 10 | default |
| 2020-21 | Okružno | 8 | [Svetlanin problem](takprog-2020-21/03_OKRUZNO/8_razred/04_svetlanin_problem) | 0.15 s | 16 MB | 10 | default |
| 2020-21 | Državno | 5–6 | [Čarobna tablica](takprog-2020-21/04_DRZAVNO/5-6_razred/01_carobna_tablica) | 1 s | 64 MB | 10 | default |
| 2020-21 | Državno | 5–6 | [Višecifreni brojevi](takprog-2020-21/04_DRZAVNO/5-6_razred/02_visecifreni_brojevi) | 1 s | 64 MB | 10 | default |
| 2020-21 | Državno | 5–6 | [Lazin niz](takprog-2020-21/04_DRZAVNO/5-6_razred/03_lazin_niz) | 0.4 s | 64 MB | 10 | default |
| 2020-21 | Državno | 5–6 | [Velika serija brojeva](takprog-2020-21/04_DRZAVNO/5-6_razred/04_velika_serija_brojeva) | 1 s | 64 MB | 10 | default |
| 2020-21 | Državno | 7–8 | [Zadatak 1](takprog-2020-21/04_DRZAVNO/7-8_razred/01_neparan_broj_delilaca) | 0.7 s | 64 MB | 10 | default |
| 2020-21 | Državno | 7–8 | [Zadatak 2](takprog-2020-21/04_DRZAVNO/7-8_razred/02_basta_sljezove_boje) | 0.5 s | 64 MB | 10 | default |
| 2020-21 | Državno | 7–8 | [Zadatak 3](takprog-2020-21/04_DRZAVNO/7-8_razred/03_dino_turnir) | 0.2 s | 64 MB | 10 | default |
| 2020-21 | Državno | 7–8 | [Zadatak 4](takprog-2020-21/04_DRZAVNO/7-8_razred/04_kvadrat_broja_nizovi) | 1 s | 64 MB | 10 | default |
| 2020-21 | SIO | — | [Knjiga je prozor u svet](takprog-2020-21/05_SIO/01_knjiga_je_prozor_u_svet) | 0.5 s | 64 MB | 10 | default |
| 2020-21 | SIO | — | [Udruženje tenisera](takprog-2020-21/05_SIO/02_udruzenje_tenisera) | 1 s | 64 MB | 10 | default |
| 2020-21 | SIO | — | [Broj pojava reči](takprog-2020-21/05_SIO/03_broj_pojava_reci) | 1.2 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 1 | 5 | [Knjiga](takprog-2019-20/01_KV1/5_razred/01_knjiga) | 0.1 s | 64 MB | 3 | default |
| 2019-20 | Kvalifikacije 1 | 5 | [Sijalica](takprog-2019-20/01_KV1/5_razred/02_sijalica) | 0.1 s | 64 MB | 6 | default |
| 2019-20 | Kvalifikacije 1 | 5 | [Neplivači](takprog-2019-20/01_KV1/5_razred/03_neplivaci) | 0.1 s | 64 MB | 8 | default |
| 2019-20 | Kvalifikacije 1 | 5 | [Susret](takprog-2019-20/01_KV1/5_razred/04_susret) | 0.1 s | 64 MB | 12 | default |
| 2019-20 | Kvalifikacije 1 | 5 | [Ogrlica](takprog-2019-20/01_KV1/5_razred/05_ogrlica) | 0.1 s | 64 MB | 4 | default |
| 2019-20 | Kvalifikacije 1 | 5 | [Sekcija](takprog-2019-20/01_KV1/5_razred/06_sekcija) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 1 | 5 | [Blizanci](takprog-2019-20/01_KV1/5_razred/07_blizanci) | 1 s | 64 MB | 15 | default |
| 2019-20 | Kvalifikacije 1 | 6 | [Knjiga](takprog-2019-20/01_KV1/6_razred/01_knjiga) | 0.1 s | 64 MB | 3 | default |
| 2019-20 | Kvalifikacije 1 | 6 | [Sijalica](takprog-2019-20/01_KV1/6_razred/02_sijalica) | 0.1 s | 64 MB | 6 | default |
| 2019-20 | Kvalifikacije 1 | 6 | [Neplivači](takprog-2019-20/01_KV1/6_razred/03_neplivaci) | 0.1 s | 64 MB | 8 | default |
| 2019-20 | Kvalifikacije 1 | 6 | [Susret](takprog-2019-20/01_KV1/6_razred/04_susret) | 0.1 s | 64 MB | 12 | default |
| 2019-20 | Kvalifikacije 1 | 6 | [Sekcija](takprog-2019-20/01_KV1/6_razred/05_sekcija) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 1 | 6 | [Statistike](takprog-2019-20/01_KV1/6_razred/06_statistike_3od3) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 1 | 6 | [Blizanci](takprog-2019-20/01_KV1/6_razred/07_blizanci) | 1 s | 64 MB | 15 | default |
| 2019-20 | Kvalifikacije 1 | 7 | [Zapeta](takprog-2019-20/01_KV1/7_razred/01_zapeta) | 0.1 s | 64 MB | 4 | default |
| 2019-20 | Kvalifikacije 1 | 7 | [Susret](takprog-2019-20/01_KV1/7_razred/02_susret) | 0.1 s | 64 MB | 12 | default |
| 2019-20 | Kvalifikacije 1 | 7 | [Jaja](takprog-2019-20/01_KV1/7_razred/03_jaja) | 0.1 s | 64 MB | 20 | default |
| 2019-20 | Kvalifikacije 1 | 7 | [Sekcija](takprog-2019-20/01_KV1/7_razred/04_sekcija) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 1 | 7 | [Statistike](takprog-2019-20/01_KV1/7_razred/05_statistike_3od5) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 1 | 7 | [Pokloni za roditelje](takprog-2019-20/01_KV1/7_razred/06_pokloni_za_roditelje) | 1 s | 64 MB | 16 | default |
| 2019-20 | Kvalifikacije 1 | 8 | [Zapeta](takprog-2019-20/01_KV1/8_razred/01_zapeta) | 0.1 s | 64 MB | 4 | default |
| 2019-20 | Kvalifikacije 1 | 8 | [Susret](takprog-2019-20/01_KV1/8_razred/02_susret) | 0.1 s | 64 MB | 12 | default |
| 2019-20 | Kvalifikacije 1 | 8 | [Jaja](takprog-2019-20/01_KV1/8_razred/03_jaja) | 0.1 s | 64 MB | 20 | default |
| 2019-20 | Kvalifikacije 1 | 8 | [Sekcija](takprog-2019-20/01_KV1/8_razred/04_sekcija) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 1 | 8 | [Statistike](takprog-2019-20/01_KV1/8_razred/05_statistike_3od5) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 1 | 8 | [Pokloni za roditelje](takprog-2019-20/01_KV1/8_razred/06_pokloni_za_roditelje) | 1 s | 64 MB | 16 | default |
| 2019-20 | Kvalifikacije 2 | 5 | [Kusur](takprog-2019-20/02_KV2/5_razred/01_kusur) | 0.1 s | 64 MB | 8 | default |
| 2019-20 | Kvalifikacije 2 | 5 | [Deca](takprog-2019-20/02_KV2/5_razred/02_deca) | 0.1 s | 64 MB | 6 | default |
| 2019-20 | Kvalifikacije 2 | 5 | [Kutije](takprog-2019-20/02_KV2/5_razred/03_kutije) | 0.1 s | 64 MB | 8 | default |
| 2019-20 | Kvalifikacije 2 | 5 | [Transformacije (kvalifikacije OŠ druga runda 2019/](takprog-2019-20/02_KV2/5_razred/04_transformacije) | 0.1 s | 64 MB | 5 | default |
| 2019-20 | Kvalifikacije 2 | 5 | [Osmeh](takprog-2019-20/02_KV2/5_razred/05_osmeh) | 0.1 s | 64 MB | 5 | default |
| 2019-20 | Kvalifikacije 2 | 5 | [Statistike3od5 (kvalifikacije OŠ prva runda 2019/2](takprog-2019-20/02_KV2/5_razred/06_triple_double_3od5) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 2 | 5 | [Ruter](takprog-2019-20/02_KV2/5_razred/07_ruter) | 0.13 s | 32 MB | 10 | default |
| 2019-20 | Kvalifikacije 2 | 6 | [Deca](takprog-2019-20/02_KV2/6_razred/01_deca) | 0.1 s | 64 MB | 6 | default |
| 2019-20 | Kvalifikacije 2 | 6 | [Kutije](takprog-2019-20/02_KV2/6_razred/02_kutije) | 0.1 s | 64 MB | 8 | default |
| 2019-20 | Kvalifikacije 2 | 6 | [Transformacije (kvalifikacije OŠ druga runda 2019/](takprog-2019-20/02_KV2/6_razred/03_transformacije) | 0.1 s | 64 MB | 5 | default |
| 2019-20 | Kvalifikacije 2 | 6 | [Osmeh](takprog-2019-20/02_KV2/6_razred/04_osmeh) | 0.1 s | 64 MB | 5 | default |
| 2019-20 | Kvalifikacije 2 | 6 | [Statistike3od5 (kvalifikacije OŠ prva runda 2019/2](takprog-2019-20/02_KV2/6_razred/05_triple_double_3od5) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 2 | 6 | [Dve vrste polica (kvalifikacije OŠ druga runda 201](takprog-2019-20/02_KV2/6_razred/06_dve_police) | 0.1 s | 32 MB | 10 | default |
| 2019-20 | Kvalifikacije 2 | 6 | [Ruter](takprog-2019-20/02_KV2/6_razred/07_ruter) | 0.13 s | 32 MB | 10 | default |
| 2019-20 | Kvalifikacije 2 | 7 | [Odbojka](takprog-2019-20/02_KV2/7_razred/01_odbojka) | 0.1 s | 64 MB | 7 | default |
| 2019-20 | Kvalifikacije 2 | 7 | [Kutije](takprog-2019-20/02_KV2/7_razred/02_kutije) | 0.1 s | 64 MB | 8 | default |
| 2019-20 | Kvalifikacije 2 | 7 | [Horoskop](takprog-2019-20/02_KV2/7_razred/03_horoskop) | 0.1 s | 64 MB | 5 | default |
| 2019-20 | Kvalifikacije 2 | 7 | [Aritmogrif](takprog-2019-20/02_KV2/7_razred/04_aritmogrif) | 0.1 s | 64 MB | 5 | default |
| 2019-20 | Kvalifikacije 2 | 7 | [Dve vrste polica (kvalifikacije OŠ druga runda 201](takprog-2019-20/02_KV2/7_razred/05_dve_police) | 0.1 s | 32 MB | 10 | default |
| 2019-20 | Kvalifikacije 2 | 7 | [Puno figurica (kvalifikacije OŠ druga runda 2019/2](takprog-2019-20/02_KV2/7_razred/06_puno_figurica) | 0.15 s | 16 MB | 10 | default |
| 2019-20 | Kvalifikacije 2 | 8 | [Odbojka](takprog-2019-20/02_KV2/8_razred/01_odbojka) | 0.1 s | 64 MB | 7 | default |
| 2019-20 | Kvalifikacije 2 | 8 | [Kutije](takprog-2019-20/02_KV2/8_razred/02_kutije) | 0.1 s | 64 MB | 8 | default |
| 2019-20 | Kvalifikacije 2 | 8 | [Horoskop](takprog-2019-20/02_KV2/8_razred/03_horoskop) | 0.1 s | 64 MB | 5 | default |
| 2019-20 | Kvalifikacije 2 | 8 | [Aritmogrif](takprog-2019-20/02_KV2/8_razred/04_aritmogrif) | 0.1 s | 64 MB | 5 | default |
| 2019-20 | Kvalifikacije 2 | 8 | [Dve vrste polica (kvalifikacije OŠ druga runda 201](takprog-2019-20/02_KV2/8_razred/05_dve_police) | 0.1 s | 32 MB | 10 | default |
| 2019-20 | Kvalifikacije 2 | 8 | [Puno figurica (kvalifikacije OŠ druga runda 2019/2](takprog-2019-20/02_KV2/8_razred/06_puno_figurica) | 0.15 s | 16 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 5 | [Klackalica](takprog-2019-20/03_KV3/5_razred/01_klackalica) | 0.1 s | 64 MB | 3 | default |
| 2019-20 | Kvalifikacije 3 | 5 | [Prizemlje](takprog-2019-20/03_KV3/5_razred/02_prizemlje) | 0.1 s | 64 MB | 7 | default |
| 2019-20 | Kvalifikacije 3 | 5 | [Riziko](takprog-2019-20/03_KV3/5_razred/03_riziko) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 5 | [Najveći](takprog-2019-20/03_KV3/5_razred/04_najveci_sa_istim_ciframa) | 0.1 s | 64 MB | 7 | default |
| 2019-20 | Kvalifikacije 3 | 5 | [Mali poštar](takprog-2019-20/03_KV3/5_razred/05_mali_postar) | 0.2 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 5 | [ATP pobednik (kvalifikacije OŠ treća runda 2019/20](takprog-2019-20/03_KV3/5_razred/06_atp_pobednik) | 0.2 s | 64 MB | 6 | default |
| 2019-20 | Kvalifikacije 3 | 5 | [Brana](takprog-2019-20/03_KV3/5_razred/07_brana) | 0.3 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 6 | [Klackalica](takprog-2019-20/03_KV3/6_razred/01_klackalica) | 0.1 s | 64 MB | 3 | default |
| 2019-20 | Kvalifikacije 3 | 6 | [Prizemlje](takprog-2019-20/03_KV3/6_razred/02_prizemlje) | 0.1 s | 64 MB | 7 | default |
| 2019-20 | Kvalifikacije 3 | 6 | [Riziko](takprog-2019-20/03_KV3/6_razred/03_riziko) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 6 | [Najveći](takprog-2019-20/03_KV3/6_razred/04_najveci_sa_istim_ciframa) | 0.1 s | 64 MB | 7 | default |
| 2019-20 | Kvalifikacije 3 | 6 | [Mali poštar](takprog-2019-20/03_KV3/6_razred/05_mali_postar) | 0.2 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 6 | [ATP pobednik (kvalifikacije OŠ treća runda 2019/20](takprog-2019-20/03_KV3/6_razred/06_atp_pobednik) | 0.2 s | 64 MB | 6 | default |
| 2019-20 | Kvalifikacije 3 | 6 | [Brana](takprog-2019-20/03_KV3/6_razred/07_brana) | 0.3 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 7 | [Riziko](takprog-2019-20/03_KV3/7_razred/01_riziko) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 7 | [Najveći](takprog-2019-20/03_KV3/7_razred/02_najveci_sa_istim_ciframa) | 0.1 s | 64 MB | 7 | default |
| 2019-20 | Kvalifikacije 3 | 7 | [Mali poštar](takprog-2019-20/03_KV3/7_razred/03_mali_postar) | 0.2 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 7 | [ATP lista](takprog-2019-20/03_KV3/7_razred/04_atp_lista) | 0.2 s | 32 MB | 7 | default |
| 2019-20 | Kvalifikacije 3 | 7 | [Slatkiši za sav novac (kvalifikacije OŠ treća rund](takprog-2019-20/03_KV3/7_razred/05_slatkisi_za_sav_novac) | 0.35 s | 32 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 7 | [Investicioni fond (kvalifikacije OŠ treća runda 20](takprog-2019-20/03_KV3/7_razred/06_investicioni_fond) | 0.2 s | 64 MB | 5 | default |
| 2019-20 | Kvalifikacije 3 | 8 | [Riziko](takprog-2019-20/03_KV3/8_razred/01_riziko) | 0.1 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 8 | [Najveći](takprog-2019-20/03_KV3/8_razred/02_najveci_sa_istim_ciframa) | 0.1 s | 64 MB | 7 | default |
| 2019-20 | Kvalifikacije 3 | 8 | [Mali poštar](takprog-2019-20/03_KV3/8_razred/03_mali_postar) | 0.2 s | 64 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 8 | [ATP lista](takprog-2019-20/03_KV3/8_razred/04_atp_lista) | 0.2 s | 32 MB | 7 | default |
| 2019-20 | Kvalifikacije 3 | 8 | [Slatkiši za sav novac (kvalifikacije OŠ treća rund](takprog-2019-20/03_KV3/8_razred/05_slatkisi_za_sav_novac) | 0.35 s | 32 MB | 10 | default |
| 2019-20 | Kvalifikacije 3 | 8 | [Investicioni fond (kvalifikacije OŠ treća runda 20](takprog-2019-20/03_KV3/8_razred/06_investicioni_fond) | 0.2 s | 64 MB | 5 | default |
| 2019-20 | Revijalno | 5–6 | [Dan](takprog-2019-20/04_REVIJALNO/5-6_razred/01_dan_u_mesecu) | 0.1 s | 16 MB | 10 | default |
| 2019-20 | Revijalno | 5–6 | [Vetrenje](takprog-2019-20/04_REVIJALNO/5-6_razred/02_vetrenje) | 0.1 s | 16 MB | 8 | default |
| 2019-20 | Revijalno | 5–6 | [Produžavanje titlova](takprog-2019-20/04_REVIJALNO/5-6_razred/03_produzavanje_titlova) | 0.1 s | 16 MB | 10 | default |
| 2019-20 | Revijalno | 5–6 | [ABACABA](takprog-2019-20/04_REVIJALNO/5-6_razred/04_abacaba) | 0.1 s | 16 MB | 10 | default |
| 2019-20 | Revijalno | 5–6 | [Najmanja suma od datih cifara](takprog-2019-20/04_REVIJALNO/5-6_razred/05_min_suma_od_cifara) | 0.1 s | 16 MB | 10 | default |
| 2019-20 | Revijalno | 7–8 | [Maksimalni prinos](takprog-2019-20/04_REVIJALNO/7-8_razred/01_maksimalni_prinos) | 0.1 s | 16 MB | 10 | default |
| 2019-20 | Revijalno | 7–8 | [Najveći duplikat](takprog-2019-20/04_REVIJALNO/7-8_razred/02_najveci_duplikat) | 0.1 s | 16 MB | 10 | default |
| 2019-20 | Revijalno | 7–8 | [Sume trapeza](takprog-2019-20/04_REVIJALNO/7-8_razred/03_sume_trapeza) | 0.2 s | 64 MB | 10 | default |
| 2019-20 | Revijalno | 7–8 | [Broj sortiranih trojki](takprog-2019-20/04_REVIJALNO/7-8_razred/04_broj_sortiranih_trojki) | 0.3 s | 16 MB | 10 | default |
| 2019-20 | Revijalno | 7–8 | [Bez cifre 3](takprog-2019-20/04_REVIJALNO/7-8_razred/05_ne_sadrze_cifru_3) | 0.1 s | 16 MB | 10 | default |
| 2019-20 | Državno | 5–6 | [Brisanje](takprog-2019-20/05_DRZAVNO/5-6_razred/01_brisanje) | 0.037 s | 16 MB | 10 | default |
| 2019-20 | Državno | 5–6 | [Aeromiting](takprog-2019-20/05_DRZAVNO/5-6_razred/02_aeromiting) | 0.05 s | 16 MB | 10 | default |
| 2019-20 | Državno | 5–6 | [Sirakuza](takprog-2019-20/05_DRZAVNO/5-6_razred/03_sirakuza) | 0.04 s | 16 MB | 10 | default |
| 2019-20 | Državno | 5–6 | [Transformacije](takprog-2019-20/05_DRZAVNO/5-6_razred/04_transformacije) | 0.05 s | 64 MB | 10 | default |
| 2019-20 | Državno | 7–8 | [Grafika](takprog-2019-20/05_DRZAVNO/7-8_razred/01_grafika) | 0.5 s | 256 MB | 10 | default |
| 2019-20 | Državno | 7–8 | [Treniranje](takprog-2019-20/05_DRZAVNO/7-8_razred/02_treniranje) | 0.7 s | 512 MB | 10 | default |
| 2019-20 | Državno | 7–8 | [Svemir](takprog-2019-20/05_DRZAVNO/7-8_razred/03_svemir) | 0.4 s | 64 MB | 10 | default |
| 2019-20 | Državno | 7–8 | [Mali rečnik](takprog-2019-20/05_DRZAVNO/7-8_razred/04_mali_recnik) | 0.3 s | 24 MB | 10 | default |
| 2019-20 | SIO | — | [Usavršavanje](takprog-2019-20/06_SIO/01_usavrsavanje) | 0.5 s | 64 MB | 10 | default |
| 2019-20 | SIO | — | [Borba](takprog-2019-20/06_SIO/02_borba) | 0.5 s | 32 MB | 10 | default |
| 2019-20 | SIO | — | [Hačapuri](takprog-2019-20/06_SIO/03_hacapuri) | 0.2 s | 32 MB | 10 | default |
| 2019-20 | SIO | — | [Nina Gruzijska](takprog-2019-20/06_SIO/04_nina_gruzijska) | 1 s | 256 MB | 10 | default |
| 2018-19 | Okružno | — | [festival](takprog-2018-19/01_OKRUZNO/01_festival) | 0.2 s | 32 MB | 25 | default |
| 2018-19 | Okružno | — | [dijagonale](takprog-2018-19/01_OKRUZNO/02_dijagonale_na_sahovskoj_tabli) | 0.2 s | 32 MB | 25 | default |
| 2018-19 | Okružno | — | [medalje](takprog-2018-19/01_OKRUZNO/03_medalje) | 0.2 s | 32 MB | 25 | default |
| 2018-19 | Okružno | — | [brojevi](takprog-2018-19/01_OKRUZNO/04_k_puta_broj_k) | 0.2 s | 32 MB | 25 | default |
| 2018-19 | Okružno | — | [sastanak](takprog-2018-19/01_OKRUZNO/05_sastanak) | 0.2 s | 32 MB | 25 | default |
| 2018-19 | Okružno | — | [cifre](takprog-2018-19/01_OKRUZNO/06_najmanji_broj_sa_najvecim_zbirom_cifara) | 0.2 s | 32 MB | 25 | default |
| 2018-19 | Okružno | — | [parni](takprog-2018-19/01_OKRUZNO/07_k_pola_puta_paran_broj_k) | 0.2 s | 32 MB | 25 | default |
| 2018-19 | Okružno | — | [pravougaonik](takprog-2018-19/01_OKRUZNO/08_pravougaonik_po_kvadrantima) | 0.2 s | 32 MB | 25 | default |
| 2018-19 | Okružno | — | [decimale](takprog-2018-19/01_OKRUZNO/09_k_decimala_razlomka) | 0.2 s | 32 MB | 25 | default |
| 2018-19 | Okružno | — | [bazen](takprog-2018-19/01_OKRUZNO/10_maksimalan_broj_posetilaca_bazena) | 0.2 s | 32 MB | 25 | default |
| 2018-19 | Okružno | — | [brodovi](takprog-2018-19/01_OKRUZNO/11_brodovi) | 0.2 s | 32 MB | 25 | default |
| 2018-19 | Državno | — | [Rastuće cifre](takprog-2018-19/02_DRZAVNO/01_rastuce_cifre) | 0.1 s | 64 MB | 25 | default |
| 2018-19 | Državno | — | [Servis](takprog-2018-19/02_DRZAVNO/02_servis_kamiona) | 0.1 s | 64 MB | 25 | default |
| 2018-19 | Državno | — | [Razlika visina](takprog-2018-19/02_DRZAVNO/03_stanlio_i_olio) | 0.2 s | 16 MB | 25 | default |
| 2018-19 | Državno | — | [Lanac brojeva](takprog-2018-19/02_DRZAVNO/04_lanac_brojeva) | 0.1 s | 16 MB | 25 | default |
| 2018-19 | Državno | — | [Rečnik](takprog-2018-19/02_DRZAVNO/05_najredje_napisana_rec) | 0.8 s | 64 MB | 10 | default |
| 2018-19 | Državno | — | [Visoki učenici](takprog-2018-19/02_DRZAVNO/06_najvisi_decak_i_devojcica) | 0.1 s | 64 MB | 25 | default |
| 2018-19 | Državno | — | [Knjiga](takprog-2018-19/02_DRZAVNO/07_podela_knjige) | 0.1 s | 64 MB | 25 | default |
| 2018-19 | SIO | — | [Podnizovi](takprog-2018-19/03_SIO/01_min_max_duzina_podnizova) | 0.4 s | 32 MB | 10 | default |
| 2018-19 | SIO | — | [Žirafice](takprog-2018-19/03_SIO/02_zirafice) | 0.4 s | 45 MB | 10 | default |
| 2018-19 | SIO | — | [Alarmi](takprog-2018-19/03_SIO/03_alarmi) | 0.3 s | 64 MB | 11 | default |
| 2018-19 | SIO | — | [Niske](takprog-2018-19/03_SIO/04_broj_manjih_reci) | 0.3 s | 16 MB | 10 | default |
| 2017-18 | Okružno | — | [stepeni](takprog-2017-18/01_OKRUZNO/01_stepeni) | 1 s | 64 MB | 20 | default |
| 2017-18 | Okružno | — | [iksoks](takprog-2017-18/01_OKRUZNO/02_iksoks) | 1 s | 64 MB | 20 | default |
| 2017-18 | Okružno | — | [dzudo](takprog-2017-18/01_OKRUZNO/03_dzudo) | 1 s | 64 MB | 20 | default |
| 2017-18 | Okružno | — | [loto](takprog-2017-18/01_OKRUZNO/04_loto) | 1 s | 64 MB | 7 | default |
| 2017-18 | Okružno | — | [uglovi](takprog-2017-18/01_OKRUZNO/05_uglovi) | 1 s | 64 MB | 20 | default |
| 2017-18 | Okružno | — | [sudoku](takprog-2017-18/01_OKRUZNO/06_sudoku) | 0.1 s | 64 MB | 20 | default |
| 2017-18 | Okružno | — | [kartice](takprog-2017-18/01_OKRUZNO/07_kartice) | 0.1 s | 64 MB | 20 | default |
| 2017-18 | Okružno | — | [prag](takprog-2017-18/01_OKRUZNO/08_prag) | 0.2 s | 64 MB | 30 | default |
| 2017-18 | Okružno | — | [parnepar](takprog-2017-18/01_OKRUZNO/09_parnepar) | 1 s | 64 MB | 20 | default |
| 2017-18 | Okružno | — | [numeracija](takprog-2017-18/01_OKRUZNO/10_numeracija) | 1 s | 64 MB | 20 | default |
| 2017-18 | Okružno | — | [origami](takprog-2017-18/01_OKRUZNO/11_origami) | 0.1 s | 64 MB | 20 | default |
| 2017-18 | Okružno | — | [koferi](takprog-2017-18/01_OKRUZNO/12_koferi) | 0.1 s | 64 MB | 20 | default |
| 2017-18 | Državno | 5–6 | [Pločice](takprog-2017-18/02_DRZAVNO/5-6_razred/01_plocice) | 0.1 s | 64 MB | 25 | default |
| 2017-18 | Državno | 5–6 | [Kupovina](takprog-2017-18/02_DRZAVNO/5-6_razred/02_kupovina) | 0.1 s | 64 MB | 25 | default |
| 2017-18 | Državno | 5–6 | [Utovar](takprog-2017-18/02_DRZAVNO/5-6_razred/03_utovar) | 0.2 s | 64 MB | 25 | default |
| 2017-18 | Državno | 5–6 | [Knjige](takprog-2017-18/02_DRZAVNO/5-6_razred/04_knjige) | 0.1 s | 64 MB | 25 | default |
| 2017-18 | Državno | 7–8 | [Fleš-disk](takprog-2017-18/02_DRZAVNO/7-8_razred/01_fles_disk) | 0.1 s | 64 MB | 25 | default |
| 2017-18 | Državno | 7–8 | [Binarni nizovi bez susednih jedinica](takprog-2017-18/02_DRZAVNO/7-8_razred/02_binarni_nizovi_bez_susednih_jedinica) | 1 s | 64 MB | 25 | default |
| 2017-18 | Državno | 7–8 | [Akcije](takprog-2017-18/02_DRZAVNO/7-8_razred/03_akcije) | 0.15 s | 64 MB | 25 | default |
| 2017-18 | Državno | 7–8 | [Domine](takprog-2017-18/02_DRZAVNO/7-8_razred/04_domine) | 0.2 s | 64 MB | 25 | default |
| 2017-18 | SIO | — | [Aranđelovac](takprog-2017-18/03_SIO/01_arandjelovac) | 0.5 s | 64 MB | 38 | default |
| 2017-18 | SIO | — | [Beograd](takprog-2017-18/03_SIO/02_beograd) | 0.5 s | 64 MB | 31 | default |
| 2017-18 | SIO | — | [Vranje](takprog-2017-18/03_SIO/03_vranje) | 0.5 s | 64 MB | 32 | default |
| 2017-18 | SIO | — | [Dunav](takprog-2017-18/03_SIO/04_dunav) | 0.1 s | 32 MB | 10 | default |
| 2016-17 | Okružno | — | [Ples](takprog-2016-17/01_OKRUZNO/01_ples) | 1 s | 64 MB | 15 | default |
| 2016-17 | Okružno | — | [Obuka](takprog-2016-17/01_OKRUZNO/02_obuka) | 1 s | 64 MB | 15 | default |
| 2016-17 | Okružno | — | [Zbir](takprog-2016-17/01_OKRUZNO/03_zbir) | 1 s | 64 MB | 15 | default |
| 2016-17 | Okružno | — | [Delioci](takprog-2016-17/01_OKRUZNO/04_delioci) | 1 s | 64 MB | 15 | default |
| 2016-17 | Okružno | — | [Džeparac](takprog-2016-17/01_OKRUZNO/05_dzeparac) | 1 s | 64 MB | 15 | default |
| 2016-17 | Okružno | — | [Slika](takprog-2016-17/01_OKRUZNO/06_slika) | 1 s | 64 MB | 15 | default |
| 2016-17 | Okružno | — | [Kviz](takprog-2016-17/01_OKRUZNO/07_kviz) | 1 s | 64 MB | 15 | default |
| 2016-17 | Okružno | — | [Prosek](takprog-2016-17/01_OKRUZNO/08_prosek) | 1 s | 64 MB | 15 | default |
| 2016-17 | Okružno | — | [Statusi](takprog-2016-17/01_OKRUZNO/09_statusi) | 1 s | 64 MB | 15 | default |
| 2016-17 | Okružno | — | [Razlomci](takprog-2016-17/01_OKRUZNO/10_razlomci) | 1 s | 64 MB | 15 | default |
| 2016-17 | Okružno | — | [Glumci](takprog-2016-17/01_OKRUZNO/11_glumci) | 1 s | 64 MB | 15 | default |
| 2016-17 | Državno | 5–6 | [Kralj](takprog-2016-17/02_DRZAVNO/5-6_razred/01_kralj) | 0.5 s | 64 MB | 25 | default |
| 2016-17 | Državno | 5–6 | [Arapski u rimski](takprog-2016-17/02_DRZAVNO/5-6_razred/02_arapski_u_rimski) | 1 s | 64 MB | 25 | default |
| 2016-17 | Državno | 5–6 | [Najkraća dopuna do palindroma](takprog-2016-17/02_DRZAVNO/5-6_razred/03_najkraca_dopuna_do_palindroma) | 0.1 s | 64 MB | 25 | default |
| 2016-17 | Državno | 5–6 | [Broj kolone u tabeli](takprog-2016-17/02_DRZAVNO/5-6_razred/04_broj_kolone_u_tabeli) | 0.5 s | 64 MB | 25 | default |
| 2016-17 | Državno | 7–8 | [Stolice](takprog-2016-17/02_DRZAVNO/7-8_razred/01_stolice) | 0.5 s | 64 MB | 25 | default |
| 2016-17 | Državno | 7–8 | [Rimski u arapski](takprog-2016-17/02_DRZAVNO/7-8_razred/02_rimski_u_arapski) | 0.5 s | 64 MB | 25 | default |
| 2016-17 | Državno | 7–8 | [Pikado](takprog-2016-17/02_DRZAVNO/7-8_razred/03_pikado) | 1.3 s | 64 MB | 25 | default |
| 2016-17 | Državno | 7–8 | [Kolona u tabeli sa datim brojem](takprog-2016-17/02_DRZAVNO/7-8_razred/04_kolona_u_tabeli_sa_datim_brojem) | 0.5 s | 64 MB | 25 | default |
| 2016-17 | SIO | — | [Karte](takprog-2016-17/03_SIO/01_karte) | 0.6 s | 64 MB | 26 | default |
| 2016-17 | SIO | — | [Ograda](takprog-2016-17/03_SIO/02_ograda) | 1 s | 64 MB | 26 | default |
| 2016-17 | SIO | — | [Podcifra](takprog-2016-17/03_SIO/03_podcifra) | 1 s | 64 MB | 20 | default |
