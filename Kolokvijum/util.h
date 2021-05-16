/**
 * @file util.h
 * @brief Koristi se za deklaraciju pomocnih funkcija
 * @author Srecko Veselinovic
 * @date 16-05-2021
 */

#ifndef UTIL_H_
#define UTIL_H_

#include <stdint.h>

/// Makro za definisanje vrednosti true koja pokazuje da je niz geometrjiski
#define TRUE 1
/// Marko za definisanje vrednost false koja pokazuje da niz nije geometrijski
#define FALSE 0
/// Makro za sortiranje od najnizeg ga najvecem broju
#define UP 1
/// Makro za sortiranje od najviseg ga najnizem broju
#define DOWN 0

/**
 * Funkcija Sort sortira niz u zavisnosti od moda
 * @param array - ulaz tipa int16_t - sluzi za skladistenje niza koji sortiramo
 * @param array_length - ulaz tipa int16_t - predstavlja duzinu unetog niza
 * @param mode - ulaz tipa int8_t - definise da li ce sortiranje biti od najveceg do najmanje
 * ili obrnuto
 * @return Nema povratnu vrednost
 */
void Sort(int16_t* array, int16_t array_length, int8_t mode);

/**
 * Funkcija Check vrsi proveru da li je niz geometrjiski
 * @param array - ulazi tipa int16_t - niz koji proveravamo da li je geometrijski
 * @return Vrednosti TRUE ili FALSE, definisane kao makro konstante za vrednost 1 i 0
 */
void Check(int16_t *array);

#endif /* UTIL_H_ */
