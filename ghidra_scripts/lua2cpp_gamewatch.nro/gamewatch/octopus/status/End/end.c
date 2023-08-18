
void __thiscall
L2CWeaponGamewatchOctopus::status::End_end(L2CWeaponGamewatchOctopus *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar2 = app::lua_bind::FighterManager__entry_count_impl(LUA_SCRIPT_LINE_MAP_CORRECTION);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack64,2);
  lib::L2CValue::operator_(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if (-1 < iVar2) {
    iVar3 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::L2CValue(aLStack96,false);
      FUN_7100038310(this,aLStack64,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      bVar1 = iVar3 < iVar2;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

