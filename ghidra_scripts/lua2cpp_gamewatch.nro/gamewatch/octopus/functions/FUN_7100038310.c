
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100038310(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  FighterEntryID FVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  FighterEntry *pFVar8;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_FLAG_IGNORE_OBJECT_0)
  ;
  lib::L2CValue::operator+(aLStack80,param_2);
  lib::L2CValue::~L2CValue(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  uVar6 = lib::L2CValue::operator==(aLStack80,param_3);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) goto LAB_7100038648;
  lib::L2CValue::L2CValue(aLStack80,2);
  lib::L2CValue::operator/(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::FighterManager__get_entry_id_impl(LUA_SCRIPT_LINE_MAP_CORRECTION,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  FVar4 = lib::L2CValue::as_integer(aLStack128);
  pvVar7 = (void *)app::lua_bind::FighterManager__get_fighter_entry_impl
                             (LUA_SCRIPT_LINE_MAP_CORRECTION,FVar4);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,pvVar7);
  }
  lib::L2CValue::L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack80,1);
  lib::L2CValue::operator&(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((bVar2 & 1U) == 0) {
    pFVar8 = (FighterEntry *)lib::L2CValue::as_pointer(aLStack144);
    uVar5 = app::lua_bind::FighterEntry__current_fighter_id_impl(pFVar8);
    lib::L2CValue::L2CValue(aLStack80,uVar5);
    lib::L2CValue::operator=(aLStack160,aLStack80);
    this = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,1);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    pFVar8 = (FighterEntry *)lib::L2CValue::as_pointer(aLStack144);
    uVar5 = app::lua_bind::FighterEntry__get_fighter_id_impl(pFVar8,iVar3,true);
    lib::L2CValue::L2CValue(aLStack80,uVar5);
    lib::L2CValue::operator=(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    this = aLStack176;
  }
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_FLAG_IGNORE_OBJECT_0)
  ;
  lib::L2CValue::operator+(aLStack80,param_2);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::as_bool(param_3);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__set_flag_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack176);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::sv_battle_object::is_active(uVar5);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
LAB_7100038620:
    lib::L2CValue::~L2CValue(aLStack80);
  }
  else {
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::sv_battle_object::is_null(uVar5);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack192);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar5);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,pvVar7);
      }
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INSTANCE_WORK_ID_FLAG_GAMEWATCH_OCTOPUS_DAMAGE);
      bVar1 = lib::L2CValue::as_bool(param_3);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
      app::lua_bind::WorkModule__set_flag_impl(pBVar9,(bool)(bVar1 & 1),iVar3);
      lib::L2CValue::~L2CValue(aLStack176);
      goto LAB_7100038620;
    }
  }
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100038648:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

