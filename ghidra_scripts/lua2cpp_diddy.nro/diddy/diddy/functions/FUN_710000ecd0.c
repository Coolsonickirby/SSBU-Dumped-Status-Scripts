
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ecd0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_FLAG_PUTOUT_OK);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_WORK_INT_BANANA_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ItemManager__remove_item_from_id_impl
              (FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_UP_Z,uVar4);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_FLAG_THROW_SUCCESS);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack96,0x133f56465f);
    uVar6 = lib::L2CValue::as_integer(aLStack80);
    uVar7 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_SPECIAL_LW_INTERVAL_FRAME)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar5);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

