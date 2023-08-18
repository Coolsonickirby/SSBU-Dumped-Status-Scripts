
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRockmanRushcoil::status::CoilSquat_end
          (L2CWeaponRockmanRushcoil *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROCKMAN_RUSHCOIL_INSTANCE_WORK_ID_FLAG_FIRST_JUMP_END);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROCKMAN_RUSHCOIL_AREA_KIND_SPRING);
    lib::L2CValue::L2CValue(aLStack80,true);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROCKMAN_RUSHCOIL_INSTANCE_WORK_ID_FLAG_FIRST_JUMP_END)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

