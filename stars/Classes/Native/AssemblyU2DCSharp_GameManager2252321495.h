#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"

// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// Tile[0...,0...]
struct TileU5BU2CU5D_t1358904254;
// System.Collections.Generic.List`1<Tile[]>
struct List_1_t728025385;
// System.Collections.Generic.List`1<Tile>
struct List_1_t2098562912;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// GameState GameManager::State
	int32_t ___State_2;
	// System.Single GameManager::delay
	float ___delay_3;
	// System.Boolean GameManager::moveMade
	bool ___moveMade_4;
	// System.Boolean[] GameManager::lineMoveComplete
	BooleanU5BU5D_t3568034315* ___lineMoveComplete_5;
	// UnityEngine.GameObject GameManager::YouWonText
	GameObject_t1756533147 * ___YouWonText_6;
	// UnityEngine.GameObject GameManager::GameOverText
	GameObject_t1756533147 * ___GameOverText_7;
	// UnityEngine.UI.Text GameManager::GameOverScoreText
	Text_t356221433 * ___GameOverScoreText_8;
	// UnityEngine.GameObject GameManager::GameOverPanel
	GameObject_t1756533147 * ___GameOverPanel_9;
	// UnityEngine.GameObject GameManager::ContinueButtonWon
	GameObject_t1756533147 * ___ContinueButtonWon_10;
	// UnityEngine.GameObject GameManager::ContinueButtonLoose
	GameObject_t1756533147 * ___ContinueButtonLoose_11;
	// UnityEngine.GameObject GameManager::MainPanel
	GameObject_t1756533147 * ___MainPanel_12;
	// Tile[0...,0...] GameManager::AllTiles
	TileU5BU2CU5D_t1358904254* ___AllTiles_13;
	// System.Collections.Generic.List`1<Tile[]> GameManager::columns
	List_1_t728025385 * ___columns_14;
	// System.Collections.Generic.List`1<Tile[]> GameManager::rows
	List_1_t728025385 * ___rows_15;
	// System.Collections.Generic.List`1<Tile> GameManager::EmptyTiles
	List_1_t2098562912 * ___EmptyTiles_16;

