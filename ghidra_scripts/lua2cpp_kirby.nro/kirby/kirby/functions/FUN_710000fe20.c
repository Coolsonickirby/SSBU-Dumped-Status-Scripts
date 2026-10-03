
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000fe20(L2CValue *param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  iVar1 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_TERM;
  iVar4 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_0;
  if ((bVar3 & 1U) == 0) {
    for (; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      lib::L2CValue::L2CValue(aLStack96,iVar4);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::ItemModule__is_have_item_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,iVar4);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ItemModule__remove_item_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar5);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
  }
  else {
    FUN_710000ffd0(param_2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4)
    ;
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

