
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001ba40(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_INT_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLAG_CORRECT_CHANGED);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_INT_COUNTER);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_INT_ARRIVE_TIME);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      uVar5 = lib::L2CValue::operator==(aLStack64,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_GROUND_CORRECT_KIND_NONE);
        GVar4 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::GroundModule__correct_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),GVar4);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue
                  (aLStack64,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLAG_CORRECT_CHANGED);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

