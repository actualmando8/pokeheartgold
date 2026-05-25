/*
 * unk_data_020FDB44.c - Movement command step tables
 * 
 * Pure data file containing gMovementCmdSteps_NNN arrays.
 * Each array holds function pointers for movement command steps.
 * All tables reference MapObjectMovementCmdXXX_StepN functions.
 */

#include "global.h"
#include "constants/sndseq.h"
#include "constants/species.h"
#include "constants/maps.h"
#include "constants/pokemon.h"
#include "constants/flags.h"
#include "constants/vars.h"
#include "constants/items.h"
#include "constants/std_script.h"
#include "constants/field_move_response.h"

/* Forward declarations for movement command step functions */
typedef void (*MovementStepFunc)(void);

/* Short-hand macros for step references */
#define S(cmd, step) MapObjectMovementCmd##cmd##_##step

/* Simple 3-entry tables */
MovementStepFunc gMovementCmdSteps_098[] = {S(098, Step0), S(098, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_099[] = {S(099, Step0), S(098, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_097[] = {S(097, Step0), S(098, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_096[] = {S(096, Step0), S(098, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_064[] = {S(064, Step0), S(064, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_090[] = {S(090, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_060[] = {S(060, Step0), S(064, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_088[] = {S(088, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_092[] = {S(092, Step0), S(092, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_082[] = {S(082, Step0), S(082, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_056[] = {S(056, Step0), S(092, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_080[] = {S(080, Step0), S(082, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_055[] = {S(055, Step0), S(092, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_007[] = {S(007, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_100[] = {S(100, Step0), S(100, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_075[] = {S(075, Step0), S(075, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_103[] = {S(103, Step0), S(075, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_101[] = {S(101, Step0), S(101, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_040[] = {S(040, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_038[] = {S(038, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_036[] = {S(036, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_034[] = {S(034, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_032[] = {S(032, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_030[] = {S(030, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_068[] = {S(068, Step0), S(068, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_067[] = {S(067, Step0), S(067, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_066[] = {S(066, Step0), S(064, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_065[] = {S(065, Step0), S(064, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_084[] = {S(084, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_063[] = {S(063, Step0), S(064, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_062[] = {S(062, Step0), S(064, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_061[] = {S(061, Step0), S(064, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_016[] = {S(016, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_095[] = {S(095, Step0), S(092, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_094[] = {S(094, Step0), S(092, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_093[] = {S(093, Step0), S(092, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_008[] = {S(008, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_059[] = {S(059, Step0), S(092, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_058[] = {S(058, Step0), S(092, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_057[] = {S(057, Step0), S(092, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_015[] = {S(015, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_014[] = {S(014, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_013[] = {S(013, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_012[] = {S(012, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_011[] = {S(011, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_010[] = {S(010, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_009[] = {S(009, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_006[] = {S(006, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_004[] = {S(004, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_003[] = {S(003, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_002[] = {S(002, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_001[] = {S(001, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_031[] = {S(031, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_104[] = {S(104, Step0), S(102, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_029[] = {S(029, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_028[] = {S(028, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_027[] = {S(027, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_026[] = {S(026, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_025[] = {S(025, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_024[] = {S(024, Step0), S(040, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_087[] = {S(087, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_086[] = {S(086, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_085[] = {S(085, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_005[] = {S(005, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_023[] = {S(023, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_022[] = {S(022, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_021[] = {S(021, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_020[] = {S(020, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_019[] = {S(019, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_018[] = {S(018, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_017[] = {S(017, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_000[] = {S(000, Step0), S(090, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_105[] = {S(105, Step0), S(105, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_106[] = {S(106, Step0), S(106, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_102[] = {S(102, Step0), S(102, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_107[] = {S(107, Step0), S(108, Step1), S(107, Step2), S(108, Step1),
    S(107, Step4), S(108, Step1), S(107, Step6), S(108, Step1),
    S(107, Step8), S(108, Step1), S(107, Step10), S(108, Step1),
    S(107, Step12), S(108, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_109[] = {S(107, Step0), S(108, Step1), S(107, Step2), S(108, Step1),
    S(107, Step4), S(108, Step1), S(107, Step6), S(108, Step1),
    S(107, Step8), S(108, Step1), S(107, Step10), S(108, Step1),
    S(109, Step12), S(108, Step1), S(098, Step2)};
MovementStepFunc gMovementCmdSteps_111[] = {S(111, Step0), S(108, Step1), S(111, Step2), S(108, Step1),
    S(111, Step4), S(108, Step1), S(111, Step6), S(108, Step1),
    S(111, Step6), S(108, Step1), S(111, Step10), S(108, Step1),
    S(111, Step10), S(108, Step1), S(111, Step14), S(108, Step1),
    S(111, Step16), S(108, Step1), S(111, Step18), S(108, Step1), S(098, Step2)};
