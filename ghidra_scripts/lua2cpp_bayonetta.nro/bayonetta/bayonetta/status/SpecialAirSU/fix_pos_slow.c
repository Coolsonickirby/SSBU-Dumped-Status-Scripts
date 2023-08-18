
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialAirSD_fix_pos_slow
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_S_HOLD_END);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) goto LAB_710000652c;
  }
  lib::L2CValue::L2CValue(aLStack64,false);
  FUN_7100006580(this,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_710000652c:
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