public:
	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_delay_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___delay_3)); }
	inline float get_delay_3() const { return ___delay_3; }
	inline float* get_address_of_delay_3() { return &___delay_3; }
	inline void set_delay_3(float value)
	{
		___delay_3 = value;
	}

	inline static int32_t get_offset_of_moveMade_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___moveMade_4)); }
	inline bool get_moveMade_4() const { return ___moveMade_4; }
	inline bool* get_address_of_moveMade_4() { return &___moveMade_4; }
	inline void set_moveMade_4(bool value)
	{
		___moveMade_4 = value;
	}

	inline static int32_t get_offset_of_lineMoveComplete_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___lineMoveComplete_5)); }
	inline BooleanU5BU5D_t3568034315* get_lineMoveComplete_5() const { return ___lineMoveComplete_5; }
	inline BooleanU5BU5D_t3568034315** get_address_of_lineMoveComplete_5() { return &___lineMoveComplete_5; }
	inline void set_lineMoveComplete_5(BooleanU5BU5D_t3568034315* value)
	{
		___lineMoveComplete_5 = value;
		Il2CppCodeGenWriteBarrier(&___lineMoveComplete_5, value);
	}

	inline static int32_t get_offset_of_YouWonText_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___YouWonText_6)); }
	inline GameObject_t1756533147 * get_YouWonText_6() const { return ___YouWonText_6; }
	inline GameObject_t1756533147 ** get_address_of_YouWonText_6() { return &___YouWonText_6; }
	inline void set_YouWonText_6(GameObject_t1756533147 * value)
	{
		___YouWonText_6 = value;
		Il2CppCodeGenWriteBarrier(&___YouWonText_6, value);
	}

	inline static int32_t get_offset_of_GameOverText_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___GameOverText_7)); }
	inline GameObject_t1756533147 * get_GameOverText_7() const { return ___GameOverText_7; }
	inline GameObject_t1756533147 ** get_address_of_GameOverText_7() { return &___GameOverText_7; }
	inline void set_GameOverText_7(GameObject_t1756533147 * value)
	{
		___GameOverText_7 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverText_7, value);
	}

	inline static int32_t get_offset_of_GameOverScoreText_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___GameOverScoreText_8)); }
	inline Text_t356221433 * get_GameOverScoreText_8() const { return ___GameOverScoreText_8; }
	inline Text_t356221433 ** get_address_of_GameOverScoreText_8() { return &___GameOverScoreText_8; }
	inline void set_GameOverScoreText_8(Text_t356221433 * value)
	{
		___GameOverScoreText_8 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverScoreText_8, value);
	}

	inline static int32_t get_offset_of_GameOverPanel_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___GameOverPanel_9)); }
	inline GameObject_t1756533147 * get_GameOverPanel_9() const { return ___GameOverPanel_9; }
	inline GameObject_t1756533147 ** get_address_of_GameOverPanel_9() { return &___GameOverPanel_9; }
	inline void set_GameOverPanel_9(GameObject_t1756533147 * value)
	{
		___GameOverPanel_9 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverPanel_9, value);
	}

	inline static int32_t get_offset_of_ContinueButtonWon_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___ContinueButtonWon_10)); }
	inline GameObject_t1756533147 * get_ContinueButtonWon_10() const { return ___ContinueButtonWon_10; }
	inline GameObject_t1756533147 ** get_address_of_ContinueButtonWon_10() { return &___ContinueButtonWon_10; }
	inline void set_ContinueButtonWon_10(GameObject_t1756533147 * value)
	{
		___ContinueButtonWon_10 = value;
		Il2CppCodeGenWriteBarrier(&___ContinueButtonWon_10, value);
	}

	inline static int32_t get_offset_of_ContinueButtonLoose_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___ContinueButtonLoose_11)); }
	inline GameObject_t1756533147 * get_ContinueButtonLoose_11() const { return ___ContinueButtonLoose_11; }
	inline GameObject_t1756533147 ** get_address_of_ContinueButtonLoose_11() { return &___ContinueButtonLoose_11; }
	inline void set_ContinueButtonLoose_11(GameObject_t1756533147 * value)
	{
		___ContinueButtonLoose_11 = value;
		Il2CppCodeGenWriteBarrier(&___ContinueButtonLoose_11, value);
	}

	inline static int32_t get_offset_of_MainPanel_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___MainPanel_12)); }
	inline GameObject_t1756533147 * get_MainPanel_12() const { return ___MainPanel_12; }
	inline GameObject_t1756533147 ** get_address_of_MainPanel_12() { return &___MainPanel_12; }
	inline void set_MainPanel_12(GameObject_t1756533147 * value)
	{
		___MainPanel_12 = value;
		Il2CppCodeGenWriteBarrier(&___MainPanel_12, value);
	}

	inline static int32_t get_offset_of_AllTiles_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___AllTiles_13)); }
	inline TileU5BU2CU5D_t1358904254* get_AllTiles_13() const { return ___AllTiles_13; }
	inline TileU5BU2CU5D_t1358904254** get_address_of_AllTiles_13() { return &___AllTiles_13; }
	inline void set_AllTiles_13(TileU5BU2CU5D_t1358904254* value)
	{
		___AllTiles_13 = value;
		Il2CppCodeGenWriteBarrier(&___AllTiles_13, value);
	}

	inline static int32_t get_offset_of_columns_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___columns_14)); }
	inline List_1_t728025385 * get_columns_14() const { return ___columns_14; }
	inline List_1_t728025385 ** get_address_of_columns_14() { return &___columns_14; }
	inline void set_columns_14(List_1_t728025385 * value)
	{
		___columns_14 = value;
		Il2CppCodeGenWriteBarrier(&___columns_14, value);
	}

	inline static int32_t get_offset_of_rows_15() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___rows_15)); }
	inline List_1_t728025385 * get_rows_15() const { return ___rows_15; }
	inline List_1_t728025385 ** get_address_of_rows_15() { return &___rows_15; }
	inline void set_rows_15(List_1_t728025385 * value)
	{
		___rows_15 = value;
		Il2CppCodeGenWriteBarrier(&___rows_15, value);
	}

	inline static int32_t get_offset_of_EmptyTiles_16() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___EmptyTiles_16)); }
	inline List_1_t2098562912 * get_EmptyTiles_16() const { return ___EmptyTiles_16; }
	inline List_1_t2098562912 ** get_address_of_EmptyTiles_16() { return &___EmptyTiles_16; }
	inline void set_EmptyTiles_16(List_1_t2098562912 * value)
	{
		___EmptyTiles_16 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyTiles_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
