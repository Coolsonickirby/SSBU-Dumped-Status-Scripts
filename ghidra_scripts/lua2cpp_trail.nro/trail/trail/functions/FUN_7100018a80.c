
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018a80(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_INT_TARGET_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack48);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::~L2CValue(aLStack48);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::sv_battle_object::is_active(uVar4);
  lib::L2CValue::L2CValue(aLStack48,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((bVar2 & 1U) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    uVar4 = app::sv_battle_object::category(uVar4);
    lib::L2CValue::L2CValue(aLStack80,uVar4 & 0xff);
    lib::L2CValue::L2CValue(aLStack48,_BATTLE_OBJECT_CATEGORY_FIGHTER);
    uVar5 = lib::L2CValue::operator==(aLStack80,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack64);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack48,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack48,pvVar6);
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_TRAIL_SPECIAL_LW_REBOUND);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack48);
      app::lua_bind::WorkModule__off_flag_impl(pBVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack48);
    }
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

