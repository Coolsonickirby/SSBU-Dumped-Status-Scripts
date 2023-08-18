
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNLoop_exit(L2CFighterKirby *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar4);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_LOOP);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_DRINK_ITEM);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_SWALLOW);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) {
          FUN_710000ffd0(this);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack64);
        }
      }
      else {
        FUN_710000ffd0(this);
      }
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_AREA_KIND_EAT_ITEM);
    lib::L2CValue::L2CValue(aLStack80,false);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    bVar2 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar3,(bool)(bVar2 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  return;
}

